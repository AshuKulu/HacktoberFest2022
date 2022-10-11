import email_pre as ep
from gensim.models.phrases import Phrases 

def do_process(row): 
global bigram 
temp = ep.preprocess_text(row.email,[ep.lowercase, 
ep.remove_html, 
ep.remove_esc_chars, 
ep.remove_urls, 
ep.remove_numbers, 
ep.remove_punct, 
ep.lemmatize, 
ep.keyword_tokenize]) 

if not isinstance(temp,str): 
print temp 

return ' '.join(bigram[temp.split(" ")]) 

def phrases_train(sen_list,min_ =3): 
if len(sen_list) <= 10: 
print("too small to train! ") 
return 

if isinstance(sen_list,list): 
try: 
bigram = Phrases.load("email_EN_bigrams_spam") 
bigram.add_vocab(sen_list) 
bigram.save("email_EN_bigrams_spam") 
print "retrain!" 

except Exception as ex: 
print "first " 
bigram = Phrases(sen_list, min_count=min_, threshold=2) 
bigram.save("email_EN_bigrams_spam") 
print ex

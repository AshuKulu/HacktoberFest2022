// Todo App using command line

// global storage
let valueArray = [];
let notQuit = true;

// actions
console.log(`
Operations
1: Add
2: View
3: remove
4: edit
5: quit
`);

// functionalities
while (notQuit) {
  let choice = Number(prompt("Enter Your Choise : "));
  switch (choice) {
    // add
    case 1: {
      let newTodo = prompt("Enter your new todo : ");
      if (newTodo) {
        valueArray.push(newTodo);
        break;
      } else {
        console.log("Empty todo");
        break;
      }
    }
    // view
    case 2: {
      for (let i = 0; i < valueArray.length; i++) {
        console.log(`${i} ${valueArray[i]}`);
      }
      break;
    }
    // remove
    case 3: {
      let remove = Number(prompt("Enter Your deleting Index : "));
      if (remove + 1) {
        valueArray.splice(remove, 1);
        break;
      } else {
        console.log("Not valid index");
        break;
      }
    }
    // update
    case 4: {
      let update = Number(prompt("Enter You updating index : "));
      if (update + 1) {
        let newValue = prompt("New value : ");
        valueArray[update] = newValue;
        break;
      } else {
        console.log("Not valid index");
        break;
      }
    }
    // quit
    case 5: {
      let sure = prompt(`Are you sure you want to quit
        press y : for yes
        press n : for no `);
      if (sure) {
        if (sure === "y") {
          notQuit = false;
          console.log("You are exit now");
          break;
        } else {
          console.log("Permission denied to exit");
          break;
        }
      } else {
        console.log("Invalid input ");
        break;
      }
    }
    default: {
      console.log(`
                Operations
                1: Add
                2: View
                3: remove
                4: edit
                5: quit`);
      break;
    }
  }
}

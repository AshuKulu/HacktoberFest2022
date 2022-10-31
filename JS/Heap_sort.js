// * JavaScript program for implementation of Heap Sort

function sort(arr) {
    var N = arr.length;

    // ? Build heap (rearrange array)
    for (var i = Math.floor(N / 2) - 1; i >= 0; i--) heapify(arr, N, i);

    // ?  One by one extract an element from heap
    for (var i = N - 1; i > 0; i--) {
        // Move current root to end
        var temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
function heapify(arr, N, i) {
    var max = i; // Initialize max as root
    var l = 2 * i + 1; // left = 2*i + 1
    var r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < N && arr[l] > arr[max]) max = l;

    // If right child is larger than max so far
    if (r < N && arr[r] > arr[max]) max = r;

    // If max is not root
    if (max != i) {
        var swap = arr[i];
        arr[i] = arr[max];
        arr[max] = swap;

        // Recursively heapify the affected sub-tree
        heapify(arr, N, max);
    }
}

// ? A utility function to print array of size n
function printArray(arr) {
    var N = arr.length;
    for (var i = 0; i < N; ++i) console.log(arr[i] + " ");
}

var arr = [12, 11, 13, 5, 6, 7];
var N = arr.length;

sort(arr);

console.log("Sorted array is");
printArray(arr, N);

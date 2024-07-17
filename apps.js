// // user memberitau berapa panjang
// // user input value

const array_length = prompt("Array nya mau berapa panjang :");
const type = prompt("ASC / DESC : ");

const testArray = [];

for (let i = 0; i < Number(array_length); i++) {
  const userValue = prompt("Masukan huruf : ");
  if (typeof userValue === "string") {
    testArray.push(userValue);
  } else {4
    testArray.push(Number(userValue));
  }
}

function sortArray(array, type) {
  let sortedArray;

  if (/\d/.test(array[0])) {
    if (type === "asc") {
      sortedArray = array.sort((a, b) => a - b);
    } else if (type === "desc") {
      sortedArray = array.sort((a, b) => b - a);
    } else {
      console.error("Please choose between asc / desc");
    }

    return sortedArray?.map((number) => Number(number));
  } else {
    if (type === "asc") {
      sortedArray = array.sort((a, b) => a.localeCompare(b));
    } else if (type === "desc") {
      sortedArray = array.sort((a, b) => b.localeCompare(a));
    } else {
      console.error("Please choose between asc / desc");
    }

    return sortedArray;
  }
}

const sorted = sortArray(testArray, type.toLowerCase());
console.log(sorted);
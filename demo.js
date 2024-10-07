function selectionSort(arr){
    const n = arr.length;
    for(let i =0; i<n-1 ; i++){
        let minIndex = i;
        for(let j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;

            }
        }


        if(minIndex !==1){
            let temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    return arr;
}

const numbers = [10,78,98,79,56,98,98,90,54,2,3,5];
const sortNumbers = selectionSort(numbers);
console.log(sortNumbers);

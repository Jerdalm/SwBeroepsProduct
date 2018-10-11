int mapFunctie(long input, long inputVan, long inputTot, long outputVan, long outputTot) {
  long rangeIn = inputTot - inputVan;
  long rangeOut = outputTot - outputVan;
  float rangeInFloat = rangeIn;
  
  float deling = (input - inputVan) / rangeInFloat;

  float eindresultaat = deling * rangeOut;

  return eindresultaat;
}

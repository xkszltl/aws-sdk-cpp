﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/devicefarm/model/ListOfferingTransactionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOfferingTransactionsResult::ListOfferingTransactionsResult()
{
}

ListOfferingTransactionsResult::ListOfferingTransactionsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOfferingTransactionsResult& ListOfferingTransactionsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("offeringTransactions"))
  {
    Array<JsonValue> offeringTransactionsJsonList = jsonValue.GetArray("offeringTransactions");
    for(unsigned offeringTransactionsIndex = 0; offeringTransactionsIndex < offeringTransactionsJsonList.GetLength(); ++offeringTransactionsIndex)
    {
      m_offeringTransactions.push_back(offeringTransactionsJsonList[offeringTransactionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

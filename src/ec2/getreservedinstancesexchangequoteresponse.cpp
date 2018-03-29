/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservedinstancesexchangequoteresponse.h"
#include "getreservedinstancesexchangequoteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  GetReservedInstancesExchangeQuoteResponse
 *
 * @brief  Handles EC2 GetReservedInstancesExchangeQuote responses.
 *
 * @see    EC2Client::getReservedInstancesExchangeQuote
 */

/**
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservedInstancesExchangeQuoteResponse::GetReservedInstancesExchangeQuoteResponse(
        const GetReservedInstancesExchangeQuoteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetReservedInstancesExchangeQuoteResponsePrivate(this), parent)
{
    setRequest(new GetReservedInstancesExchangeQuoteRequest(request));
    setReply(reply);
}

const GetReservedInstancesExchangeQuoteRequest * GetReservedInstancesExchangeQuoteResponse::request() const
{
    Q_D(const GetReservedInstancesExchangeQuoteResponse);
    return static_cast<const GetReservedInstancesExchangeQuoteRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetReservedInstancesExchangeQuote response.
 *
 * @param  response  Response to parse.
 */
void GetReservedInstancesExchangeQuoteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReservedInstancesExchangeQuoteResponsePrivate
 *
 * @brief  Private implementation for GetReservedInstancesExchangeQuoteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservedInstancesExchangeQuoteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReservedInstancesExchangeQuoteResponse instance.
 */
GetReservedInstancesExchangeQuoteResponsePrivate::GetReservedInstancesExchangeQuoteResponsePrivate(
    GetReservedInstancesExchangeQuoteQueueResponse * const q) : GetReservedInstancesExchangeQuotePrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetReservedInstancesExchangeQuoteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReservedInstancesExchangeQuoteResponsePrivate::GetReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservedInstancesExchangeQuoteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

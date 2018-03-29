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

#include "getattributevaluesresponse.h"
#include "getattributevaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/**
 * @class  GetAttributeValuesResponse
 *
 * @brief  Handles Pricing GetAttributeValues responses.
 *
 * @see    PricingClient::getAttributeValues
 */

/**
 * @brief  Constructs a new GetAttributeValuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAttributeValuesResponse::GetAttributeValuesResponse(
        const GetAttributeValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetAttributeValuesResponse(new GetAttributeValuesResponsePrivate(this), parent)
{
    setRequest(new GetAttributeValuesRequest(request));
    setReply(reply);
}

const GetAttributeValuesRequest * GetAttributeValuesResponse::request() const
{
    Q_D(const GetAttributeValuesResponse);
    return static_cast<const GetAttributeValuesRequest *>(d->request);
}

/**
 * @brief  Parse a Pricing GetAttributeValues response.
 *
 * @param  response  Response to parse.
 */
void GetAttributeValuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAttributeValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAttributeValuesResponsePrivate
 *
 * @brief  Private implementation for GetAttributeValuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributeValuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAttributeValuesResponse instance.
 */
GetAttributeValuesResponsePrivate::GetAttributeValuesResponsePrivate(
    GetAttributeValuesResponse * const q) : PricingResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pricing GetAttributeValuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAttributeValuesResponsePrivate::parseGetAttributeValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAttributeValuesResponse"));
    /// @todo
}

} // namespace Pricing
} // namespace QtAws

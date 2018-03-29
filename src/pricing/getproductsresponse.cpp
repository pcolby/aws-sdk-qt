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

#include "getproductsresponse.h"
#include "getproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/**
 * @class  GetProductsResponse
 *
 * @brief  Handles Pricing GetProducts responses.
 *
 * @see    PricingClient::getProducts
 */

/**
 * @brief  Constructs a new GetProductsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetProductsResponse::GetProductsResponse(
        const GetProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PricingResponse(new GetProductsResponsePrivate(this), parent)
{
    setRequest(new GetProductsRequest(request));
    setReply(reply);
}

const GetProductsRequest * GetProductsResponse::request() const
{
    Q_D(const GetProductsResponse);
    return static_cast<const GetProductsRequest *>(d->request);
}

/**
 * @brief  Parse a Pricing GetProducts response.
 *
 * @param  response  Response to parse.
 */
void GetProductsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetProductsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetProductsResponsePrivate
 *
 * @brief  Private implementation for GetProductsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetProductsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetProductsResponse instance.
 */
GetProductsResponsePrivate::GetProductsResponsePrivate(
    GetProductsResponse * const q) : PricingResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pricing GetProductsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetProductsResponsePrivate::parseGetProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProductsResponse"));
    /// @todo
}

} // namespace Pricing
} // namespace QtAws

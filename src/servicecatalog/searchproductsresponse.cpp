/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchproductsresponse.h"
#include "searchproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  SearchProductsResponse
 *
 * @brief  Handles ServiceCatalog SearchProducts responses.
 *
 * @see    ServiceCatalogClient::searchProducts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchProductsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProductsResponsePrivate(this), parent)
{
    setRequest(new SearchProductsRequest(request));
    setReply(reply);
}

const SearchProductsRequest * SearchProductsResponse::request() const
{
    Q_D(const SearchProductsResponse);
    return static_cast<const SearchProductsRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog SearchProducts response.
 *
 * @param  response  Response to parse.
 */
void SearchProductsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchProductsResponsePrivate
 *
 * @brief  Private implementation for SearchProductsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchProductsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchProductsResponse instance.
 */
SearchProductsResponsePrivate::SearchProductsResponsePrivate(
    SearchProductsQueueResponse * const q) : SearchProductsPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog SearchProductsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchProductsResponsePrivate::SearchProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProductsResponse"));
    /// @todo
}

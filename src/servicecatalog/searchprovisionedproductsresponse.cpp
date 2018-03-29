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

#include "searchprovisionedproductsresponse.h"
#include "searchprovisionedproductsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  SearchProvisionedProductsResponse
 *
 * @brief  Handles ServiceCatalog SearchProvisionedProducts responses.
 *
 * @see    ServiceCatalogClient::searchProvisionedProducts
 */

/**
 * @brief  Constructs a new SearchProvisionedProductsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchProvisionedProductsResponse::SearchProvisionedProductsResponse(
        const SearchProvisionedProductsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProvisionedProductsResponsePrivate(this), parent)
{
    setRequest(new SearchProvisionedProductsRequest(request));
    setReply(reply);
}

const SearchProvisionedProductsRequest * SearchProvisionedProductsResponse::request() const
{
    Q_D(const SearchProvisionedProductsResponse);
    return static_cast<const SearchProvisionedProductsRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog SearchProvisionedProducts response.
 *
 * @param  response  Response to parse.
 */
void SearchProvisionedProductsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchProvisionedProductsResponsePrivate
 *
 * @brief  Private implementation for SearchProvisionedProductsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchProvisionedProductsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchProvisionedProductsResponse instance.
 */
SearchProvisionedProductsResponsePrivate::SearchProvisionedProductsResponsePrivate(
    SearchProvisionedProductsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog SearchProvisionedProductsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchProvisionedProductsResponsePrivate::SearchProvisionedProductsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProvisionedProductsResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws

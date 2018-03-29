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

#include "searchproductsasadminresponse.h"
#include "searchproductsasadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  SearchProductsAsAdminResponse
 *
 * @brief  Handles ServiceCatalog SearchProductsAsAdmin responses.
 *
 * @see    ServiceCatalogClient::searchProductsAsAdmin
 */

/**
 * @brief  Constructs a new SearchProductsAsAdminResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchProductsAsAdminResponse::SearchProductsAsAdminResponse(
        const SearchProductsAsAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new SearchProductsAsAdminResponsePrivate(this), parent)
{
    setRequest(new SearchProductsAsAdminRequest(request));
    setReply(reply);
}

const SearchProductsAsAdminRequest * SearchProductsAsAdminResponse::request() const
{
    Q_D(const SearchProductsAsAdminResponse);
    return static_cast<const SearchProductsAsAdminRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog SearchProductsAsAdmin response.
 *
 * @param  response  Response to parse.
 */
void SearchProductsAsAdminResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchProductsAsAdminResponsePrivate
 *
 * @brief  Private implementation for SearchProductsAsAdminResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchProductsAsAdminResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchProductsAsAdminResponse instance.
 */
SearchProductsAsAdminResponsePrivate::SearchProductsAsAdminResponsePrivate(
    SearchProductsAsAdminQueueResponse * const q) : SearchProductsAsAdminPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog SearchProductsAsAdminResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchProductsAsAdminResponsePrivate::SearchProductsAsAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchProductsAsAdminResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws

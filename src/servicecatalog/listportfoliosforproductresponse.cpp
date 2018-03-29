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

#include "listportfoliosforproductresponse.h"
#include "listportfoliosforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPortfoliosForProductResponse
 *
 * @brief  Handles ServiceCatalog ListPortfoliosForProduct responses.
 *
 * @see    ServiceCatalogClient::listPortfoliosForProduct
 */

/**
 * @brief  Constructs a new ListPortfoliosForProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPortfoliosForProductResponse::ListPortfoliosForProductResponse(
        const ListPortfoliosForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfoliosForProductResponsePrivate(this), parent)
{
    setRequest(new ListPortfoliosForProductRequest(request));
    setReply(reply);
}

const ListPortfoliosForProductRequest * ListPortfoliosForProductResponse::request() const
{
    Q_D(const ListPortfoliosForProductResponse);
    return static_cast<const ListPortfoliosForProductRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListPortfoliosForProduct response.
 *
 * @param  response  Response to parse.
 */
void ListPortfoliosForProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPortfoliosForProductResponsePrivate
 *
 * @brief  Private implementation for ListPortfoliosForProductResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosForProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPortfoliosForProductResponse instance.
 */
ListPortfoliosForProductResponsePrivate::ListPortfoliosForProductResponsePrivate(
    ListPortfoliosForProductQueueResponse * const q) : ListPortfoliosForProductPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListPortfoliosForProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPortfoliosForProductResponsePrivate::ListPortfoliosForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfoliosForProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS

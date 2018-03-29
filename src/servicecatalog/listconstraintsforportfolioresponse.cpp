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

#include "listconstraintsforportfolioresponse.h"
#include "listconstraintsforportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ListConstraintsForPortfolioResponse
 *
 * @brief  Handles ServiceCatalog ListConstraintsForPortfolio responses.
 *
 * @see    ServiceCatalogClient::listConstraintsForPortfolio
 */

/**
 * @brief  Constructs a new ListConstraintsForPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConstraintsForPortfolioResponse::ListConstraintsForPortfolioResponse(
        const ListConstraintsForPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListConstraintsForPortfolioResponsePrivate(this), parent)
{
    setRequest(new ListConstraintsForPortfolioRequest(request));
    setReply(reply);
}

const ListConstraintsForPortfolioRequest * ListConstraintsForPortfolioResponse::request() const
{
    Q_D(const ListConstraintsForPortfolioResponse);
    return static_cast<const ListConstraintsForPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListConstraintsForPortfolio response.
 *
 * @param  response  Response to parse.
 */
void ListConstraintsForPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListConstraintsForPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListConstraintsForPortfolioResponsePrivate
 *
 * @brief  Private implementation for ListConstraintsForPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConstraintsForPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListConstraintsForPortfolioResponse instance.
 */
ListConstraintsForPortfolioResponsePrivate::ListConstraintsForPortfolioResponsePrivate(
    ListConstraintsForPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListConstraintsForPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListConstraintsForPortfolioResponsePrivate::parseListConstraintsForPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConstraintsForPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws

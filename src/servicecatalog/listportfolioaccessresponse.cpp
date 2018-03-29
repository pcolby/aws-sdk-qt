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

#include "listportfolioaccessresponse.h"
#include "listportfolioaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPortfolioAccessResponse
 *
 * @brief  Handles ServiceCatalog ListPortfolioAccess responses.
 *
 * @see    ServiceCatalogClient::listPortfolioAccess
 */

/**
 * @brief  Constructs a new ListPortfolioAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPortfolioAccessResponse::ListPortfolioAccessResponse(
        const ListPortfolioAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPortfolioAccessResponsePrivate(this), parent)
{
    setRequest(new ListPortfolioAccessRequest(request));
    setReply(reply);
}

const ListPortfolioAccessRequest * ListPortfolioAccessResponse::request() const
{
    Q_D(const ListPortfolioAccessResponse);
    return static_cast<const ListPortfolioAccessRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListPortfolioAccess response.
 *
 * @param  response  Response to parse.
 */
void ListPortfolioAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPortfolioAccessResponsePrivate
 *
 * @brief  Private implementation for ListPortfolioAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfolioAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPortfolioAccessResponse instance.
 */
ListPortfolioAccessResponsePrivate::ListPortfolioAccessResponsePrivate(
    ListPortfolioAccessQueueResponse * const q) : ListPortfolioAccessPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListPortfolioAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPortfolioAccessResponsePrivate::ListPortfolioAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPortfolioAccessResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS

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

#include "listlaunchpathsresponse.h"
#include "listlaunchpathsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListLaunchPathsResponse
 *
 * @brief  Handles ServiceCatalog ListLaunchPaths responses.
 *
 * @see    ServiceCatalogClient::listLaunchPaths
 */

/**
 * @brief  Constructs a new ListLaunchPathsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLaunchPathsResponse::ListLaunchPathsResponse(
        const ListLaunchPathsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListLaunchPathsResponsePrivate(this), parent)
{
    setRequest(new ListLaunchPathsRequest(request));
    setReply(reply);
}

const ListLaunchPathsRequest * ListLaunchPathsResponse::request() const
{
    Q_D(const ListLaunchPathsResponse);
    return static_cast<const ListLaunchPathsRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListLaunchPaths response.
 *
 * @param  response  Response to parse.
 */
void ListLaunchPathsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLaunchPathsResponsePrivate
 *
 * @brief  Private implementation for ListLaunchPathsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLaunchPathsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLaunchPathsResponse instance.
 */
ListLaunchPathsResponsePrivate::ListLaunchPathsResponsePrivate(
    ListLaunchPathsQueueResponse * const q) : ListLaunchPathsPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListLaunchPathsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLaunchPathsResponsePrivate::ListLaunchPathsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchPathsResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS

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

#include "listdatasourcesresponse.h"
#include "listdatasourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  ListDataSourcesResponse
 *
 * @brief  Handles AppSync ListDataSources responses.
 *
 * @see    AppSyncClient::listDataSources
 */

/**
 * @brief  Constructs a new ListDataSourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDataSourcesResponse::ListDataSourcesResponse(
        const ListDataSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListDataSourcesResponsePrivate(this), parent)
{
    setRequest(new ListDataSourcesRequest(request));
    setReply(reply);
}

const ListDataSourcesRequest * ListDataSourcesResponse::request() const
{
    Q_D(const ListDataSourcesResponse);
    return static_cast<const ListDataSourcesRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListDataSources response.
 *
 * @param  response  Response to parse.
 */
void ListDataSourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDataSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDataSourcesResponsePrivate
 *
 * @brief  Private implementation for ListDataSourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDataSourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDataSourcesResponse instance.
 */
ListDataSourcesResponsePrivate::ListDataSourcesResponsePrivate(
    ListDataSourcesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListDataSourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDataSourcesResponsePrivate::ListDataSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSourcesResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws

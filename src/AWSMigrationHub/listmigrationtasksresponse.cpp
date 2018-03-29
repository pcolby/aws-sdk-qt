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

#include "listmigrationtasksresponse.h"
#include "listmigrationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MigrationHub {

/**
 * @class  ListMigrationTasksResponse
 *
 * @brief  Handles MigrationHub ListMigrationTasks responses.
 *
 * @see    MigrationHubClient::listMigrationTasks
 */

/**
 * @brief  Constructs a new ListMigrationTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMigrationTasksResponse::ListMigrationTasksResponse(
        const ListMigrationTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListMigrationTasksResponsePrivate(this), parent)
{
    setRequest(new ListMigrationTasksRequest(request));
    setReply(reply);
}

const ListMigrationTasksRequest * ListMigrationTasksResponse::request() const
{
    Q_D(const ListMigrationTasksResponse);
    return static_cast<const ListMigrationTasksRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub ListMigrationTasks response.
 *
 * @param  response  Response to parse.
 */
void ListMigrationTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListMigrationTasksResponsePrivate
 *
 * @brief  Private implementation for ListMigrationTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMigrationTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListMigrationTasksResponse instance.
 */
ListMigrationTasksResponsePrivate::ListMigrationTasksResponsePrivate(
    ListMigrationTasksQueueResponse * const q) : ListMigrationTasksPrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub ListMigrationTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListMigrationTasksResponsePrivate::ListMigrationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMigrationTasksResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace AWS

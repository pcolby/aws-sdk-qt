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

#include "listtasksresponse.h"
#include "listtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  ListTasksResponse
 *
 * @brief  Handles ECS ListTasks responses.
 *
 * @see    ECSClient::listTasks
 */

/**
 * @brief  Constructs a new ListTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTasksResponse::ListTasksResponse(
        const ListTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListTasksResponsePrivate(this), parent)
{
    setRequest(new ListTasksRequest(request));
    setReply(reply);
}

const ListTasksRequest * ListTasksResponse::request() const
{
    Q_D(const ListTasksResponse);
    return static_cast<const ListTasksRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListTasks response.
 *
 * @param  response  Response to parse.
 */
void ListTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTasksResponsePrivate
 *
 * @brief  Private implementation for ListTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTasksResponse instance.
 */
ListTasksResponsePrivate::ListTasksResponsePrivate(
    ListTasksQueueResponse * const q) : ListTasksPrivate(q)
{

}

/**
 * @brief  Parse an ECS ListTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTasksResponsePrivate::ListTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTasksResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS

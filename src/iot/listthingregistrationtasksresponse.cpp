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

#include "listthingregistrationtasksresponse.h"
#include "listthingregistrationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListThingRegistrationTasksResponse
 *
 * @brief  Handles IoT ListThingRegistrationTasks responses.
 *
 * @see    IoTClient::listThingRegistrationTasks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingRegistrationTasksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingRegistrationTasksResponsePrivate(this), parent)
{
    setRequest(new ListThingRegistrationTasksRequest(request));
    setReply(reply);
}

const ListThingRegistrationTasksRequest * ListThingRegistrationTasksResponse::request() const
{
    Q_D(const ListThingRegistrationTasksResponse);
    return static_cast<const ListThingRegistrationTasksRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingRegistrationTasks response.
 *
 * @param  response  Response to parse.
 */
void ListThingRegistrationTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingRegistrationTasksResponsePrivate
 *
 * @brief  Private implementation for ListThingRegistrationTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingRegistrationTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingRegistrationTasksResponse instance.
 */
ListThingRegistrationTasksResponsePrivate::ListThingRegistrationTasksResponsePrivate(
    ListThingRegistrationTasksQueueResponse * const q) : ListThingRegistrationTasksPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingRegistrationTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingRegistrationTasksResponsePrivate::ListThingRegistrationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingRegistrationTasksResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS

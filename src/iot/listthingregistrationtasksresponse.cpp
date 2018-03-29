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

#include "listthingregistrationtasksresponse.h"
#include "listthingregistrationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingRegistrationTasksResponse
 *
 * @brief  Handles IoT ListThingRegistrationTasks responses.
 *
 * @see    IoTClient::listThingRegistrationTasks
 */

/**
 * @brief  Constructs a new ListThingRegistrationTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingRegistrationTasksResponse::ListThingRegistrationTasksResponse(
        const ListThingRegistrationTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListThingRegistrationTasksResponse(new ListThingRegistrationTasksResponsePrivate(this), parent)
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
    Q_D(ListThingRegistrationTasksResponse);
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
    ListThingRegistrationTasksResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingRegistrationTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingRegistrationTasksResponsePrivate::parseListThingRegistrationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingRegistrationTasksResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

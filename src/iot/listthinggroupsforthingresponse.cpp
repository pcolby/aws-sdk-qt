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

#include "listthinggroupsforthingresponse.h"
#include "listthinggroupsforthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListThingGroupsForThingResponse
 *
 * @brief  Handles IoT ListThingGroupsForThing responses.
 *
 * @see    IoTClient::listThingGroupsForThing
 */

/**
 * @brief  Constructs a new ListThingGroupsForThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingGroupsForThingResponse::ListThingGroupsForThingResponse(
        const ListThingGroupsForThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingGroupsForThingResponsePrivate(this), parent)
{
    setRequest(new ListThingGroupsForThingRequest(request));
    setReply(reply);
}

const ListThingGroupsForThingRequest * ListThingGroupsForThingResponse::request() const
{
    Q_D(const ListThingGroupsForThingResponse);
    return static_cast<const ListThingGroupsForThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingGroupsForThing response.
 *
 * @param  response  Response to parse.
 */
void ListThingGroupsForThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingGroupsForThingResponsePrivate
 *
 * @brief  Private implementation for ListThingGroupsForThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsForThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingGroupsForThingResponse instance.
 */
ListThingGroupsForThingResponsePrivate::ListThingGroupsForThingResponsePrivate(
    ListThingGroupsForThingQueueResponse * const q) : ListThingGroupsForThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingGroupsForThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingGroupsForThingResponsePrivate::ListThingGroupsForThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingGroupsForThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS

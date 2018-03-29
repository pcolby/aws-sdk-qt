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

#include "listthinggroupsresponse.h"
#include "listthinggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListThingGroupsResponse
 *
 * @brief  Handles IoT ListThingGroups responses.
 *
 * @see    IoTClient::listThingGroups
 */

/**
 * @brief  Constructs a new ListThingGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingGroupsResponse::ListThingGroupsResponse(
        const ListThingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingGroupsResponsePrivate(this), parent)
{
    setRequest(new ListThingGroupsRequest(request));
    setReply(reply);
}

const ListThingGroupsRequest * ListThingGroupsResponse::request() const
{
    Q_D(const ListThingGroupsResponse);
    return static_cast<const ListThingGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingGroups response.
 *
 * @param  response  Response to parse.
 */
void ListThingGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingGroupsResponsePrivate
 *
 * @brief  Private implementation for ListThingGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingGroupsResponse instance.
 */
ListThingGroupsResponsePrivate::ListThingGroupsResponsePrivate(
    ListThingGroupsQueueResponse * const q) : ListThingGroupsPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingGroupsResponsePrivate::ListThingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingGroupsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

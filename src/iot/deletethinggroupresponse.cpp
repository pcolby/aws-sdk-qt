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

#include "deletethinggroupresponse.h"
#include "deletethinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteThingGroupResponse
 *
 * @brief  Handles IoT DeleteThingGroup responses.
 *
 * @see    IoTClient::deleteThingGroup
 */

/**
 * @brief  Constructs a new DeleteThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingGroupResponse::DeleteThingGroupResponse(
        const DeleteThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteThingGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteThingGroupRequest(request));
    setReply(reply);
}

const DeleteThingGroupRequest * DeleteThingGroupResponse::request() const
{
    Q_D(const DeleteThingGroupResponse);
    return static_cast<const DeleteThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteThingGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteThingGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteThingGroupResponse instance.
 */
DeleteThingGroupResponsePrivate::DeleteThingGroupResponsePrivate(
    DeleteThingGroupQueueResponse * const q) : DeleteThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteThingGroupResponsePrivate::DeleteThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

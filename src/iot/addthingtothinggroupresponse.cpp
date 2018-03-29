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

#include "addthingtothinggroupresponse.h"
#include "addthingtothinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  AddThingToThingGroupResponse
 *
 * @brief  Handles IoT AddThingToThingGroup responses.
 *
 * @see    IoTClient::addThingToThingGroup
 */

/**
 * @brief  Constructs a new AddThingToThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddThingToThingGroupResponse::AddThingToThingGroupResponse(
        const AddThingToThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AddThingToThingGroupResponsePrivate(this), parent)
{
    setRequest(new AddThingToThingGroupRequest(request));
    setReply(reply);
}

const AddThingToThingGroupRequest * AddThingToThingGroupResponse::request() const
{
    Q_D(const AddThingToThingGroupResponse);
    return static_cast<const AddThingToThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT AddThingToThingGroup response.
 *
 * @param  response  Response to parse.
 */
void AddThingToThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddThingToThingGroupResponsePrivate
 *
 * @brief  Private implementation for AddThingToThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddThingToThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddThingToThingGroupResponse instance.
 */
AddThingToThingGroupResponsePrivate::AddThingToThingGroupResponsePrivate(
    AddThingToThingGroupQueueResponse * const q) : AddThingToThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT AddThingToThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddThingToThingGroupResponsePrivate::AddThingToThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddThingToThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

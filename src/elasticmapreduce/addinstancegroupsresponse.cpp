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

#include "addinstancegroupsresponse.h"
#include "addinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  AddInstanceGroupsResponse
 *
 * @brief  Handles EMR AddInstanceGroups responses.
 *
 * @see    EMRClient::addInstanceGroups
 */

/**
 * @brief  Constructs a new AddInstanceGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddInstanceGroupsResponse::AddInstanceGroupsResponse(
        const AddInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new AddInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new AddInstanceGroupsRequest(request));
    setReply(reply);
}

const AddInstanceGroupsRequest * AddInstanceGroupsResponse::request() const
{
    Q_D(const AddInstanceGroupsResponse);
    return static_cast<const AddInstanceGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR AddInstanceGroups response.
 *
 * @param  response  Response to parse.
 */
void AddInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddInstanceGroupsResponsePrivate
 *
 * @brief  Private implementation for AddInstanceGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddInstanceGroupsResponse instance.
 */
AddInstanceGroupsResponsePrivate::AddInstanceGroupsResponsePrivate(
    AddInstanceGroupsQueueResponse * const q) : AddInstanceGroupsPrivate(q)
{

}

/**
 * @brief  Parse an EMR AddInstanceGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddInstanceGroupsResponsePrivate::AddInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddInstanceGroupsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS

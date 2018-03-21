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

#include "modifydbparametergroupresponse.h"
#include "modifydbparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBParameterGroupResponse
 *
 * @brief  Handles RDS ModifyDBParameterGroup responses.
 *
 * @see    RDSClient::modifyDBParameterGroup
 */

/**
 * @brief  Constructs a new ModifyDBParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBParameterGroupResponse::ModifyDBParameterGroupResponse(
        const ModifyDBParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBParameterGroupRequest(request));
    setReply(reply);
}

const ModifyDBParameterGroupRequest * ModifyDBParameterGroupResponse::request() const
{
    Q_D(const ModifyDBParameterGroupResponse);
    return static_cast<const ModifyDBParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyDBParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBParameterGroupResponse instance.
 */
ModifyDBParameterGroupResponsePrivate::ModifyDBParameterGroupResponsePrivate(
    ModifyDBParameterGroupQueueResponse * const q) : ModifyDBParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBParameterGroupResponsePrivate::ModifyDBParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS

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

#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBClusterParameterGroupResponse
 *
 * @brief  Handles RDS ModifyDBClusterParameterGroup responses.
 *
 * @see    RDSClient::modifyDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBClusterParameterGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ModifyDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyDBClusterParameterGroupRequest(request));
    setReply(reply);
}

const ModifyDBClusterParameterGroupRequest * ModifyDBClusterParameterGroupResponse::request() const
{
    Q_D(const ModifyDBClusterParameterGroupResponse);
    return static_cast<const ModifyDBClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ModifyDBClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyDBClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyDBClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyDBClusterParameterGroupResponse instance.
 */
ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponsePrivate(
    ModifyDBClusterParameterGroupQueueResponse * const q) : ModifyDBClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS ModifyDBClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyDBClusterParameterGroupResponsePrivate::ModifyDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyDBClusterParameterGroupResponse"));
    /// @todo
}

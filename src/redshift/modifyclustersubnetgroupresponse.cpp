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

#include "modifyclustersubnetgroupresponse.h"
#include "modifyclustersubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  ModifyClusterSubnetGroupResponse
 *
 * @brief  Handles Redshift ModifyClusterSubnetGroup responses.
 *
 * @see    RedshiftClient::modifyClusterSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyClusterSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyClusterSubnetGroupResponse::ModifyClusterSubnetGroupResponse(
        const ModifyClusterSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ModifyClusterSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterSubnetGroupRequest(request));
    setReply(reply);
}

const ModifyClusterSubnetGroupRequest * ModifyClusterSubnetGroupResponse::request() const
{
    Q_D(const ModifyClusterSubnetGroupResponse);
    return static_cast<const ModifyClusterSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifyClusterSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyClusterSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyClusterSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyClusterSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyClusterSubnetGroupResponse instance.
 */
ModifyClusterSubnetGroupResponsePrivate::ModifyClusterSubnetGroupResponsePrivate(
    ModifyClusterSubnetGroupQueueResponse * const q) : ModifyClusterSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifyClusterSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyClusterSubnetGroupResponsePrivate::ModifyClusterSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterSubnetGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS

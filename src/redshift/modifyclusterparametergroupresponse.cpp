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

#include "modifyclusterparametergroupresponse.h"
#include "modifyclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  ModifyClusterParameterGroupResponse
 *
 * @brief  Handles Redshift ModifyClusterParameterGroup responses.
 *
 * @see    RedshiftClient::modifyClusterParameterGroup
 */

/**
 * @brief  Constructs a new ModifyClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyClusterParameterGroupResponse::ModifyClusterParameterGroupResponse(
        const ModifyClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new ModifyClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyClusterParameterGroupRequest(request));
    setReply(reply);
}

const ModifyClusterParameterGroupRequest * ModifyClusterParameterGroupResponse::request() const
{
    Q_D(const ModifyClusterParameterGroupResponse);
    return static_cast<const ModifyClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift ModifyClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyClusterParameterGroupResponse instance.
 */
ModifyClusterParameterGroupResponsePrivate::ModifyClusterParameterGroupResponsePrivate(
    ModifyClusterParameterGroupQueueResponse * const q) : ModifyClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift ModifyClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyClusterParameterGroupResponsePrivate::ModifyClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyClusterParameterGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws

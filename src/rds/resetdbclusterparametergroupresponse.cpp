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

#include "resetdbclusterparametergroupresponse.h"
#include "resetdbclusterparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  ResetDBClusterParameterGroupResponse
 *
 * @brief  Handles RDS ResetDBClusterParameterGroup responses.
 *
 * @see    RDSClient::resetDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new ResetDBClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetDBClusterParameterGroupResponse::ResetDBClusterParameterGroupResponse(
        const ResetDBClusterParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new ResetDBClusterParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetDBClusterParameterGroupRequest(request));
    setReply(reply);
}

const ResetDBClusterParameterGroupRequest * ResetDBClusterParameterGroupResponse::request() const
{
    Q_D(const ResetDBClusterParameterGroupResponse);
    return static_cast<const ResetDBClusterParameterGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS ResetDBClusterParameterGroup response.
 *
 * @param  response  Response to parse.
 */
void ResetDBClusterParameterGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetDBClusterParameterGroupResponsePrivate
 *
 * @brief  Private implementation for ResetDBClusterParameterGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDBClusterParameterGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetDBClusterParameterGroupResponse instance.
 */
ResetDBClusterParameterGroupResponsePrivate::ResetDBClusterParameterGroupResponsePrivate(
    ResetDBClusterParameterGroupQueueResponse * const q) : ResetDBClusterParameterGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS ResetDBClusterParameterGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetDBClusterParameterGroupResponsePrivate::ResetDBClusterParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDBClusterParameterGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws

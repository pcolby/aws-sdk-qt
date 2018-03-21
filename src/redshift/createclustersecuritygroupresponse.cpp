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

#include "createclustersecuritygroupresponse.h"
#include "createclustersecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  CreateClusterSecurityGroupResponse
 *
 * @brief  Handles Redshift CreateClusterSecurityGroup responses.
 *
 * @see    RedshiftClient::createClusterSecurityGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterSecurityGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new CreateClusterSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateClusterSecurityGroupRequest(request));
    setReply(reply);
}

const CreateClusterSecurityGroupRequest * CreateClusterSecurityGroupResponse::request() const
{
    Q_D(const CreateClusterSecurityGroupResponse);
    return static_cast<const CreateClusterSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift CreateClusterSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateClusterSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClusterSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for CreateClusterSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClusterSecurityGroupResponse instance.
 */
CreateClusterSecurityGroupResponsePrivate::CreateClusterSecurityGroupResponsePrivate(
    CreateClusterSecurityGroupQueueResponse * const q) : CreateClusterSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift CreateClusterSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClusterSecurityGroupResponsePrivate::CreateClusterSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterSecurityGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS

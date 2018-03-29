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

#include "createclustersecuritygroupresponse.h"
#include "createclustersecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateClusterSecurityGroupResponse
 *
 * @brief  Handles Redshift CreateClusterSecurityGroup responses.
 *
 * @see    RedshiftClient::createClusterSecurityGroup
 */

/**
 * @brief  Constructs a new CreateClusterSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterSecurityGroupResponse::CreateClusterSecurityGroupResponse(
        const CreateClusterSecurityGroupRequest &request,
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
    CreateClusterSecurityGroupResponse * const q) : RedshiftResponsePrivate(q)
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
} // namespace QtAws

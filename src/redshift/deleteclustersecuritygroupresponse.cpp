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

#include "deleteclustersecuritygroupresponse.h"
#include "deleteclustersecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteClusterSecurityGroupResponse
 *
 * @brief  Handles Redshift DeleteClusterSecurityGroup responses.
 *
 * @see    RedshiftClient::deleteClusterSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteClusterSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterSecurityGroupResponse::DeleteClusterSecurityGroupResponse(
        const DeleteClusterSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteClusterSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteClusterSecurityGroupRequest * DeleteClusterSecurityGroupResponse::request() const
{
    Q_D(const DeleteClusterSecurityGroupResponse);
    return static_cast<const DeleteClusterSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteClusterSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteClusterSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterSecurityGroupResponse instance.
 */
DeleteClusterSecurityGroupResponsePrivate::DeleteClusterSecurityGroupResponsePrivate(
    DeleteClusterSecurityGroupResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteClusterSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterSecurityGroupResponsePrivate::parseDeleteClusterSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterSecurityGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws

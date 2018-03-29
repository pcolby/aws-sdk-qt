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

#include "deletesecuritygroupresponse.h"
#include "deletesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteSecurityGroupResponse
 *
 * @brief  Handles EC2 DeleteSecurityGroup responses.
 *
 * @see    EC2Client::deleteSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSecurityGroupResponse::DeleteSecurityGroupResponse(
        const DeleteSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteSecurityGroupRequest * DeleteSecurityGroupResponse::request() const
{
    Q_D(const DeleteSecurityGroupResponse);
    return static_cast<const DeleteSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSecurityGroupResponse instance.
 */
DeleteSecurityGroupResponsePrivate::DeleteSecurityGroupResponsePrivate(
    DeleteSecurityGroupResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSecurityGroupResponsePrivate::DeleteSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

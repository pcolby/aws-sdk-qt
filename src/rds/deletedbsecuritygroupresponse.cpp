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

#include "deletedbsecuritygroupresponse.h"
#include "deletedbsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBSecurityGroupResponse
 *
 * @brief  Handles RDS DeleteDBSecurityGroup responses.
 *
 * @see    RDSClient::deleteDBSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteDBSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBSecurityGroupResponse::DeleteDBSecurityGroupResponse(
        const DeleteDBSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteDBSecurityGroupRequest * DeleteDBSecurityGroupResponse::request() const
{
    Q_D(const DeleteDBSecurityGroupResponse);
    return static_cast<const DeleteDBSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteDBSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBSecurityGroupResponse instance.
 */
DeleteDBSecurityGroupResponsePrivate::DeleteDBSecurityGroupResponsePrivate(
    DeleteDBSecurityGroupQueueResponse * const q) : DeleteDBSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBSecurityGroupResponsePrivate::DeleteDBSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSecurityGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS

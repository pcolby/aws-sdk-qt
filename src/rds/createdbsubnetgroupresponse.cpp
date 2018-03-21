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

#include "createdbsubnetgroupresponse.h"
#include "createdbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBSubnetGroupResponse
 *
 * @brief  Handles RDS CreateDBSubnetGroup responses.
 *
 * @see    RDSClient::createDBSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CreateDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDBSubnetGroupRequest(request));
    setReply(reply);
}

const CreateDBSubnetGroupRequest * CreateDBSubnetGroupResponse::request() const
{
    Q_D(const CreateDBSubnetGroupResponse);
    return static_cast<const CreateDBSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateDBSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDBSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for CreateDBSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDBSubnetGroupResponse instance.
 */
CreateDBSubnetGroupResponsePrivate::CreateDBSubnetGroupResponsePrivate(
    CreateDBSubnetGroupQueueResponse * const q) : CreateDBSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateDBSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDBSubnetGroupResponsePrivate::CreateDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDBSubnetGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS

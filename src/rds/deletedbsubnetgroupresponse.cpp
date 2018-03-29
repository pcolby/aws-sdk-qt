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

#include "deletedbsubnetgroupresponse.h"
#include "deletedbsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBSubnetGroupResponse
 *
 * @brief  Handles RDS DeleteDBSubnetGroup responses.
 *
 * @see    RDSClient::deleteDBSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteDBSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBSubnetGroupResponse::DeleteDBSubnetGroupResponse(
        const DeleteDBSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DeleteDBSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDBSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteDBSubnetGroupRequest * DeleteDBSubnetGroupResponse::request() const
{
    Q_D(const DeleteDBSubnetGroupResponse);
    return static_cast<const DeleteDBSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DeleteDBSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteDBSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDBSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDBSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteDBSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDBSubnetGroupResponse instance.
 */
DeleteDBSubnetGroupResponsePrivate::DeleteDBSubnetGroupResponsePrivate(
    DeleteDBSubnetGroupResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DeleteDBSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDBSubnetGroupResponsePrivate::DeleteDBSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBSubnetGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws

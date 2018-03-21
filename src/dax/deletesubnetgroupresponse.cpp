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

#include "deletesubnetgroupresponse.h"
#include "deletesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  DeleteSubnetGroupResponse
 *
 * @brief  Handles DAX DeleteSubnetGroup responses.
 *
 * @see    DAXClient::deleteSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DeleteSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteSubnetGroupRequest * DeleteSubnetGroupResponse::request() const
{
    Q_D(const DeleteSubnetGroupResponse);
    return static_cast<const DeleteSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DeleteSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubnetGroupResponse instance.
 */
DeleteSubnetGroupResponsePrivate::DeleteSubnetGroupResponsePrivate(
    DeleteSubnetGroupQueueResponse * const q) : DeleteSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an DAX DeleteSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubnetGroupResponsePrivate::DeleteSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetGroupResponse"));
    /// @todo
}

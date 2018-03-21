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

#include "deleteservicelinkedroleresponse.h"
#include "deleteservicelinkedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteServiceLinkedRoleResponse
 *
 * @brief  Handles IAM DeleteServiceLinkedRole responses.
 *
 * @see    IAMClient::deleteServiceLinkedRole
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServiceLinkedRoleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteServiceLinkedRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceLinkedRoleRequest(request));
    setReply(reply);
}

const DeleteServiceLinkedRoleRequest * DeleteServiceLinkedRoleResponse::request() const
{
    Q_D(const DeleteServiceLinkedRoleResponse);
    return static_cast<const DeleteServiceLinkedRoleRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteServiceLinkedRole response.
 *
 * @param  response  Response to parse.
 */
void DeleteServiceLinkedRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServiceLinkedRoleResponsePrivate
 *
 * @brief  Private implementation for DeleteServiceLinkedRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceLinkedRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServiceLinkedRoleResponse instance.
 */
DeleteServiceLinkedRoleResponsePrivate::DeleteServiceLinkedRoleResponsePrivate(
    DeleteServiceLinkedRoleQueueResponse * const q) : DeleteServiceLinkedRolePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteServiceLinkedRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServiceLinkedRoleResponsePrivate::DeleteServiceLinkedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceLinkedRoleResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

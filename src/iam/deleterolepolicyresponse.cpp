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

#include "deleterolepolicyresponse.h"
#include "deleterolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteRolePolicyResponse
 *
 * @brief  Handles IAM DeleteRolePolicy responses.
 *
 * @see    IAMClient::deleteRolePolicy
 */

/**
 * @brief  Constructs a new DeleteRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRolePolicyResponse::DeleteRolePolicyResponse(
        const DeleteRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteRolePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRolePolicyRequest(request));
    setReply(reply);
}

const DeleteRolePolicyRequest * DeleteRolePolicyResponse::request() const
{
    Q_D(const DeleteRolePolicyResponse);
    return static_cast<const DeleteRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRolePolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRolePolicyResponse instance.
 */
DeleteRolePolicyResponsePrivate::DeleteRolePolicyResponsePrivate(
    DeleteRolePolicyQueueResponse * const q) : DeleteRolePolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRolePolicyResponsePrivate::DeleteRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

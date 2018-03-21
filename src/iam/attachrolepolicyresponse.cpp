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

#include "attachrolepolicyresponse.h"
#include "attachrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  AttachRolePolicyResponse
 *
 * @brief  Handles IAM AttachRolePolicy responses.
 *
 * @see    IAMClient::attachRolePolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachRolePolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AttachRolePolicyResponsePrivate(this), parent)
{
    setRequest(new AttachRolePolicyRequest(request));
    setReply(reply);
}

const AttachRolePolicyRequest * AttachRolePolicyResponse::request() const
{
    Q_D(const AttachRolePolicyResponse);
    return static_cast<const AttachRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AttachRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void AttachRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachRolePolicyResponsePrivate
 *
 * @brief  Private implementation for AttachRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachRolePolicyResponse instance.
 */
AttachRolePolicyResponsePrivate::AttachRolePolicyResponsePrivate(
    AttachRolePolicyQueueResponse * const q) : AttachRolePolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM AttachRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachRolePolicyResponsePrivate::AttachRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

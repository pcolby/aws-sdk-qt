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

#include "updateaccountpasswordpolicyresponse.h"
#include "updateaccountpasswordpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UpdateAccountPasswordPolicyResponse
 *
 * @brief  Handles IAM UpdateAccountPasswordPolicy responses.
 *
 * @see    IAMClient::updateAccountPasswordPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccountPasswordPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateAccountPasswordPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountPasswordPolicyRequest(request));
    setReply(reply);
}

const UpdateAccountPasswordPolicyRequest * UpdateAccountPasswordPolicyResponse::request() const
{
    Q_D(const UpdateAccountPasswordPolicyResponse);
    return static_cast<const UpdateAccountPasswordPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateAccountPasswordPolicy response.
 *
 * @param  response  Response to parse.
 */
void UpdateAccountPasswordPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAccountPasswordPolicyResponsePrivate
 *
 * @brief  Private implementation for UpdateAccountPasswordPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountPasswordPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAccountPasswordPolicyResponse instance.
 */
UpdateAccountPasswordPolicyResponsePrivate::UpdateAccountPasswordPolicyResponsePrivate(
    UpdateAccountPasswordPolicyQueueResponse * const q) : UpdateAccountPasswordPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateAccountPasswordPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAccountPasswordPolicyResponsePrivate::UpdateAccountPasswordPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountPasswordPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

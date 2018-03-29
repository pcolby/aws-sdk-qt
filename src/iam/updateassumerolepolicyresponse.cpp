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

#include "updateassumerolepolicyresponse.h"
#include "updateassumerolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateAssumeRolePolicyResponse
 *
 * @brief  Handles IAM UpdateAssumeRolePolicy responses.
 *
 * @see    IAMClient::updateAssumeRolePolicy
 */

/**
 * @brief  Constructs a new UpdateAssumeRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAssumeRolePolicyResponse::UpdateAssumeRolePolicyResponse(
        const UpdateAssumeRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateAssumeRolePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateAssumeRolePolicyRequest(request));
    setReply(reply);
}

const UpdateAssumeRolePolicyRequest * UpdateAssumeRolePolicyResponse::request() const
{
    Q_D(const UpdateAssumeRolePolicyResponse);
    return static_cast<const UpdateAssumeRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateAssumeRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void UpdateAssumeRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateAssumeRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAssumeRolePolicyResponsePrivate
 *
 * @brief  Private implementation for UpdateAssumeRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAssumeRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAssumeRolePolicyResponse instance.
 */
UpdateAssumeRolePolicyResponsePrivate::UpdateAssumeRolePolicyResponsePrivate(
    UpdateAssumeRolePolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateAssumeRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAssumeRolePolicyResponsePrivate::UpdateAssumeRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssumeRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws

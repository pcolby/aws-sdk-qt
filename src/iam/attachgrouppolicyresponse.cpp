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

#include "attachgrouppolicyresponse.h"
#include "attachgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  AttachGroupPolicyResponse
 *
 * @brief  Handles IAM AttachGroupPolicy responses.
 *
 * @see    IAMClient::attachGroupPolicy
 */

/**
 * @brief  Constructs a new AttachGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachGroupPolicyResponse::AttachGroupPolicyResponse(
        const AttachGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AttachGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new AttachGroupPolicyRequest(request));
    setReply(reply);
}

const AttachGroupPolicyRequest * AttachGroupPolicyResponse::request() const
{
    Q_D(const AttachGroupPolicyResponse);
    return static_cast<const AttachGroupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AttachGroupPolicy response.
 *
 * @param  response  Response to parse.
 */
void AttachGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachGroupPolicyResponsePrivate
 *
 * @brief  Private implementation for AttachGroupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachGroupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachGroupPolicyResponse instance.
 */
AttachGroupPolicyResponsePrivate::AttachGroupPolicyResponsePrivate(
    AttachGroupPolicyQueueResponse * const q) : AttachGroupPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM AttachGroupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachGroupPolicyResponsePrivate::AttachGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachGroupPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

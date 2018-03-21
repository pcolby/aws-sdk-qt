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

#include "detachrolepolicyresponse.h"
#include "detachrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DetachRolePolicyResponse
 *
 * @brief  Handles IAM DetachRolePolicy responses.
 *
 * @see    IAMClient::detachRolePolicy
 */

/**
 * @brief  Constructs a new DetachRolePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachRolePolicyResponse::DetachRolePolicyResponse(
        const DetachRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DetachRolePolicyResponsePrivate(this), parent)
{
    setRequest(new DetachRolePolicyRequest(request));
    setReply(reply);
}

const DetachRolePolicyRequest * DetachRolePolicyResponse::request() const
{
    Q_D(const DetachRolePolicyResponse);
    return static_cast<const DetachRolePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DetachRolePolicy response.
 *
 * @param  response  Response to parse.
 */
void DetachRolePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachRolePolicyResponsePrivate
 *
 * @brief  Private implementation for DetachRolePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachRolePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachRolePolicyResponse instance.
 */
DetachRolePolicyResponsePrivate::DetachRolePolicyResponsePrivate(
    DetachRolePolicyQueueResponse * const q) : DetachRolePolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DetachRolePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachRolePolicyResponsePrivate::DetachRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachRolePolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

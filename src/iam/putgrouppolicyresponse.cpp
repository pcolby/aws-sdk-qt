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

#include "putgrouppolicyresponse.h"
#include "putgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  PutGroupPolicyResponse
 *
 * @brief  Handles IAM PutGroupPolicy responses.
 *
 * @see    IAMClient::putGroupPolicy
 */

/**
 * @brief  Constructs a new PutGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutGroupPolicyResponse::PutGroupPolicyResponse(
        const PutGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new PutGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new PutGroupPolicyRequest(request));
    setReply(reply);
}

const PutGroupPolicyRequest * PutGroupPolicyResponse::request() const
{
    Q_D(const PutGroupPolicyResponse);
    return static_cast<const PutGroupPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM PutGroupPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutGroupPolicyResponsePrivate
 *
 * @brief  Private implementation for PutGroupPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutGroupPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutGroupPolicyResponse instance.
 */
PutGroupPolicyResponsePrivate::PutGroupPolicyResponsePrivate(
    PutGroupPolicyQueueResponse * const q) : PutGroupPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM PutGroupPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutGroupPolicyResponsePrivate::PutGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutGroupPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS

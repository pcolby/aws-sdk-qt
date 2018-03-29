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

#include "putlifecyclepolicyresponse.h"
#include "putlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  PutLifecyclePolicyResponse
 *
 * @brief  Handles ECR PutLifecyclePolicy responses.
 *
 * @see    ECRClient::putLifecyclePolicy
 */

/**
 * @brief  Constructs a new PutLifecyclePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLifecyclePolicyResponse::PutLifecyclePolicyResponse(
        const PutLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new PutLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new PutLifecyclePolicyRequest(request));
    setReply(reply);
}

const PutLifecyclePolicyRequest * PutLifecyclePolicyResponse::request() const
{
    Q_D(const PutLifecyclePolicyResponse);
    return static_cast<const PutLifecyclePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR PutLifecyclePolicy response.
 *
 * @param  response  Response to parse.
 */
void PutLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutLifecyclePolicyResponsePrivate
 *
 * @brief  Private implementation for PutLifecyclePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecyclePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutLifecyclePolicyResponse instance.
 */
PutLifecyclePolicyResponsePrivate::PutLifecyclePolicyResponsePrivate(
    PutLifecyclePolicyQueueResponse * const q) : PutLifecyclePolicyPrivate(q)
{

}

/**
 * @brief  Parse an ECR PutLifecyclePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutLifecyclePolicyResponsePrivate::PutLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecyclePolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws

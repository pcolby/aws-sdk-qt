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

#include "putautoscalingpolicyresponse.h"
#include "putautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  PutAutoScalingPolicyResponse
 *
 * @brief  Handles EMR PutAutoScalingPolicy responses.
 *
 * @see    EMRClient::putAutoScalingPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutAutoScalingPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new PutAutoScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new PutAutoScalingPolicyRequest(request));
    setReply(reply);
}

const PutAutoScalingPolicyRequest * PutAutoScalingPolicyResponse::request() const
{
    Q_D(const PutAutoScalingPolicyResponse);
    return static_cast<const PutAutoScalingPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a EMR PutAutoScalingPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutAutoScalingPolicyResponsePrivate
 *
 * @brief  Private implementation for PutAutoScalingPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAutoScalingPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutAutoScalingPolicyResponse instance.
 */
PutAutoScalingPolicyResponsePrivate::PutAutoScalingPolicyResponsePrivate(
    PutAutoScalingPolicyQueueResponse * const q) : PutAutoScalingPolicyPrivate(q)
{

}

/**
 * @brief  Parse an EMR PutAutoScalingPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutAutoScalingPolicyResponsePrivate::PutAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAutoScalingPolicyResponse"));
    /// @todo
}

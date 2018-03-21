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

#include "replacetopicruleresponse.h"
#include "replacetopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ReplaceTopicRuleResponse
 *
 * @brief  Handles IoT ReplaceTopicRule responses.
 *
 * @see    IoTClient::replaceTopicRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceTopicRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ReplaceTopicRuleResponsePrivate(this), parent)
{
    setRequest(new ReplaceTopicRuleRequest(request));
    setReply(reply);
}

const ReplaceTopicRuleRequest * ReplaceTopicRuleResponse::request() const
{
    Q_D(const ReplaceTopicRuleResponse);
    return static_cast<const ReplaceTopicRuleRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ReplaceTopicRule response.
 *
 * @param  response  Response to parse.
 */
void ReplaceTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceTopicRuleResponsePrivate
 *
 * @brief  Private implementation for ReplaceTopicRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceTopicRuleResponse instance.
 */
ReplaceTopicRuleResponsePrivate::ReplaceTopicRuleResponsePrivate(
    ReplaceTopicRuleQueueResponse * const q) : ReplaceTopicRulePrivate(q)
{

}

/**
 * @brief  Parse an IoT ReplaceTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceTopicRuleResponsePrivate::ReplaceTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceTopicRuleResponse"));
    /// @todo
}

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

#include "enabletopicruleresponse.h"
#include "enabletopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  EnableTopicRuleResponse
 *
 * @brief  Handles IoT EnableTopicRule responses.
 *
 * @see    IoTClient::enableTopicRule
 */

/**
 * @brief  Constructs a new EnableTopicRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableTopicRuleResponse::EnableTopicRuleResponse(
        const EnableTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new EnableTopicRuleResponsePrivate(this), parent)
{
    setRequest(new EnableTopicRuleRequest(request));
    setReply(reply);
}

const EnableTopicRuleRequest * EnableTopicRuleResponse::request() const
{
    Q_D(const EnableTopicRuleResponse);
    return static_cast<const EnableTopicRuleRequest *>(d->request);
}

/**
 * @brief  Parse a IoT EnableTopicRule response.
 *
 * @param  response  Response to parse.
 */
void EnableTopicRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableTopicRuleResponsePrivate
 *
 * @brief  Private implementation for EnableTopicRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableTopicRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableTopicRuleResponse instance.
 */
EnableTopicRuleResponsePrivate::EnableTopicRuleResponsePrivate(
    EnableTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT EnableTopicRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableTopicRuleResponsePrivate::EnableTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableTopicRuleResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws

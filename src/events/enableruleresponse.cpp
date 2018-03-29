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

#include "enableruleresponse.h"
#include "enableruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  EnableRuleResponse
 *
 * @brief  Handles CloudWatchEvents EnableRule responses.
 *
 * @see    CloudWatchEventsClient::enableRule
 */

/**
 * @brief  Constructs a new EnableRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableRuleResponse::EnableRuleResponse(
        const EnableRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new EnableRuleResponsePrivate(this), parent)
{
    setRequest(new EnableRuleRequest(request));
    setReply(reply);
}

const EnableRuleRequest * EnableRuleResponse::request() const
{
    Q_D(const EnableRuleResponse);
    return static_cast<const EnableRuleRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents EnableRule response.
 *
 * @param  response  Response to parse.
 */
void EnableRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableRuleResponsePrivate
 *
 * @brief  Private implementation for EnableRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableRuleResponse instance.
 */
EnableRuleResponsePrivate::EnableRuleResponsePrivate(
    EnableRuleQueueResponse * const q) : EnableRulePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents EnableRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableRuleResponsePrivate::EnableRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace AWS

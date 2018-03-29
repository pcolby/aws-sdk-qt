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

#include "disableruleresponse.h"
#include "disableruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  DisableRuleResponse
 *
 * @brief  Handles CloudWatchEvents DisableRule responses.
 *
 * @see    CloudWatchEventsClient::disableRule
 */

/**
 * @brief  Constructs a new DisableRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableRuleResponse::DisableRuleResponse(
        const DisableRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisableRuleResponse(new DisableRuleResponsePrivate(this), parent)
{
    setRequest(new DisableRuleRequest(request));
    setReply(reply);
}

const DisableRuleRequest * DisableRuleResponse::request() const
{
    Q_D(const DisableRuleResponse);
    return static_cast<const DisableRuleRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents DisableRule response.
 *
 * @param  response  Response to parse.
 */
void DisableRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableRuleResponsePrivate
 *
 * @brief  Private implementation for DisableRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableRuleResponse instance.
 */
DisableRuleResponsePrivate::DisableRuleResponsePrivate(
    DisableRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents DisableRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableRuleResponsePrivate::parseDisableRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws

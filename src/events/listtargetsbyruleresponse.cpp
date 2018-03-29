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

#include "listtargetsbyruleresponse.h"
#include "listtargetsbyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  ListTargetsByRuleResponse
 *
 * @brief  Handles CloudWatchEvents ListTargetsByRule responses.
 *
 * @see    CloudWatchEventsClient::listTargetsByRule
 */

/**
 * @brief  Constructs a new ListTargetsByRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTargetsByRuleResponse::ListTargetsByRuleResponse(
        const ListTargetsByRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListTargetsByRuleResponsePrivate(this), parent)
{
    setRequest(new ListTargetsByRuleRequest(request));
    setReply(reply);
}

const ListTargetsByRuleRequest * ListTargetsByRuleResponse::request() const
{
    Q_D(const ListTargetsByRuleResponse);
    return static_cast<const ListTargetsByRuleRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents ListTargetsByRule response.
 *
 * @param  response  Response to parse.
 */
void ListTargetsByRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTargetsByRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTargetsByRuleResponsePrivate
 *
 * @brief  Private implementation for ListTargetsByRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsByRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTargetsByRuleResponse instance.
 */
ListTargetsByRuleResponsePrivate::ListTargetsByRuleResponsePrivate(
    ListTargetsByRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents ListTargetsByRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTargetsByRuleResponsePrivate::ListTargetsByRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetsByRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws

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

#include "describescheduledactionsresponse.h"
#include "describescheduledactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScheduledActionsResponse
 *
 * @brief  Handles ApplicationAutoScaling DescribeScheduledActions responses.
 *
 * @see    ApplicationAutoScalingClient::describeScheduledActions
 */

/**
 * @brief  Constructs a new DescribeScheduledActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScheduledActionsResponse::DescribeScheduledActionsResponse(
        const DescribeScheduledActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DescribeScheduledActionsResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledActionsRequest(request));
    setReply(reply);
}

const DescribeScheduledActionsRequest * DescribeScheduledActionsResponse::request() const
{
    Q_D(const DescribeScheduledActionsResponse);
    return static_cast<const DescribeScheduledActionsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling DescribeScheduledActions response.
 *
 * @param  response  Response to parse.
 */
void DescribeScheduledActionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScheduledActionsResponsePrivate
 *
 * @brief  Private implementation for DescribeScheduledActionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledActionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScheduledActionsResponse instance.
 */
DescribeScheduledActionsResponsePrivate::DescribeScheduledActionsResponsePrivate(
    DescribeScheduledActionsQueueResponse * const q) : DescribeScheduledActionsPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DescribeScheduledActionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScheduledActionsResponsePrivate::DescribeScheduledActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledActionsResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws

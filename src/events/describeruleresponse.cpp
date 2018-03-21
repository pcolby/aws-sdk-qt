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

#include "describeruleresponse.h"
#include "describeruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  DescribeRuleResponse
 *
 * @brief  Handles CloudWatchEvents DescribeRule responses.
 *
 * @see    CloudWatchEventsClient::describeRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DescribeRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeRuleRequest(request));
    setReply(reply);
}

const DescribeRuleRequest * DescribeRuleResponse::request() const
{
    Q_D(const DescribeRuleResponse);
    return static_cast<const DescribeRuleRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents DescribeRule response.
 *
 * @param  response  Response to parse.
 */
void DescribeRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRuleResponsePrivate
 *
 * @brief  Private implementation for DescribeRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRuleResponse instance.
 */
DescribeRuleResponsePrivate::DescribeRuleResponsePrivate(
    DescribeRuleQueueResponse * const q) : DescribeRulePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents DescribeRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRuleResponsePrivate::DescribeRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRuleResponse"));
    /// @todo
}

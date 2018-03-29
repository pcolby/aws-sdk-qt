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

#include "describejobflowsresponse.h"
#include "describejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  DescribeJobFlowsResponse
 *
 * @brief  Handles EMR DescribeJobFlows responses.
 *
 * @see    EMRClient::describeJobFlows
 */

/**
 * @brief  Constructs a new DescribeJobFlowsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobFlowsResponse::DescribeJobFlowsResponse(
        const DescribeJobFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DescribeJobFlowsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobFlowsRequest(request));
    setReply(reply);
}

const DescribeJobFlowsRequest * DescribeJobFlowsResponse::request() const
{
    Q_D(const DescribeJobFlowsResponse);
    return static_cast<const DescribeJobFlowsRequest *>(d->request);
}

/**
 * @brief  Parse a EMR DescribeJobFlows response.
 *
 * @param  response  Response to parse.
 */
void DescribeJobFlowsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeJobFlowsResponsePrivate
 *
 * @brief  Private implementation for DescribeJobFlowsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobFlowsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeJobFlowsResponse instance.
 */
DescribeJobFlowsResponsePrivate::DescribeJobFlowsResponsePrivate(
    DescribeJobFlowsQueueResponse * const q) : DescribeJobFlowsPrivate(q)
{

}

/**
 * @brief  Parse an EMR DescribeJobFlowsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeJobFlowsResponsePrivate::DescribeJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobFlowsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS

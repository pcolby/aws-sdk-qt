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

#include "describejobqueuesresponse.h"
#include "describejobqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Batch {

/**
 * @class  DescribeJobQueuesResponse
 *
 * @brief  Handles Batch DescribeJobQueues responses.
 *
 * @see    BatchClient::describeJobQueues
 */

/**
 * @brief  Constructs a new DescribeJobQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobQueuesResponse::DescribeJobQueuesResponse(
        const DescribeJobQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeJobQueuesResponsePrivate(this), parent)
{
    setRequest(new DescribeJobQueuesRequest(request));
    setReply(reply);
}

const DescribeJobQueuesRequest * DescribeJobQueuesResponse::request() const
{
    Q_D(const DescribeJobQueuesResponse);
    return static_cast<const DescribeJobQueuesRequest *>(d->request);
}

/**
 * @brief  Parse a Batch DescribeJobQueues response.
 *
 * @param  response  Response to parse.
 */
void DescribeJobQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeJobQueuesResponsePrivate
 *
 * @brief  Private implementation for DescribeJobQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeJobQueuesResponse instance.
 */
DescribeJobQueuesResponsePrivate::DescribeJobQueuesResponsePrivate(
    DescribeJobQueuesQueueResponse * const q) : DescribeJobQueuesPrivate(q)
{

}

/**
 * @brief  Parse an Batch DescribeJobQueuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeJobQueuesResponsePrivate::DescribeJobQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobQueuesResponse"));
    /// @todo
}

} // namespace Batch
} // namespace AWS

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

#include "describejobsresponse.h"
#include "describejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Batch {

/**
 * @class  DescribeJobsResponse
 *
 * @brief  Handles Batch DescribeJobs responses.
 *
 * @see    BatchClient::describeJobs
 */

/**
 * @brief  Constructs a new DescribeJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobsResponse::DescribeJobsResponse(
        const DescribeJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeJobsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobsRequest(request));
    setReply(reply);
}

const DescribeJobsRequest * DescribeJobsResponse::request() const
{
    Q_D(const DescribeJobsResponse);
    return static_cast<const DescribeJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Batch DescribeJobs response.
 *
 * @param  response  Response to parse.
 */
void DescribeJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeJobsResponsePrivate
 *
 * @brief  Private implementation for DescribeJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeJobsResponse instance.
 */
DescribeJobsResponsePrivate::DescribeJobsResponsePrivate(
    DescribeJobsQueueResponse * const q) : DescribeJobsPrivate(q)
{

}

/**
 * @brief  Parse an Batch DescribeJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeJobsResponsePrivate::DescribeJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobsResponse"));
    /// @todo
}

} // namespace Batch
} // namespace AWS

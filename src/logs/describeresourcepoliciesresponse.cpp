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

#include "describeresourcepoliciesresponse.h"
#include "describeresourcepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeResourcePoliciesResponse
 *
 * @brief  Handles CloudWatchLogs DescribeResourcePolicies responses.
 *
 * @see    CloudWatchLogsClient::describeResourcePolicies
 */

/**
 * @brief  Constructs a new DescribeResourcePoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourcePoliciesResponse::DescribeResourcePoliciesResponse(
        const DescribeResourcePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeResourcePoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeResourcePoliciesRequest(request));
    setReply(reply);
}

const DescribeResourcePoliciesRequest * DescribeResourcePoliciesResponse::request() const
{
    Q_D(const DescribeResourcePoliciesResponse);
    return static_cast<const DescribeResourcePoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeResourcePolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeResourcePoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeResourcePoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribeResourcePoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourcePoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResourcePoliciesResponse instance.
 */
DescribeResourcePoliciesResponsePrivate::DescribeResourcePoliciesResponsePrivate(
    DescribeResourcePoliciesQueueResponse * const q) : DescribeResourcePoliciesPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeResourcePoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResourcePoliciesResponsePrivate::DescribeResourcePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourcePoliciesResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS

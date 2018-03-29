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

#include "describeaccountlimitsresponse.h"
#include "describeaccountlimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeAccountLimitsResponse
 *
 * @brief  Handles AutoScaling DescribeAccountLimits responses.
 *
 * @see    AutoScalingClient::describeAccountLimits
 */

/**
 * @brief  Constructs a new DescribeAccountLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountLimitsResponse::DescribeAccountLimitsResponse(
        const DescribeAccountLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAccountLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountLimitsRequest(request));
    setReply(reply);
}

const DescribeAccountLimitsRequest * DescribeAccountLimitsResponse::request() const
{
    Q_D(const DescribeAccountLimitsResponse);
    return static_cast<const DescribeAccountLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeAccountLimits response.
 *
 * @param  response  Response to parse.
 */
void DescribeAccountLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAccountLimitsResponsePrivate
 *
 * @brief  Private implementation for DescribeAccountLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAccountLimitsResponse instance.
 */
DescribeAccountLimitsResponsePrivate::DescribeAccountLimitsResponsePrivate(
    DescribeAccountLimitsQueueResponse * const q) : DescribeAccountLimitsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeAccountLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAccountLimitsResponsePrivate::DescribeAccountLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountLimitsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws

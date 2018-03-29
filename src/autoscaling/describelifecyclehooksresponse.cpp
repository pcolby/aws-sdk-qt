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

#include "describelifecyclehooksresponse.h"
#include "describelifecyclehooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeLifecycleHooksResponse
 *
 * @brief  Handles AutoScaling DescribeLifecycleHooks responses.
 *
 * @see    AutoScalingClient::describeLifecycleHooks
 */

/**
 * @brief  Constructs a new DescribeLifecycleHooksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLifecycleHooksResponse::DescribeLifecycleHooksResponse(
        const DescribeLifecycleHooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLifecycleHooksResponsePrivate(this), parent)
{
    setRequest(new DescribeLifecycleHooksRequest(request));
    setReply(reply);
}

const DescribeLifecycleHooksRequest * DescribeLifecycleHooksResponse::request() const
{
    Q_D(const DescribeLifecycleHooksResponse);
    return static_cast<const DescribeLifecycleHooksRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeLifecycleHooks response.
 *
 * @param  response  Response to parse.
 */
void DescribeLifecycleHooksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLifecycleHooksResponsePrivate
 *
 * @brief  Private implementation for DescribeLifecycleHooksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLifecycleHooksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLifecycleHooksResponse instance.
 */
DescribeLifecycleHooksResponsePrivate::DescribeLifecycleHooksResponsePrivate(
    DescribeLifecycleHooksQueueResponse * const q) : DescribeLifecycleHooksPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeLifecycleHooksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLifecycleHooksResponsePrivate::DescribeLifecycleHooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLifecycleHooksResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws

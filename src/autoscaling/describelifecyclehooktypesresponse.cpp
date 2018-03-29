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

#include "describelifecyclehooktypesresponse.h"
#include "describelifecyclehooktypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeLifecycleHookTypesResponse
 *
 * @brief  Handles AutoScaling DescribeLifecycleHookTypes responses.
 *
 * @see    AutoScalingClient::describeLifecycleHookTypes
 */

/**
 * @brief  Constructs a new DescribeLifecycleHookTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLifecycleHookTypesResponse::DescribeLifecycleHookTypesResponse(
        const DescribeLifecycleHookTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLifecycleHookTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeLifecycleHookTypesRequest(request));
    setReply(reply);
}

const DescribeLifecycleHookTypesRequest * DescribeLifecycleHookTypesResponse::request() const
{
    Q_D(const DescribeLifecycleHookTypesResponse);
    return static_cast<const DescribeLifecycleHookTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeLifecycleHookTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeLifecycleHookTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLifecycleHookTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeLifecycleHookTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLifecycleHookTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLifecycleHookTypesResponse instance.
 */
DescribeLifecycleHookTypesResponsePrivate::DescribeLifecycleHookTypesResponsePrivate(
    DescribeLifecycleHookTypesQueueResponse * const q) : DescribeLifecycleHookTypesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeLifecycleHookTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLifecycleHookTypesResponsePrivate::DescribeLifecycleHookTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLifecycleHookTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws

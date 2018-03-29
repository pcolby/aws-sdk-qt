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

#include "describeinstancehealthresponse.h"
#include "describeinstancehealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeInstanceHealthResponse
 *
 * @brief  Handles ElasticLoadBalancing DescribeInstanceHealth responses.
 *
 * @see    ElasticLoadBalancingClient::describeInstanceHealth
 */

/**
 * @brief  Constructs a new DescribeInstanceHealthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceHealthResponse::DescribeInstanceHealthResponse(
        const DescribeInstanceHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeInstanceHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceHealthRequest(request));
    setReply(reply);
}

const DescribeInstanceHealthRequest * DescribeInstanceHealthResponse::request() const
{
    Q_D(const DescribeInstanceHealthResponse);
    return static_cast<const DescribeInstanceHealthRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DescribeInstanceHealth response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceHealthResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceHealthResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceHealthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceHealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceHealthResponse instance.
 */
DescribeInstanceHealthResponsePrivate::DescribeInstanceHealthResponsePrivate(
    DescribeInstanceHealthResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DescribeInstanceHealthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceHealthResponsePrivate::DescribeInstanceHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceHealthResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws

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

#include "describeinstancestatusresponse.h"
#include "describeinstancestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceStatusResponse
 *
 * @brief  Handles EC2 DescribeInstanceStatus responses.
 *
 * @see    EC2Client::describeInstanceStatus
 */

/**
 * @brief  Constructs a new DescribeInstanceStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceStatusResponse::DescribeInstanceStatusResponse(
        const DescribeInstanceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeInstanceStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceStatusRequest(request));
    setReply(reply);
}

const DescribeInstanceStatusRequest * DescribeInstanceStatusResponse::request() const
{
    Q_D(const DescribeInstanceStatusResponse);
    return static_cast<const DescribeInstanceStatusRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeInstanceStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceStatusResponse instance.
 */
DescribeInstanceStatusResponsePrivate::DescribeInstanceStatusResponsePrivate(
    DescribeInstanceStatusResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeInstanceStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceStatusResponsePrivate::DescribeInstanceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceStatusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

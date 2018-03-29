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

#include "describehostsresponse.h"
#include "describehostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeHostsResponse
 *
 * @brief  Handles EC2 DescribeHosts responses.
 *
 * @see    EC2Client::describeHosts
 */

/**
 * @brief  Constructs a new DescribeHostsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHostsResponse::DescribeHostsResponse(
        const DescribeHostsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeHostsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostsRequest(request));
    setReply(reply);
}

const DescribeHostsRequest * DescribeHostsResponse::request() const
{
    Q_D(const DescribeHostsResponse);
    return static_cast<const DescribeHostsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeHosts response.
 *
 * @param  response  Response to parse.
 */
void DescribeHostsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHostsResponsePrivate
 *
 * @brief  Private implementation for DescribeHostsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHostsResponse instance.
 */
DescribeHostsResponsePrivate::DescribeHostsResponsePrivate(
    DescribeHostsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeHostsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHostsResponsePrivate::DescribeHostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

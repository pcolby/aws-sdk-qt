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

#include "describeinstanceattributeresponse.h"
#include "describeinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceAttributeResponse
 *
 * @brief  Handles EC2 DescribeInstanceAttribute responses.
 *
 * @see    EC2Client::describeInstanceAttribute
 */

/**
 * @brief  Constructs a new DescribeInstanceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceAttributeResponse::DescribeInstanceAttributeResponse(
        const DescribeInstanceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeInstanceAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceAttributeRequest(request));
    setReply(reply);
}

const DescribeInstanceAttributeRequest * DescribeInstanceAttributeResponse::request() const
{
    Q_D(const DescribeInstanceAttributeResponse);
    return static_cast<const DescribeInstanceAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeInstanceAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceAttributeResponse instance.
 */
DescribeInstanceAttributeResponsePrivate::DescribeInstanceAttributeResponsePrivate(
    DescribeInstanceAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeInstanceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceAttributeResponsePrivate::DescribeInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describeec2instancelimitsresponse.h"
#include "describeec2instancelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeEC2InstanceLimitsResponse
 *
 * @brief  Handles GameLift DescribeEC2InstanceLimits responses.
 *
 * @see    GameLiftClient::describeEC2InstanceLimits
 */

/**
 * @brief  Constructs a new DescribeEC2InstanceLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEC2InstanceLimitsResponse::DescribeEC2InstanceLimitsResponse(
        const DescribeEC2InstanceLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeEC2InstanceLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeEC2InstanceLimitsRequest(request));
    setReply(reply);
}

const DescribeEC2InstanceLimitsRequest * DescribeEC2InstanceLimitsResponse::request() const
{
    Q_D(const DescribeEC2InstanceLimitsResponse);
    return static_cast<const DescribeEC2InstanceLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeEC2InstanceLimits response.
 *
 * @param  response  Response to parse.
 */
void DescribeEC2InstanceLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEC2InstanceLimitsResponsePrivate
 *
 * @brief  Private implementation for DescribeEC2InstanceLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEC2InstanceLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEC2InstanceLimitsResponse instance.
 */
DescribeEC2InstanceLimitsResponsePrivate::DescribeEC2InstanceLimitsResponsePrivate(
    DescribeEC2InstanceLimitsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeEC2InstanceLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEC2InstanceLimitsResponsePrivate::DescribeEC2InstanceLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEC2InstanceLimitsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws

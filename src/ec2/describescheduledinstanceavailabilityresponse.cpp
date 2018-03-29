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

#include "describescheduledinstanceavailabilityresponse.h"
#include "describescheduledinstanceavailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeScheduledInstanceAvailabilityResponse
 *
 * @brief  Handles EC2 DescribeScheduledInstanceAvailability responses.
 *
 * @see    EC2Client::describeScheduledInstanceAvailability
 */

/**
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScheduledInstanceAvailabilityResponse::DescribeScheduledInstanceAvailabilityResponse(
        const DescribeScheduledInstanceAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeScheduledInstanceAvailabilityResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledInstanceAvailabilityRequest(request));
    setReply(reply);
}

const DescribeScheduledInstanceAvailabilityRequest * DescribeScheduledInstanceAvailabilityResponse::request() const
{
    Q_D(const DescribeScheduledInstanceAvailabilityResponse);
    return static_cast<const DescribeScheduledInstanceAvailabilityRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeScheduledInstanceAvailability response.
 *
 * @param  response  Response to parse.
 */
void DescribeScheduledInstanceAvailabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScheduledInstanceAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScheduledInstanceAvailabilityResponsePrivate
 *
 * @brief  Private implementation for DescribeScheduledInstanceAvailabilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScheduledInstanceAvailabilityResponse instance.
 */
DescribeScheduledInstanceAvailabilityResponsePrivate::DescribeScheduledInstanceAvailabilityResponsePrivate(
    DescribeScheduledInstanceAvailabilityResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeScheduledInstanceAvailabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScheduledInstanceAvailabilityResponsePrivate::DescribeScheduledInstanceAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledInstanceAvailabilityResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describespotdatafeedsubscriptionresponse.h"
#include "describespotdatafeedsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSpotDatafeedSubscriptionResponse
 *
 * @brief  Handles EC2 DescribeSpotDatafeedSubscription responses.
 *
 * @see    EC2Client::describeSpotDatafeedSubscription
 */

/**
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSpotDatafeedSubscriptionResponse::DescribeSpotDatafeedSubscriptionResponse(
        const DescribeSpotDatafeedSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSpotDatafeedSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotDatafeedSubscriptionRequest(request));
    setReply(reply);
}

const DescribeSpotDatafeedSubscriptionRequest * DescribeSpotDatafeedSubscriptionResponse::request() const
{
    Q_D(const DescribeSpotDatafeedSubscriptionResponse);
    return static_cast<const DescribeSpotDatafeedSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSpotDatafeedSubscription response.
 *
 * @param  response  Response to parse.
 */
void DescribeSpotDatafeedSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSpotDatafeedSubscriptionResponsePrivate
 *
 * @brief  Private implementation for DescribeSpotDatafeedSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotDatafeedSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSpotDatafeedSubscriptionResponse instance.
 */
DescribeSpotDatafeedSubscriptionResponsePrivate::DescribeSpotDatafeedSubscriptionResponsePrivate(
    DescribeSpotDatafeedSubscriptionQueueResponse * const q) : DescribeSpotDatafeedSubscriptionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSpotDatafeedSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSpotDatafeedSubscriptionResponsePrivate::DescribeSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotDatafeedSubscriptionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

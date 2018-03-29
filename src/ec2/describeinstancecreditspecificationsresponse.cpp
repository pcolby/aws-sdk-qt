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

#include "describeinstancecreditspecificationsresponse.h"
#include "describeinstancecreditspecificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceCreditSpecificationsResponse
 *
 * @brief  Handles EC2 DescribeInstanceCreditSpecifications responses.
 *
 * @see    EC2Client::describeInstanceCreditSpecifications
 */

/**
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceCreditSpecificationsResponse::DescribeInstanceCreditSpecificationsResponse(
        const DescribeInstanceCreditSpecificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeInstanceCreditSpecificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceCreditSpecificationsRequest(request));
    setReply(reply);
}

const DescribeInstanceCreditSpecificationsRequest * DescribeInstanceCreditSpecificationsResponse::request() const
{
    Q_D(const DescribeInstanceCreditSpecificationsResponse);
    return static_cast<const DescribeInstanceCreditSpecificationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeInstanceCreditSpecifications response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceCreditSpecificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceCreditSpecificationsResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceCreditSpecificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceCreditSpecificationsResponse instance.
 */
DescribeInstanceCreditSpecificationsResponsePrivate::DescribeInstanceCreditSpecificationsResponsePrivate(
    DescribeInstanceCreditSpecificationsQueueResponse * const q) : DescribeInstanceCreditSpecificationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeInstanceCreditSpecificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceCreditSpecificationsResponsePrivate::DescribeInstanceCreditSpecificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceCreditSpecificationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

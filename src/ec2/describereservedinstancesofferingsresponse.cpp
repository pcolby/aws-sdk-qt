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

#include "describereservedinstancesofferingsresponse.h"
#include "describereservedinstancesofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeReservedInstancesOfferingsResponse
 * \brief The DescribeReservedInstancesOfferingsResponse class provides an interace for EC2 DescribeReservedInstancesOfferings responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeReservedInstancesOfferings
 */

/*!
 * Constructs a DescribeReservedInstancesOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedInstancesOfferingsResponse::DescribeReservedInstancesOfferingsResponse(
        const DescribeReservedInstancesOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeReservedInstancesOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedInstancesOfferingsRequest * DescribeReservedInstancesOfferingsResponse::request() const
{
    Q_D(const DescribeReservedInstancesOfferingsResponse);
    return static_cast<const DescribeReservedInstancesOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeReservedInstancesOfferings \a response.
 */
void DescribeReservedInstancesOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedInstancesOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeReservedInstancesOfferingsResponsePrivate
 * \brief The DescribeReservedInstancesOfferingsResponsePrivate class provides private implementation for DescribeReservedInstancesOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeReservedInstancesOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeReservedInstancesOfferingsResponsePrivate::DescribeReservedInstancesOfferingsResponsePrivate(
    DescribeReservedInstancesOfferingsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeReservedInstancesOfferings response element from \a xml.
 */
void DescribeReservedInstancesOfferingsResponsePrivate::parseDescribeReservedInstancesOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesOfferingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

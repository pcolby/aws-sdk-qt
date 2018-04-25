/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereservedinstanceslistingsresponse.h"
#include "describereservedinstanceslistingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeReservedInstancesListingsResponse
 * \brief The DescribeReservedInstancesListingsResponse class provides an interace for EC2 DescribeReservedInstancesListings responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeReservedInstancesListings
 */

/*!
 * Constructs a DescribeReservedInstancesListingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedInstancesListingsResponse::DescribeReservedInstancesListingsResponse(
        const DescribeReservedInstancesListingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeReservedInstancesListingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesListingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedInstancesListingsRequest * DescribeReservedInstancesListingsResponse::request() const
{
    Q_D(const DescribeReservedInstancesListingsResponse);
    return static_cast<const DescribeReservedInstancesListingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeReservedInstancesListings \a response.
 */
void DescribeReservedInstancesListingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedInstancesListingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeReservedInstancesListingsResponsePrivate
 * \brief The DescribeReservedInstancesListingsResponsePrivate class provides private implementation for DescribeReservedInstancesListingsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeReservedInstancesListingsResponsePrivate object with public implementation \a q.
 */
DescribeReservedInstancesListingsResponsePrivate::DescribeReservedInstancesListingsResponsePrivate(
    DescribeReservedInstancesListingsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeReservedInstancesListings response element from \a xml.
 */
void DescribeReservedInstancesListingsResponsePrivate::parseDescribeReservedInstancesListingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesListingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describehostreservationofferingsresponse.h"
#include "describehostreservationofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeHostReservationOfferingsResponse
 * \brief The DescribeHostReservationOfferingsResponse class provides an interace for EC2 DescribeHostReservationOfferings responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeHostReservationOfferings
 */

/*!
 * Constructs a DescribeHostReservationOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHostReservationOfferingsResponse::DescribeHostReservationOfferingsResponse(
        const DescribeHostReservationOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeHostReservationOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostReservationOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHostReservationOfferingsRequest * DescribeHostReservationOfferingsResponse::request() const
{
    Q_D(const DescribeHostReservationOfferingsResponse);
    return static_cast<const DescribeHostReservationOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeHostReservationOfferings \a response.
 */
void DescribeHostReservationOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeHostReservationOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeHostReservationOfferingsResponsePrivate
 * \brief The DescribeHostReservationOfferingsResponsePrivate class provides private implementation for DescribeHostReservationOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeHostReservationOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeHostReservationOfferingsResponsePrivate::DescribeHostReservationOfferingsResponsePrivate(
    DescribeHostReservationOfferingsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeHostReservationOfferings response element from \a xml.
 */
void DescribeHostReservationOfferingsResponsePrivate::parseDescribeHostReservationOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostReservationOfferingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

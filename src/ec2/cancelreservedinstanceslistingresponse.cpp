/*
    Copyright 2013-2019 Paul Colby

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

#include "cancelreservedinstanceslistingresponse.h"
#include "cancelreservedinstanceslistingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelReservedInstancesListingResponse
 * \brief The CancelReservedInstancesListingResponse class provides an interace for EC2 CancelReservedInstancesListing responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::cancelReservedInstancesListing
 */

/*!
 * Constructs a CancelReservedInstancesListingResponse object for \a reply to \a request, with parent \a parent.
 */
CancelReservedInstancesListingResponse::CancelReservedInstancesListingResponse(
        const CancelReservedInstancesListingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CancelReservedInstancesListingResponsePrivate(this), parent)
{
    setRequest(new CancelReservedInstancesListingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelReservedInstancesListingRequest * CancelReservedInstancesListingResponse::request() const
{
    Q_D(const CancelReservedInstancesListingResponse);
    return static_cast<const CancelReservedInstancesListingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CancelReservedInstancesListing \a response.
 */
void CancelReservedInstancesListingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelReservedInstancesListingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CancelReservedInstancesListingResponsePrivate
 * \brief The CancelReservedInstancesListingResponsePrivate class provides private implementation for CancelReservedInstancesListingResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelReservedInstancesListingResponsePrivate object with public implementation \a q.
 */
CancelReservedInstancesListingResponsePrivate::CancelReservedInstancesListingResponsePrivate(
    CancelReservedInstancesListingResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelReservedInstancesListing response element from \a xml.
 */
void CancelReservedInstancesListingResponsePrivate::parseCancelReservedInstancesListingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelReservedInstancesListingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

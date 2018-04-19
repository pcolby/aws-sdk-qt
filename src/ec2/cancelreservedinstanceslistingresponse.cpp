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
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
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
    : EC2Response(new CancelReservedInstancesListingResponsePrivate(this), parent)
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
    Q_D(CancelReservedInstancesListingResponse);
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
    CancelReservedInstancesListingResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelReservedInstancesListing response element from \a xml.
 */
void CancelReservedInstancesListingResponsePrivate::parseCancelReservedInstancesListingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelReservedInstancesListingResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

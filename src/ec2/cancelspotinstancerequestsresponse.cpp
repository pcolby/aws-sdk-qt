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

#include "cancelspotinstancerequestsresponse.h"
#include "cancelspotinstancerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelSpotInstanceRequestsResponse
 * \brief The CancelSpotInstanceRequestsResponse class provides an interace for EC2 CancelSpotInstanceRequests responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::cancelSpotInstanceRequests
 */

/*!
 * Constructs a CancelSpotInstanceRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSpotInstanceRequestsResponse::CancelSpotInstanceRequestsResponse(
        const CancelSpotInstanceRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CancelSpotInstanceRequestsResponsePrivate(this), parent)
{
    setRequest(new CancelSpotInstanceRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSpotInstanceRequestsRequest * CancelSpotInstanceRequestsResponse::request() const
{
    Q_D(const CancelSpotInstanceRequestsResponse);
    return static_cast<const CancelSpotInstanceRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CancelSpotInstanceRequests \a response.
 */
void CancelSpotInstanceRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelSpotInstanceRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CancelSpotInstanceRequestsResponsePrivate
 * \brief The CancelSpotInstanceRequestsResponsePrivate class provides private implementation for CancelSpotInstanceRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelSpotInstanceRequestsResponsePrivate object with public implementation \a q.
 */
CancelSpotInstanceRequestsResponsePrivate::CancelSpotInstanceRequestsResponsePrivate(
    CancelSpotInstanceRequestsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelSpotInstanceRequests response element from \a xml.
 */
void CancelSpotInstanceRequestsResponsePrivate::parseCancelSpotInstanceRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSpotInstanceRequestsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

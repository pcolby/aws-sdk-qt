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

#include "rejectvpcpeeringconnectionresponse.h"
#include "rejectvpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RejectVpcPeeringConnectionResponse
 * \brief The RejectVpcPeeringConnectionResponse class provides an interace for EC2 RejectVpcPeeringConnection responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::rejectVpcPeeringConnection
 */

/*!
 * Constructs a RejectVpcPeeringConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
RejectVpcPeeringConnectionResponse::RejectVpcPeeringConnectionResponse(
        const RejectVpcPeeringConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RejectVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new RejectVpcPeeringConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectVpcPeeringConnectionRequest * RejectVpcPeeringConnectionResponse::request() const
{
    Q_D(const RejectVpcPeeringConnectionResponse);
    return static_cast<const RejectVpcPeeringConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RejectVpcPeeringConnection \a response.
 */
void RejectVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RejectVpcPeeringConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RejectVpcPeeringConnectionResponsePrivate
 * \brief The RejectVpcPeeringConnectionResponsePrivate class provides private implementation for RejectVpcPeeringConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RejectVpcPeeringConnectionResponsePrivate object with public implementation \a q.
 */
RejectVpcPeeringConnectionResponsePrivate::RejectVpcPeeringConnectionResponsePrivate(
    RejectVpcPeeringConnectionResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RejectVpcPeeringConnection response element from \a xml.
 */
void RejectVpcPeeringConnectionResponsePrivate::parseRejectVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

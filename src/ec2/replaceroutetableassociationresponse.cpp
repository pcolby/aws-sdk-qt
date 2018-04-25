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

#include "replaceroutetableassociationresponse.h"
#include "replaceroutetableassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReplaceRouteTableAssociationResponse
 * \brief The ReplaceRouteTableAssociationResponse class provides an interace for EC2 ReplaceRouteTableAssociation responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::replaceRouteTableAssociation
 */

/*!
 * Constructs a ReplaceRouteTableAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
ReplaceRouteTableAssociationResponse::ReplaceRouteTableAssociationResponse(
        const ReplaceRouteTableAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ReplaceRouteTableAssociationResponsePrivate(this), parent)
{
    setRequest(new ReplaceRouteTableAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReplaceRouteTableAssociationRequest * ReplaceRouteTableAssociationResponse::request() const
{
    Q_D(const ReplaceRouteTableAssociationResponse);
    return static_cast<const ReplaceRouteTableAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ReplaceRouteTableAssociation \a response.
 */
void ReplaceRouteTableAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(ReplaceRouteTableAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ReplaceRouteTableAssociationResponsePrivate
 * \brief The ReplaceRouteTableAssociationResponsePrivate class provides private implementation for ReplaceRouteTableAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReplaceRouteTableAssociationResponsePrivate object with public implementation \a q.
 */
ReplaceRouteTableAssociationResponsePrivate::ReplaceRouteTableAssociationResponsePrivate(
    ReplaceRouteTableAssociationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ReplaceRouteTableAssociation response element from \a xml.
 */
void ReplaceRouteTableAssociationResponsePrivate::parseReplaceRouteTableAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceRouteTableAssociationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

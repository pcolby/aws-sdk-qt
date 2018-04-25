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

#include "associateroutetableresponse.h"
#include "associateroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssociateRouteTableResponse
 * \brief The AssociateRouteTableResponse class provides an interace for EC2 AssociateRouteTable responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::associateRouteTable
 */

/*!
 * Constructs a AssociateRouteTableResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateRouteTableResponse::AssociateRouteTableResponse(
        const AssociateRouteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AssociateRouteTableResponsePrivate(this), parent)
{
    setRequest(new AssociateRouteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateRouteTableRequest * AssociateRouteTableResponse::request() const
{
    Q_D(const AssociateRouteTableResponse);
    return static_cast<const AssociateRouteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AssociateRouteTable \a response.
 */
void AssociateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateRouteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AssociateRouteTableResponsePrivate
 * \brief The AssociateRouteTableResponsePrivate class provides private implementation for AssociateRouteTableResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssociateRouteTableResponsePrivate object with public implementation \a q.
 */
AssociateRouteTableResponsePrivate::AssociateRouteTableResponsePrivate(
    AssociateRouteTableResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AssociateRouteTable response element from \a xml.
 */
void AssociateRouteTableResponsePrivate::parseAssociateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

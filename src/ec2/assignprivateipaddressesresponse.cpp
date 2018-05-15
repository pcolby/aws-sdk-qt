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

#include "assignprivateipaddressesresponse.h"
#include "assignprivateipaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssignPrivateIpAddressesResponse
 * \brief The AssignPrivateIpAddressesResponse class provides an interace for EC2 AssignPrivateIpAddresses responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::assignPrivateIpAddresses
 */

/*!
 * Constructs a AssignPrivateIpAddressesResponse object for \a reply to \a request, with parent \a parent.
 */
AssignPrivateIpAddressesResponse::AssignPrivateIpAddressesResponse(
        const AssignPrivateIpAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AssignPrivateIpAddressesResponsePrivate(this), parent)
{
    setRequest(new AssignPrivateIpAddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssignPrivateIpAddressesRequest * AssignPrivateIpAddressesResponse::request() const
{
    Q_D(const AssignPrivateIpAddressesResponse);
    return static_cast<const AssignPrivateIpAddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AssignPrivateIpAddresses \a response.
 */
void AssignPrivateIpAddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssignPrivateIpAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AssignPrivateIpAddressesResponsePrivate
 * \brief The AssignPrivateIpAddressesResponsePrivate class provides private implementation for AssignPrivateIpAddressesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssignPrivateIpAddressesResponsePrivate object with public implementation \a q.
 */
AssignPrivateIpAddressesResponsePrivate::AssignPrivateIpAddressesResponsePrivate(
    AssignPrivateIpAddressesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AssignPrivateIpAddresses response element from \a xml.
 */
void AssignPrivateIpAddressesResponsePrivate::parseAssignPrivateIpAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignPrivateIpAddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

/*
    Copyright 2013-2021 Paul Colby

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

#include "registerinstanceeventnotificationattributesresponse.h"
#include "registerinstanceeventnotificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RegisterInstanceEventNotificationAttributesResponse
 * \brief The RegisterInstanceEventNotificationAttributesResponse class provides an interace for EC2 RegisterInstanceEventNotificationAttributes responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS Cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications faster. Amazon
 *  Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the AWS Cloud where you can
 *  launch AWS resources in a virtual network that you've defined. Amazon Elastic Block Store (Amazon EBS) provides block
 *  level storage volumes for use with EC2 instances. EBS volumes are highly available and reliable storage volumes that can
 *  be attached to any running instance and used like a hard
 * 
 *  drive>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ebs">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::registerInstanceEventNotificationAttributes
 */

/*!
 * Constructs a RegisterInstanceEventNotificationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterInstanceEventNotificationAttributesResponse::RegisterInstanceEventNotificationAttributesResponse(
        const RegisterInstanceEventNotificationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RegisterInstanceEventNotificationAttributesResponsePrivate(this), parent)
{
    setRequest(new RegisterInstanceEventNotificationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterInstanceEventNotificationAttributesRequest * RegisterInstanceEventNotificationAttributesResponse::request() const
{
    Q_D(const RegisterInstanceEventNotificationAttributesResponse);
    return static_cast<const RegisterInstanceEventNotificationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 RegisterInstanceEventNotificationAttributes \a response.
 */
void RegisterInstanceEventNotificationAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterInstanceEventNotificationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RegisterInstanceEventNotificationAttributesResponsePrivate
 * \brief The RegisterInstanceEventNotificationAttributesResponsePrivate class provides private implementation for RegisterInstanceEventNotificationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RegisterInstanceEventNotificationAttributesResponsePrivate object with public implementation \a q.
 */
RegisterInstanceEventNotificationAttributesResponsePrivate::RegisterInstanceEventNotificationAttributesResponsePrivate(
    RegisterInstanceEventNotificationAttributesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RegisterInstanceEventNotificationAttributes response element from \a xml.
 */
void RegisterInstanceEventNotificationAttributesResponsePrivate::parseRegisterInstanceEventNotificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterInstanceEventNotificationAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

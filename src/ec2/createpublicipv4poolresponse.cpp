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

#include "createpublicipv4poolresponse.h"
#include "createpublicipv4poolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::CreatePublicIpv4PoolResponse
 * \brief The CreatePublicIpv4PoolResponse class provides an interace for Ec2 CreatePublicIpv4Pool responses.
 *
 * \inmodule QtAwsEc2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the Amazon Web Services
 *  Cloud. Using Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *  faster. Amazon Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the Amazon
 *  Web Services Cloud where you can launch Amazon Web Services resources in a virtual network that you've defined. Amazon
 *  Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances. EBS volumes are highly
 *  available and reliable storage volumes that can be attached to any running instance and used like a hard
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
 *  Amazon Web Services VPN: <a href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN documentation</a>
 *
 * \sa Ec2Client::createPublicIpv4Pool
 */

/*!
 * Constructs a CreatePublicIpv4PoolResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePublicIpv4PoolResponse::CreatePublicIpv4PoolResponse(
        const CreatePublicIpv4PoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreatePublicIpv4PoolResponsePrivate(this), parent)
{
    setRequest(new CreatePublicIpv4PoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePublicIpv4PoolRequest * CreatePublicIpv4PoolResponse::request() const
{
    Q_D(const CreatePublicIpv4PoolResponse);
    return static_cast<const CreatePublicIpv4PoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 CreatePublicIpv4Pool \a response.
 */
void CreatePublicIpv4PoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePublicIpv4PoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::CreatePublicIpv4PoolResponsePrivate
 * \brief The CreatePublicIpv4PoolResponsePrivate class provides private implementation for CreatePublicIpv4PoolResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a CreatePublicIpv4PoolResponsePrivate object with public implementation \a q.
 */
CreatePublicIpv4PoolResponsePrivate::CreatePublicIpv4PoolResponsePrivate(
    CreatePublicIpv4PoolResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 CreatePublicIpv4Pool response element from \a xml.
 */
void CreatePublicIpv4PoolResponsePrivate::parseCreatePublicIpv4PoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicIpv4PoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws

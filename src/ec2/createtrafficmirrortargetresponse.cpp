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

#include "createtrafficmirrortargetresponse.h"
#include "createtrafficmirrortargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateTrafficMirrorTargetResponse
 * \brief The CreateTrafficMirrorTargetResponse class provides an interace for EC2 CreateTrafficMirrorTarget responses.
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
 * \sa Ec2Client::createTrafficMirrorTarget
 */

/*!
 * Constructs a CreateTrafficMirrorTargetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficMirrorTargetResponse::CreateTrafficMirrorTargetResponse(
        const CreateTrafficMirrorTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateTrafficMirrorTargetResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficMirrorTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficMirrorTargetRequest * CreateTrafficMirrorTargetResponse::request() const
{
    Q_D(const CreateTrafficMirrorTargetResponse);
    return static_cast<const CreateTrafficMirrorTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateTrafficMirrorTarget \a response.
 */
void CreateTrafficMirrorTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficMirrorTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateTrafficMirrorTargetResponsePrivate
 * \brief The CreateTrafficMirrorTargetResponsePrivate class provides private implementation for CreateTrafficMirrorTargetResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateTrafficMirrorTargetResponsePrivate object with public implementation \a q.
 */
CreateTrafficMirrorTargetResponsePrivate::CreateTrafficMirrorTargetResponsePrivate(
    CreateTrafficMirrorTargetResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateTrafficMirrorTarget response element from \a xml.
 */
void CreateTrafficMirrorTargetResponsePrivate::parseCreateTrafficMirrorTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficMirrorTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

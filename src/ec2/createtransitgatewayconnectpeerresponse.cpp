// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtransitgatewayconnectpeerresponse.h"
#include "createtransitgatewayconnectpeerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::CreateTransitGatewayConnectPeerResponse
 * \brief The CreateTransitGatewayConnectPeerResponse class provides an interace for Ec2 CreateTransitGatewayConnectPeer responses.
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
 * \sa Ec2Client::createTransitGatewayConnectPeer
 */

/*!
 * Constructs a CreateTransitGatewayConnectPeerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransitGatewayConnectPeerResponse::CreateTransitGatewayConnectPeerResponse(
        const CreateTransitGatewayConnectPeerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateTransitGatewayConnectPeerResponsePrivate(this), parent)
{
    setRequest(new CreateTransitGatewayConnectPeerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransitGatewayConnectPeerRequest * CreateTransitGatewayConnectPeerResponse::request() const
{
    Q_D(const CreateTransitGatewayConnectPeerResponse);
    return static_cast<const CreateTransitGatewayConnectPeerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 CreateTransitGatewayConnectPeer \a response.
 */
void CreateTransitGatewayConnectPeerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransitGatewayConnectPeerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::CreateTransitGatewayConnectPeerResponsePrivate
 * \brief The CreateTransitGatewayConnectPeerResponsePrivate class provides private implementation for CreateTransitGatewayConnectPeerResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a CreateTransitGatewayConnectPeerResponsePrivate object with public implementation \a q.
 */
CreateTransitGatewayConnectPeerResponsePrivate::CreateTransitGatewayConnectPeerResponsePrivate(
    CreateTransitGatewayConnectPeerResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 CreateTransitGatewayConnectPeer response element from \a xml.
 */
void CreateTransitGatewayConnectPeerResponsePrivate::parseCreateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransitGatewayConnectPeerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws

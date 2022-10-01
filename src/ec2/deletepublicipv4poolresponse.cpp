// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepublicipv4poolresponse.h"
#include "deletepublicipv4poolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DeletePublicIpv4PoolResponse
 * \brief The DeletePublicIpv4PoolResponse class provides an interace for Ec2 DeletePublicIpv4Pool responses.
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
 * \sa Ec2Client::deletePublicIpv4Pool
 */

/*!
 * Constructs a DeletePublicIpv4PoolResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePublicIpv4PoolResponse::DeletePublicIpv4PoolResponse(
        const DeletePublicIpv4PoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeletePublicIpv4PoolResponsePrivate(this), parent)
{
    setRequest(new DeletePublicIpv4PoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePublicIpv4PoolRequest * DeletePublicIpv4PoolResponse::request() const
{
    Q_D(const DeletePublicIpv4PoolResponse);
    return static_cast<const DeletePublicIpv4PoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 DeletePublicIpv4Pool \a response.
 */
void DeletePublicIpv4PoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePublicIpv4PoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::DeletePublicIpv4PoolResponsePrivate
 * \brief The DeletePublicIpv4PoolResponsePrivate class provides private implementation for DeletePublicIpv4PoolResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DeletePublicIpv4PoolResponsePrivate object with public implementation \a q.
 */
DeletePublicIpv4PoolResponsePrivate::DeletePublicIpv4PoolResponsePrivate(
    DeletePublicIpv4PoolResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 DeletePublicIpv4Pool response element from \a xml.
 */
void DeletePublicIpv4PoolResponsePrivate::parseDeletePublicIpv4PoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicIpv4PoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws

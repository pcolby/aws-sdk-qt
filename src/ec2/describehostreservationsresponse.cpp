// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehostreservationsresponse.h"
#include "describehostreservationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribeHostReservationsResponse
 * \brief The DescribeHostReservationsResponse class provides an interace for Ec2 DescribeHostReservations responses.
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
 * \sa Ec2Client::describeHostReservations
 */

/*!
 * Constructs a DescribeHostReservationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHostReservationsResponse::DescribeHostReservationsResponse(
        const DescribeHostReservationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeHostReservationsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostReservationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHostReservationsRequest * DescribeHostReservationsResponse::request() const
{
    Q_D(const DescribeHostReservationsResponse);
    return static_cast<const DescribeHostReservationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 DescribeHostReservations \a response.
 */
void DescribeHostReservationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHostReservationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::DescribeHostReservationsResponsePrivate
 * \brief The DescribeHostReservationsResponsePrivate class provides private implementation for DescribeHostReservationsResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribeHostReservationsResponsePrivate object with public implementation \a q.
 */
DescribeHostReservationsResponsePrivate::DescribeHostReservationsResponsePrivate(
    DescribeHostReservationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 DescribeHostReservations response element from \a xml.
 */
void DescribeHostReservationsResponsePrivate::parseDescribeHostReservationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostReservationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws

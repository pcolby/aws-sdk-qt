// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefastlaunchimagesresponse.h"
#include "describefastlaunchimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribeFastLaunchImagesResponse
 * \brief The DescribeFastLaunchImagesResponse class provides an interace for Ec2 DescribeFastLaunchImages responses.
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
 * \sa Ec2Client::describeFastLaunchImages
 */

/*!
 * Constructs a DescribeFastLaunchImagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFastLaunchImagesResponse::DescribeFastLaunchImagesResponse(
        const DescribeFastLaunchImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFastLaunchImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeFastLaunchImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFastLaunchImagesRequest * DescribeFastLaunchImagesResponse::request() const
{
    Q_D(const DescribeFastLaunchImagesResponse);
    return static_cast<const DescribeFastLaunchImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 DescribeFastLaunchImages \a response.
 */
void DescribeFastLaunchImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFastLaunchImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::DescribeFastLaunchImagesResponsePrivate
 * \brief The DescribeFastLaunchImagesResponsePrivate class provides private implementation for DescribeFastLaunchImagesResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribeFastLaunchImagesResponsePrivate object with public implementation \a q.
 */
DescribeFastLaunchImagesResponsePrivate::DescribeFastLaunchImagesResponsePrivate(
    DescribeFastLaunchImagesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 DescribeFastLaunchImages response element from \a xml.
 */
void DescribeFastLaunchImagesResponsePrivate::parseDescribeFastLaunchImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFastLaunchImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws

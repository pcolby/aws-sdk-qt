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

#include "copyimageresponse.h"
#include "copyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CopyImageResponse
 * \brief The CopyImageResponse class provides an interace for EC2 CopyImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
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
 * \sa Ec2Client::copyImage
 */

/*!
 * Constructs a CopyImageResponse object for \a reply to \a request, with parent \a parent.
 */
CopyImageResponse::CopyImageResponse(
        const CopyImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CopyImageResponsePrivate(this), parent)
{
    setRequest(new CopyImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyImageRequest * CopyImageResponse::request() const
{
    Q_D(const CopyImageResponse);
    return static_cast<const CopyImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CopyImage \a response.
 */
void CopyImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CopyImageResponsePrivate
 * \brief The CopyImageResponsePrivate class provides private implementation for CopyImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CopyImageResponsePrivate object with public implementation \a q.
 */
CopyImageResponsePrivate::CopyImageResponsePrivate(
    CopyImageResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CopyImage response element from \a xml.
 */
void CopyImageResponsePrivate::parseCopyImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

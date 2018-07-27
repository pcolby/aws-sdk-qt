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

#include "replacenetworkaclentryresponse.h"
#include "replacenetworkaclentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReplaceNetworkAclEntryResponse
 * \brief The ReplaceNetworkAclEntryResponse class provides an interace for EC2 ReplaceNetworkAclEntry responses.
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
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::replaceNetworkAclEntry
 */

/*!
 * Constructs a ReplaceNetworkAclEntryResponse object for \a reply to \a request, with parent \a parent.
 */
ReplaceNetworkAclEntryResponse::ReplaceNetworkAclEntryResponse(
        const ReplaceNetworkAclEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ReplaceNetworkAclEntryResponsePrivate(this), parent)
{
    setRequest(new ReplaceNetworkAclEntryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReplaceNetworkAclEntryRequest * ReplaceNetworkAclEntryResponse::request() const
{
    Q_D(const ReplaceNetworkAclEntryResponse);
    return static_cast<const ReplaceNetworkAclEntryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ReplaceNetworkAclEntry \a response.
 */
void ReplaceNetworkAclEntryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReplaceNetworkAclEntryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ReplaceNetworkAclEntryResponsePrivate
 * \brief The ReplaceNetworkAclEntryResponsePrivate class provides private implementation for ReplaceNetworkAclEntryResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReplaceNetworkAclEntryResponsePrivate object with public implementation \a q.
 */
ReplaceNetworkAclEntryResponsePrivate::ReplaceNetworkAclEntryResponsePrivate(
    ReplaceNetworkAclEntryResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ReplaceNetworkAclEntry response element from \a xml.
 */
void ReplaceNetworkAclEntryResponsePrivate::parseReplaceNetworkAclEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceNetworkAclEntryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

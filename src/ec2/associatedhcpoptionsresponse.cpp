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

#include "associatedhcpoptionsresponse.h"
#include "associatedhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssociateDhcpOptionsResponse
 * \brief The AssociateDhcpOptionsResponse class provides an interace for EC2 AssociateDhcpOptions responses.
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
 * \sa Ec2Client::associateDhcpOptions
 */

/*!
 * Constructs a AssociateDhcpOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDhcpOptionsResponse::AssociateDhcpOptionsResponse(
        const AssociateDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AssociateDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new AssociateDhcpOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDhcpOptionsRequest * AssociateDhcpOptionsResponse::request() const
{
    Q_D(const AssociateDhcpOptionsResponse);
    return static_cast<const AssociateDhcpOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AssociateDhcpOptions \a response.
 */
void AssociateDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDhcpOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AssociateDhcpOptionsResponsePrivate
 * \brief The AssociateDhcpOptionsResponsePrivate class provides private implementation for AssociateDhcpOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AssociateDhcpOptionsResponsePrivate object with public implementation \a q.
 */
AssociateDhcpOptionsResponsePrivate::AssociateDhcpOptionsResponsePrivate(
    AssociateDhcpOptionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AssociateDhcpOptions response element from \a xml.
 */
void AssociateDhcpOptionsResponsePrivate::parseAssociateDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDhcpOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws

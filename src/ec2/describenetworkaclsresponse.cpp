/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describenetworkaclsresponse.h"
#include "describenetworkaclsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeNetworkAclsResponse
 * \brief The DescribeNetworkAclsResponse class provides an interace for EC2 DescribeNetworkAcls responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeNetworkAcls
 */

/*!
 * Constructs a DescribeNetworkAclsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNetworkAclsResponse::DescribeNetworkAclsResponse(
        const DescribeNetworkAclsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeNetworkAclsResponsePrivate(this), parent)
{
    setRequest(new DescribeNetworkAclsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNetworkAclsRequest * DescribeNetworkAclsResponse::request() const
{
    Q_D(const DescribeNetworkAclsResponse);
    return static_cast<const DescribeNetworkAclsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeNetworkAcls \a response.
 */
void DescribeNetworkAclsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNetworkAclsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeNetworkAclsResponsePrivate
 * \brief The DescribeNetworkAclsResponsePrivate class provides private implementation for DescribeNetworkAclsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeNetworkAclsResponsePrivate object with public implementation \a q.
 */
DescribeNetworkAclsResponsePrivate::DescribeNetworkAclsResponsePrivate(
    DescribeNetworkAclsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeNetworkAcls response element from \a xml.
 */
void DescribeNetworkAclsResponsePrivate::parseDescribeNetworkAclsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNetworkAclsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describevpcattributeresponse.h"
#include "describevpcattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcAttributeResponse
 * \brief The DescribeVpcAttributeResponse class provides an interace for EC2 DescribeVpcAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcAttribute
 */

/*!
 * Constructs a DescribeVpcAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcAttributeResponse::DescribeVpcAttributeResponse(
        const DescribeVpcAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcAttributeRequest * DescribeVpcAttributeResponse::request() const
{
    Q_D(const DescribeVpcAttributeResponse);
    return static_cast<const DescribeVpcAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcAttribute \a response.
 */
void DescribeVpcAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcAttributeResponsePrivate
 * \brief The DescribeVpcAttributeResponsePrivate class provides private implementation for DescribeVpcAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcAttributeResponsePrivate object with public implementation \a q.
 */
DescribeVpcAttributeResponsePrivate::DescribeVpcAttributeResponsePrivate(
    DescribeVpcAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcAttribute response element from \a xml.
 */
void DescribeVpcAttributeResponsePrivate::parseDescribeVpcAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describevpcsresponse.h"
#include "describevpcsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcsResponse
 * \brief The DescribeVpcsResponse class provides an interace for EC2 DescribeVpcs responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcs
 */

/*!
 * Constructs a DescribeVpcsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcsResponse::DescribeVpcsResponse(
        const DescribeVpcsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcsRequest * DescribeVpcsResponse::request() const
{
    Q_D(const DescribeVpcsResponse);
    return static_cast<const DescribeVpcsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcs \a response.
 */
void DescribeVpcsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcsResponsePrivate
 * \brief The DescribeVpcsResponsePrivate class provides private implementation for DescribeVpcsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcsResponsePrivate object with public implementation \a q.
 */
DescribeVpcsResponsePrivate::DescribeVpcsResponsePrivate(
    DescribeVpcsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcs response element from \a xml.
 */
void DescribeVpcsResponsePrivate::parseDescribeVpcsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describehostsresponse.h"
#include "describehostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeHostsResponse
 * \brief The DescribeHostsResponse class provides an interace for EC2 DescribeHosts responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeHosts
 */

/*!
 * Constructs a DescribeHostsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHostsResponse::DescribeHostsResponse(
        const DescribeHostsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeHostsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHostsRequest * DescribeHostsResponse::request() const
{
    Q_D(const DescribeHostsResponse);
    return static_cast<const DescribeHostsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeHosts \a response.
 */
void DescribeHostsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHostsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeHostsResponsePrivate
 * \brief The DescribeHostsResponsePrivate class provides private implementation for DescribeHostsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeHostsResponsePrivate object with public implementation \a q.
 */
DescribeHostsResponsePrivate::DescribeHostsResponsePrivate(
    DescribeHostsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeHosts response element from \a xml.
 */
void DescribeHostsResponsePrivate::parseDescribeHostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

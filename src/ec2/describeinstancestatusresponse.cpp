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

#include "describeinstancestatusresponse.h"
#include "describeinstancestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeInstanceStatusResponse
 * \brief The DescribeInstanceStatusResponse class provides an interace for EC2 DescribeInstanceStatus responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeInstanceStatus
 */

/*!
 * Constructs a DescribeInstanceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstanceStatusResponse::DescribeInstanceStatusResponse(
        const DescribeInstanceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeInstanceStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstanceStatusRequest * DescribeInstanceStatusResponse::request() const
{
    Q_D(const DescribeInstanceStatusResponse);
    return static_cast<const DescribeInstanceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeInstanceStatus \a response.
 */
void DescribeInstanceStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeInstanceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeInstanceStatusResponsePrivate
 * \brief The DescribeInstanceStatusResponsePrivate class provides private implementation for DescribeInstanceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeInstanceStatusResponsePrivate object with public implementation \a q.
 */
DescribeInstanceStatusResponsePrivate::DescribeInstanceStatusResponsePrivate(
    DescribeInstanceStatusResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeInstanceStatus response element from \a xml.
 */
void DescribeInstanceStatusResponsePrivate::parseDescribeInstanceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceStatusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

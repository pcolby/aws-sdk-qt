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

#include "describeinstanceattributeresponse.h"
#include "describeinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeInstanceAttributeResponse
 * \brief The DescribeInstanceAttributeResponse class provides an interace for EC2 DescribeInstanceAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeInstanceAttribute
 */

/*!
 * Constructs a DescribeInstanceAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstanceAttributeResponse::DescribeInstanceAttributeResponse(
        const DescribeInstanceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeInstanceAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstanceAttributeRequest * DescribeInstanceAttributeResponse::request() const
{
    Q_D(const DescribeInstanceAttributeResponse);
    return static_cast<const DescribeInstanceAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeInstanceAttribute \a response.
 */
void DescribeInstanceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeInstanceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeInstanceAttributeResponsePrivate
 * \brief The DescribeInstanceAttributeResponsePrivate class provides private implementation for DescribeInstanceAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeInstanceAttributeResponsePrivate object with public implementation \a q.
 */
DescribeInstanceAttributeResponsePrivate::DescribeInstanceAttributeResponsePrivate(
    DescribeInstanceAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeInstanceAttribute response element from \a xml.
 */
void DescribeInstanceAttributeResponsePrivate::parseDescribeInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

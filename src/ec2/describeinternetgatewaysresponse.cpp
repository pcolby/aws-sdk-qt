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

#include "describeinternetgatewaysresponse.h"
#include "describeinternetgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeInternetGatewaysResponse
 * \brief The DescribeInternetGatewaysResponse class provides an interace for EC2 DescribeInternetGateways responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeInternetGateways
 */

/*!
 * Constructs a DescribeInternetGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInternetGatewaysResponse::DescribeInternetGatewaysResponse(
        const DescribeInternetGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeInternetGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeInternetGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInternetGatewaysRequest * DescribeInternetGatewaysResponse::request() const
{
    Q_D(const DescribeInternetGatewaysResponse);
    return static_cast<const DescribeInternetGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeInternetGateways \a response.
 */
void DescribeInternetGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeInternetGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeInternetGatewaysResponsePrivate
 * \brief The DescribeInternetGatewaysResponsePrivate class provides private implementation for DescribeInternetGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeInternetGatewaysResponsePrivate object with public implementation \a q.
 */
DescribeInternetGatewaysResponsePrivate::DescribeInternetGatewaysResponsePrivate(
    DescribeInternetGatewaysResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeInternetGateways response element from \a xml.
 */
void DescribeInternetGatewaysResponsePrivate::parseDescribeInternetGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInternetGatewaysResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

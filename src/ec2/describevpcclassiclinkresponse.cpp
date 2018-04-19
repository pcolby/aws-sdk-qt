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

#include "describevpcclassiclinkresponse.h"
#include "describevpcclassiclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcClassicLinkResponse
 * \brief The DescribeVpcClassicLinkResponse class provides an interace for EC2 DescribeVpcClassicLink responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVpcClassicLink
 */

/*!
 * Constructs a DescribeVpcClassicLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcClassicLinkResponse::DescribeVpcClassicLinkResponse(
        const DescribeVpcClassicLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcClassicLinkResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcClassicLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcClassicLinkRequest * DescribeVpcClassicLinkResponse::request() const
{
    Q_D(const DescribeVpcClassicLinkResponse);
    return static_cast<const DescribeVpcClassicLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcClassicLink \a response.
 */
void DescribeVpcClassicLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcClassicLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcClassicLinkResponsePrivate
 * \brief The DescribeVpcClassicLinkResponsePrivate class provides private implementation for DescribeVpcClassicLinkResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcClassicLinkResponsePrivate object with public implementation \a q.
 */
DescribeVpcClassicLinkResponsePrivate::DescribeVpcClassicLinkResponsePrivate(
    DescribeVpcClassicLinkResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcClassicLink response element from \a xml.
 */
void DescribeVpcClassicLinkResponsePrivate::parseDescribeVpcClassicLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcClassicLinkResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

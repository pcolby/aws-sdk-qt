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

#include "describeimageattributeresponse.h"
#include "describeimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeImageAttributeResponse
 * \brief The DescribeImageAttributeResponse class provides an interace for EC2 DescribeImageAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeImageAttribute
 */

/*!
 * Constructs a DescribeImageAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageAttributeResponse::DescribeImageAttributeResponse(
        const DescribeImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeImageAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeImageAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageAttributeRequest * DescribeImageAttributeResponse::request() const
{
    Q_D(const DescribeImageAttributeResponse);
    return static_cast<const DescribeImageAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeImageAttribute \a response.
 */
void DescribeImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeImageAttributeResponsePrivate
 * \brief The DescribeImageAttributeResponsePrivate class provides private implementation for DescribeImageAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeImageAttributeResponsePrivate object with public implementation \a q.
 */
DescribeImageAttributeResponsePrivate::DescribeImageAttributeResponsePrivate(
    DescribeImageAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeImageAttribute response element from \a xml.
 */
void DescribeImageAttributeResponsePrivate::parseDescribeImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

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

#include "describesecuritygroupreferencesresponse.h"
#include "describesecuritygroupreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeSecurityGroupReferencesResponse
 * \brief The DescribeSecurityGroupReferencesResponse class provides an interace for EC2 DescribeSecurityGroupReferences responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeSecurityGroupReferences
 */

/*!
 * Constructs a DescribeSecurityGroupReferencesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSecurityGroupReferencesResponse::DescribeSecurityGroupReferencesResponse(
        const DescribeSecurityGroupReferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeSecurityGroupReferencesResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityGroupReferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSecurityGroupReferencesRequest * DescribeSecurityGroupReferencesResponse::request() const
{
    Q_D(const DescribeSecurityGroupReferencesResponse);
    return static_cast<const DescribeSecurityGroupReferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeSecurityGroupReferences \a response.
 */
void DescribeSecurityGroupReferencesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSecurityGroupReferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeSecurityGroupReferencesResponsePrivate
 * \brief The DescribeSecurityGroupReferencesResponsePrivate class provides private implementation for DescribeSecurityGroupReferencesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeSecurityGroupReferencesResponsePrivate object with public implementation \a q.
 */
DescribeSecurityGroupReferencesResponsePrivate::DescribeSecurityGroupReferencesResponsePrivate(
    DescribeSecurityGroupReferencesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeSecurityGroupReferences response element from \a xml.
 */
void DescribeSecurityGroupReferencesResponsePrivate::parseDescribeSecurityGroupReferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityGroupReferencesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

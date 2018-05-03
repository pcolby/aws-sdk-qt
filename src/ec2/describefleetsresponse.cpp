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

#include "describefleetsresponse.h"
#include "describefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFleetsResponse
 * \brief The DescribeFleetsResponse class provides an interace for EC2 DescribeFleets responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFleets
 */

/*!
 * Constructs a DescribeFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetsResponse::DescribeFleetsResponse(
        const DescribeFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFleetsResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetsRequest * DescribeFleetsResponse::request() const
{
    Q_D(const DescribeFleetsResponse);
    return static_cast<const DescribeFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFleets \a response.
 */
void DescribeFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFleetsResponsePrivate
 * \brief The DescribeFleetsResponsePrivate class provides private implementation for DescribeFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFleetsResponsePrivate object with public implementation \a q.
 */
DescribeFleetsResponsePrivate::DescribeFleetsResponsePrivate(
    DescribeFleetsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFleets response element from \a xml.
 */
void DescribeFleetsResponsePrivate::parseDescribeFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

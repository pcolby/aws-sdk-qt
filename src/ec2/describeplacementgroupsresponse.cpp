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

#include "describeplacementgroupsresponse.h"
#include "describeplacementgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribePlacementGroupsResponse
 * \brief The DescribePlacementGroupsResponse class provides an interace for EC2 DescribePlacementGroups responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describePlacementGroups
 */

/*!
 * Constructs a DescribePlacementGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePlacementGroupsResponse::DescribePlacementGroupsResponse(
        const DescribePlacementGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribePlacementGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribePlacementGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePlacementGroupsRequest * DescribePlacementGroupsResponse::request() const
{
    Q_D(const DescribePlacementGroupsResponse);
    return static_cast<const DescribePlacementGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribePlacementGroups \a response.
 */
void DescribePlacementGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribePlacementGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribePlacementGroupsResponsePrivate
 * \brief The DescribePlacementGroupsResponsePrivate class provides private implementation for DescribePlacementGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribePlacementGroupsResponsePrivate object with public implementation \a q.
 */
DescribePlacementGroupsResponsePrivate::DescribePlacementGroupsResponsePrivate(
    DescribePlacementGroupsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribePlacementGroups response element from \a xml.
 */
void DescribePlacementGroupsResponsePrivate::parseDescribePlacementGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlacementGroupsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws

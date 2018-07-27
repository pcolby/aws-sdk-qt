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

#include "describeclusterresponse.h"
#include "describeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeClusterResponse
 * \brief The DescribeClusterResponse class provides an interace for Snowball DescribeCluster responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeCluster
 */

/*!
 * Constructs a DescribeClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterResponse::DescribeClusterResponse(
        const DescribeClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeClusterResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterRequest * DescribeClusterResponse::request() const
{
    Q_D(const DescribeClusterResponse);
    return static_cast<const DescribeClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeCluster \a response.
 */
void DescribeClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeClusterResponsePrivate
 * \brief The DescribeClusterResponsePrivate class provides private implementation for DescribeClusterResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeClusterResponsePrivate object with public implementation \a q.
 */
DescribeClusterResponsePrivate::DescribeClusterResponsePrivate(
    DescribeClusterResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeCluster response element from \a xml.
 */
void DescribeClusterResponsePrivate::parseDescribeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws

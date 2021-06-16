/*
    Copyright 2013-2021 Paul Colby

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

#include "describeaccesspointsresponse.h"
#include "describeaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeAccessPointsResponse
 * \brief The DescribeAccessPointsResponse class provides an interace for EFS DescribeAccessPoints responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 *
 * \sa EfsClient::describeAccessPoints
 */

/*!
 * Constructs a DescribeAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccessPointsResponse::DescribeAccessPointsResponse(
        const DescribeAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeAccessPointsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccessPointsRequest * DescribeAccessPointsResponse::request() const
{
    Q_D(const DescribeAccessPointsResponse);
    return static_cast<const DescribeAccessPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EFS DescribeAccessPoints \a response.
 */
void DescribeAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeAccessPointsResponsePrivate
 * \brief The DescribeAccessPointsResponsePrivate class provides private implementation for DescribeAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeAccessPointsResponsePrivate object with public implementation \a q.
 */
DescribeAccessPointsResponsePrivate::DescribeAccessPointsResponsePrivate(
    DescribeAccessPointsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeAccessPoints response element from \a xml.
 */
void DescribeAccessPointsResponsePrivate::parseDescribeAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws

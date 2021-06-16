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

#include "describefilesystemsresponse.h"
#include "describefilesystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeFileSystemsResponse
 * \brief The DescribeFileSystemsResponse class provides an interace for EFS DescribeFileSystems responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::describeFileSystems
 */

/*!
 * Constructs a DescribeFileSystemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemsResponse::DescribeFileSystemsResponse(
        const DescribeFileSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeFileSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemsRequest * DescribeFileSystemsResponse::request() const
{
    Q_D(const DescribeFileSystemsResponse);
    return static_cast<const DescribeFileSystemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EFS DescribeFileSystems \a response.
 */
void DescribeFileSystemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeFileSystemsResponsePrivate
 * \brief The DescribeFileSystemsResponsePrivate class provides private implementation for DescribeFileSystemsResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeFileSystemsResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponsePrivate(
    DescribeFileSystemsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeFileSystems response element from \a xml.
 */
void DescribeFileSystemsResponsePrivate::parseDescribeFileSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws

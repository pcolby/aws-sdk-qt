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

#include "describelocationfsxwindowsresponse.h"
#include "describelocationfsxwindowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxWindowsResponse
 * \brief The DescribeLocationFsxWindowsResponse class provides an interace for DataSync DescribeLocationFsxWindows responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::describeLocationFsxWindows
 */

/*!
 * Constructs a DescribeLocationFsxWindowsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationFsxWindowsResponse::DescribeLocationFsxWindowsResponse(
        const DescribeLocationFsxWindowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationFsxWindowsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationFsxWindowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationFsxWindowsRequest * DescribeLocationFsxWindowsResponse::request() const
{
    Q_D(const DescribeLocationFsxWindowsResponse);
    return static_cast<const DescribeLocationFsxWindowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationFsxWindows \a response.
 */
void DescribeLocationFsxWindowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationFsxWindowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxWindowsResponsePrivate
 * \brief The DescribeLocationFsxWindowsResponsePrivate class provides private implementation for DescribeLocationFsxWindowsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxWindowsResponsePrivate object with public implementation \a q.
 */
DescribeLocationFsxWindowsResponsePrivate::DescribeLocationFsxWindowsResponsePrivate(
    DescribeLocationFsxWindowsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationFsxWindows response element from \a xml.
 */
void DescribeLocationFsxWindowsResponsePrivate::parseDescribeLocationFsxWindowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationFsxWindowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

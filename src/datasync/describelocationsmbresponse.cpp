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

#include "describelocationsmbresponse.h"
#include "describelocationsmbresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationSmbResponse
 * \brief The DescribeLocationSmbResponse class provides an interace for DataSync DescribeLocationSmb responses.
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
 * \sa DataSyncClient::describeLocationSmb
 */

/*!
 * Constructs a DescribeLocationSmbResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationSmbResponse::DescribeLocationSmbResponse(
        const DescribeLocationSmbRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationSmbResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationSmbRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationSmbRequest * DescribeLocationSmbResponse::request() const
{
    Q_D(const DescribeLocationSmbResponse);
    return static_cast<const DescribeLocationSmbRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationSmb \a response.
 */
void DescribeLocationSmbResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationSmbResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationSmbResponsePrivate
 * \brief The DescribeLocationSmbResponsePrivate class provides private implementation for DescribeLocationSmbResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationSmbResponsePrivate object with public implementation \a q.
 */
DescribeLocationSmbResponsePrivate::DescribeLocationSmbResponsePrivate(
    DescribeLocationSmbResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationSmb response element from \a xml.
 */
void DescribeLocationSmbResponsePrivate::parseDescribeLocationSmbResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationSmbResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

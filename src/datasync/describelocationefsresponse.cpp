/*
    Copyright 2013-2020 Paul Colby

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

#include "describelocationefsresponse.h"
#include "describelocationefsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationEfsResponse
 * \brief The DescribeLocationEfsResponse class provides an interace for DataSync DescribeLocationEfs responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::describeLocationEfs
 */

/*!
 * Constructs a DescribeLocationEfsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationEfsResponse::DescribeLocationEfsResponse(
        const DescribeLocationEfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationEfsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationEfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationEfsRequest * DescribeLocationEfsResponse::request() const
{
    Q_D(const DescribeLocationEfsResponse);
    return static_cast<const DescribeLocationEfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationEfs \a response.
 */
void DescribeLocationEfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationEfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationEfsResponsePrivate
 * \brief The DescribeLocationEfsResponsePrivate class provides private implementation for DescribeLocationEfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationEfsResponsePrivate object with public implementation \a q.
 */
DescribeLocationEfsResponsePrivate::DescribeLocationEfsResponsePrivate(
    DescribeLocationEfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationEfs response element from \a xml.
 */
void DescribeLocationEfsResponsePrivate::parseDescribeLocationEfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationEfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

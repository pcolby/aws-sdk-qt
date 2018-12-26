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

#include "describelocations3response.h"
#include "describelocations3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationS3Response
 * \brief The DescribeLocationS3Response class provides an interace for DataSync DescribeLocationS3 responses.
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
 * \sa DataSyncClient::describeLocationS3
 */

/*!
 * Constructs a DescribeLocationS3Response object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationS3Response::DescribeLocationS3Response(
        const DescribeLocationS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationS3ResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationS3Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationS3Request * DescribeLocationS3Response::request() const
{
    Q_D(const DescribeLocationS3Response);
    return static_cast<const DescribeLocationS3Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationS3 \a response.
 */
void DescribeLocationS3Response::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationS3ResponsePrivate
 * \brief The DescribeLocationS3ResponsePrivate class provides private implementation for DescribeLocationS3Response.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationS3ResponsePrivate object with public implementation \a q.
 */
DescribeLocationS3ResponsePrivate::DescribeLocationS3ResponsePrivate(
    DescribeLocationS3Response * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationS3 response element from \a xml.
 */
void DescribeLocationS3ResponsePrivate::parseDescribeLocationS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationS3Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

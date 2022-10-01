// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
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

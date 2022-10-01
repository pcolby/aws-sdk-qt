// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationhdfsresponse.h"
#include "describelocationhdfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationHdfsResponse
 * \brief The DescribeLocationHdfsResponse class provides an interace for DataSync DescribeLocationHdfs responses.
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
 * \sa DataSyncClient::describeLocationHdfs
 */

/*!
 * Constructs a DescribeLocationHdfsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationHdfsResponse::DescribeLocationHdfsResponse(
        const DescribeLocationHdfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationHdfsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationHdfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationHdfsRequest * DescribeLocationHdfsResponse::request() const
{
    Q_D(const DescribeLocationHdfsResponse);
    return static_cast<const DescribeLocationHdfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationHdfs \a response.
 */
void DescribeLocationHdfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationHdfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationHdfsResponsePrivate
 * \brief The DescribeLocationHdfsResponsePrivate class provides private implementation for DescribeLocationHdfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationHdfsResponsePrivate object with public implementation \a q.
 */
DescribeLocationHdfsResponsePrivate::DescribeLocationHdfsResponsePrivate(
    DescribeLocationHdfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationHdfs response element from \a xml.
 */
void DescribeLocationHdfsResponsePrivate::parseDescribeLocationHdfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationHdfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

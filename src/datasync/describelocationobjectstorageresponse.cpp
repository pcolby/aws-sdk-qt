// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationobjectstorageresponse.h"
#include "describelocationobjectstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationObjectStorageResponse
 * \brief The DescribeLocationObjectStorageResponse class provides an interace for DataSync DescribeLocationObjectStorage responses.
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
 * \sa DataSyncClient::describeLocationObjectStorage
 */

/*!
 * Constructs a DescribeLocationObjectStorageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationObjectStorageResponse::DescribeLocationObjectStorageResponse(
        const DescribeLocationObjectStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationObjectStorageResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationObjectStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationObjectStorageRequest * DescribeLocationObjectStorageResponse::request() const
{
    Q_D(const DescribeLocationObjectStorageResponse);
    return static_cast<const DescribeLocationObjectStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationObjectStorage \a response.
 */
void DescribeLocationObjectStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationObjectStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationObjectStorageResponsePrivate
 * \brief The DescribeLocationObjectStorageResponsePrivate class provides private implementation for DescribeLocationObjectStorageResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationObjectStorageResponsePrivate object with public implementation \a q.
 */
DescribeLocationObjectStorageResponsePrivate::DescribeLocationObjectStorageResponsePrivate(
    DescribeLocationObjectStorageResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationObjectStorage response element from \a xml.
 */
void DescribeLocationObjectStorageResponsePrivate::parseDescribeLocationObjectStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationObjectStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

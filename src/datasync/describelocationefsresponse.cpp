// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
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

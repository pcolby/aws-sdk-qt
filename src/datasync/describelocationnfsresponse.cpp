// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationnfsresponse.h"
#include "describelocationnfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationNfsResponse
 * \brief The DescribeLocationNfsResponse class provides an interace for DataSync DescribeLocationNfs responses.
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
 * \sa DataSyncClient::describeLocationNfs
 */

/*!
 * Constructs a DescribeLocationNfsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationNfsResponse::DescribeLocationNfsResponse(
        const DescribeLocationNfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationNfsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationNfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationNfsRequest * DescribeLocationNfsResponse::request() const
{
    Q_D(const DescribeLocationNfsResponse);
    return static_cast<const DescribeLocationNfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationNfs \a response.
 */
void DescribeLocationNfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationNfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationNfsResponsePrivate
 * \brief The DescribeLocationNfsResponsePrivate class provides private implementation for DescribeLocationNfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationNfsResponsePrivate object with public implementation \a q.
 */
DescribeLocationNfsResponsePrivate::DescribeLocationNfsResponsePrivate(
    DescribeLocationNfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationNfs response element from \a xml.
 */
void DescribeLocationNfsResponsePrivate::parseDescribeLocationNfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationNfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

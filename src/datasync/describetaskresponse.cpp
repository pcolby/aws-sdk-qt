// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetaskresponse.h"
#include "describetaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeTaskResponse
 * \brief The DescribeTaskResponse class provides an interace for DataSync DescribeTask responses.
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
 * \sa DataSyncClient::describeTask
 */

/*!
 * Constructs a DescribeTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTaskResponse::DescribeTaskResponse(
        const DescribeTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTaskRequest * DescribeTaskResponse::request() const
{
    Q_D(const DescribeTaskResponse);
    return static_cast<const DescribeTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeTask \a response.
 */
void DescribeTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeTaskResponsePrivate
 * \brief The DescribeTaskResponsePrivate class provides private implementation for DescribeTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeTaskResponsePrivate object with public implementation \a q.
 */
DescribeTaskResponsePrivate::DescribeTaskResponsePrivate(
    DescribeTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeTask response element from \a xml.
 */
void DescribeTaskResponsePrivate::parseDescribeTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

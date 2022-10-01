// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationfsxlustreresponse.h"
#include "describelocationfsxlustreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxLustreResponse
 * \brief The DescribeLocationFsxLustreResponse class provides an interace for DataSync DescribeLocationFsxLustre responses.
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
 * \sa DataSyncClient::describeLocationFsxLustre
 */

/*!
 * Constructs a DescribeLocationFsxLustreResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationFsxLustreResponse::DescribeLocationFsxLustreResponse(
        const DescribeLocationFsxLustreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationFsxLustreResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationFsxLustreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationFsxLustreRequest * DescribeLocationFsxLustreResponse::request() const
{
    Q_D(const DescribeLocationFsxLustreResponse);
    return static_cast<const DescribeLocationFsxLustreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationFsxLustre \a response.
 */
void DescribeLocationFsxLustreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationFsxLustreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxLustreResponsePrivate
 * \brief The DescribeLocationFsxLustreResponsePrivate class provides private implementation for DescribeLocationFsxLustreResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxLustreResponsePrivate object with public implementation \a q.
 */
DescribeLocationFsxLustreResponsePrivate::DescribeLocationFsxLustreResponsePrivate(
    DescribeLocationFsxLustreResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationFsxLustre response element from \a xml.
 */
void DescribeLocationFsxLustreResponsePrivate::parseDescribeLocationFsxLustreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationFsxLustreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

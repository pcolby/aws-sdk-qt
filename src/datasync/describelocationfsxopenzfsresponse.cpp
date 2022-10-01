// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationfsxopenzfsresponse.h"
#include "describelocationfsxopenzfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOpenZfsResponse
 * \brief The DescribeLocationFsxOpenZfsResponse class provides an interace for DataSync DescribeLocationFsxOpenZfs responses.
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
 * \sa DataSyncClient::describeLocationFsxOpenZfs
 */

/*!
 * Constructs a DescribeLocationFsxOpenZfsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationFsxOpenZfsResponse::DescribeLocationFsxOpenZfsResponse(
        const DescribeLocationFsxOpenZfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationFsxOpenZfsResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationFsxOpenZfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationFsxOpenZfsRequest * DescribeLocationFsxOpenZfsResponse::request() const
{
    Q_D(const DescribeLocationFsxOpenZfsResponse);
    return static_cast<const DescribeLocationFsxOpenZfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationFsxOpenZfs \a response.
 */
void DescribeLocationFsxOpenZfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationFsxOpenZfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOpenZfsResponsePrivate
 * \brief The DescribeLocationFsxOpenZfsResponsePrivate class provides private implementation for DescribeLocationFsxOpenZfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxOpenZfsResponsePrivate object with public implementation \a q.
 */
DescribeLocationFsxOpenZfsResponsePrivate::DescribeLocationFsxOpenZfsResponsePrivate(
    DescribeLocationFsxOpenZfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationFsxOpenZfs response element from \a xml.
 */
void DescribeLocationFsxOpenZfsResponsePrivate::parseDescribeLocationFsxOpenZfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationFsxOpenZfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

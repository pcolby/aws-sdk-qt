// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationfsxontapresponse.h"
#include "describelocationfsxontapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOntapResponse
 * \brief The DescribeLocationFsxOntapResponse class provides an interace for DataSync DescribeLocationFsxOntap responses.
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
 * \sa DataSyncClient::describeLocationFsxOntap
 */

/*!
 * Constructs a DescribeLocationFsxOntapResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLocationFsxOntapResponse::DescribeLocationFsxOntapResponse(
        const DescribeLocationFsxOntapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DescribeLocationFsxOntapResponsePrivate(this), parent)
{
    setRequest(new DescribeLocationFsxOntapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLocationFsxOntapRequest * DescribeLocationFsxOntapResponse::request() const
{
    Q_D(const DescribeLocationFsxOntapResponse);
    return static_cast<const DescribeLocationFsxOntapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DescribeLocationFsxOntap \a response.
 */
void DescribeLocationFsxOntapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLocationFsxOntapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOntapResponsePrivate
 * \brief The DescribeLocationFsxOntapResponsePrivate class provides private implementation for DescribeLocationFsxOntapResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxOntapResponsePrivate object with public implementation \a q.
 */
DescribeLocationFsxOntapResponsePrivate::DescribeLocationFsxOntapResponsePrivate(
    DescribeLocationFsxOntapResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DescribeLocationFsxOntap response element from \a xml.
 */
void DescribeLocationFsxOntapResponsePrivate::parseDescribeLocationFsxOntapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLocationFsxOntapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

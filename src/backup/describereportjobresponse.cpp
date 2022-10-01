// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportjobresponse.h"
#include "describereportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportJobResponse
 * \brief The DescribeReportJobResponse class provides an interace for Backup DescribeReportJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportJob
 */

/*!
 * Constructs a DescribeReportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportJobResponse::DescribeReportJobResponse(
        const DescribeReportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeReportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeReportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReportJobRequest * DescribeReportJobResponse::request() const
{
    Q_D(const DescribeReportJobResponse);
    return static_cast<const DescribeReportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeReportJob \a response.
 */
void DescribeReportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeReportJobResponsePrivate
 * \brief The DescribeReportJobResponsePrivate class provides private implementation for DescribeReportJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportJobResponsePrivate object with public implementation \a q.
 */
DescribeReportJobResponsePrivate::DescribeReportJobResponsePrivate(
    DescribeReportJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeReportJob response element from \a xml.
 */
void DescribeReportJobResponsePrivate::parseDescribeReportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

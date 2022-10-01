// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportjobsresponse.h"
#include "listreportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportJobsResponse
 * \brief The ListReportJobsResponse class provides an interace for Backup ListReportJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportJobs
 */

/*!
 * Constructs a ListReportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportJobsResponse::ListReportJobsResponse(
        const ListReportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListReportJobsResponsePrivate(this), parent)
{
    setRequest(new ListReportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportJobsRequest * ListReportJobsResponse::request() const
{
    Q_D(const ListReportJobsResponse);
    return static_cast<const ListReportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListReportJobs \a response.
 */
void ListReportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListReportJobsResponsePrivate
 * \brief The ListReportJobsResponsePrivate class provides private implementation for ListReportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportJobsResponsePrivate object with public implementation \a q.
 */
ListReportJobsResponsePrivate::ListReportJobsResponsePrivate(
    ListReportJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListReportJobs response element from \a xml.
 */
void ListReportJobsResponsePrivate::parseListReportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

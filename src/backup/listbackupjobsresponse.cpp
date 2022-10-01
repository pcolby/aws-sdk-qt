// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupjobsresponse.h"
#include "listbackupjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupJobsResponse
 * \brief The ListBackupJobsResponse class provides an interace for Backup ListBackupJobs responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupJobs
 */

/*!
 * Constructs a ListBackupJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupJobsResponse::ListBackupJobsResponse(
        const ListBackupJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupJobsResponsePrivate(this), parent)
{
    setRequest(new ListBackupJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupJobsRequest * ListBackupJobsResponse::request() const
{
    Q_D(const ListBackupJobsResponse);
    return static_cast<const ListBackupJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupJobs \a response.
 */
void ListBackupJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupJobsResponsePrivate
 * \brief The ListBackupJobsResponsePrivate class provides private implementation for ListBackupJobsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupJobsResponsePrivate object with public implementation \a q.
 */
ListBackupJobsResponsePrivate::ListBackupJobsResponsePrivate(
    ListBackupJobsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupJobs response element from \a xml.
 */
void ListBackupJobsResponsePrivate::parseListBackupJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

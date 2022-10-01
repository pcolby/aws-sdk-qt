// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbackupjobresponse.h"
#include "stopbackupjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StopBackupJobResponse
 * \brief The StopBackupJobResponse class provides an interace for Backup StopBackupJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::stopBackupJob
 */

/*!
 * Constructs a StopBackupJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopBackupJobResponse::StopBackupJobResponse(
        const StopBackupJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StopBackupJobResponsePrivate(this), parent)
{
    setRequest(new StopBackupJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBackupJobRequest * StopBackupJobResponse::request() const
{
    Q_D(const StopBackupJobResponse);
    return static_cast<const StopBackupJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StopBackupJob \a response.
 */
void StopBackupJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBackupJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StopBackupJobResponsePrivate
 * \brief The StopBackupJobResponsePrivate class provides private implementation for StopBackupJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StopBackupJobResponsePrivate object with public implementation \a q.
 */
StopBackupJobResponsePrivate::StopBackupJobResponsePrivate(
    StopBackupJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StopBackupJob response element from \a xml.
 */
void StopBackupJobResponsePrivate::parseStopBackupJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBackupJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

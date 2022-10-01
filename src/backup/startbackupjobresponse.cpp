// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbackupjobresponse.h"
#include "startbackupjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartBackupJobResponse
 * \brief The StartBackupJobResponse class provides an interace for Backup StartBackupJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startBackupJob
 */

/*!
 * Constructs a StartBackupJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartBackupJobResponse::StartBackupJobResponse(
        const StartBackupJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new StartBackupJobResponsePrivate(this), parent)
{
    setRequest(new StartBackupJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBackupJobRequest * StartBackupJobResponse::request() const
{
    Q_D(const StartBackupJobResponse);
    return static_cast<const StartBackupJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup StartBackupJob \a response.
 */
void StartBackupJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBackupJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::StartBackupJobResponsePrivate
 * \brief The StartBackupJobResponsePrivate class provides private implementation for StartBackupJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartBackupJobResponsePrivate object with public implementation \a q.
 */
StartBackupJobResponsePrivate::StartBackupJobResponsePrivate(
    StartBackupJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup StartBackupJob response element from \a xml.
 */
void StartBackupJobResponsePrivate::parseStartBackupJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBackupJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

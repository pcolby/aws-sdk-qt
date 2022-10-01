/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

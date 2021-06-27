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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    return static_cast<const StopBackupJobRequest *>(BackupResponse::request());
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

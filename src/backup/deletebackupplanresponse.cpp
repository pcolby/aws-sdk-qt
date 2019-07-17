/*
    Copyright 2013-2019 Paul Colby

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

#include "deletebackupplanresponse.h"
#include "deletebackupplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupPlanResponse
 * \brief The DeleteBackupPlanResponse class provides an interace for Backup DeleteBackupPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupPlan
 */

/*!
 * Constructs a DeleteBackupPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupPlanResponse::DeleteBackupPlanResponse(
        const DeleteBackupPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupPlanRequest * DeleteBackupPlanResponse::request() const
{
    Q_D(const DeleteBackupPlanResponse);
    return static_cast<const DeleteBackupPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupPlan \a response.
 */
void DeleteBackupPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupPlanResponsePrivate
 * \brief The DeleteBackupPlanResponsePrivate class provides private implementation for DeleteBackupPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupPlanResponsePrivate object with public implementation \a q.
 */
DeleteBackupPlanResponsePrivate::DeleteBackupPlanResponsePrivate(
    DeleteBackupPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupPlan response element from \a xml.
 */
void DeleteBackupPlanResponsePrivate::parseDeleteBackupPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

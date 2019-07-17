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

#include "updatebackupplanresponse.h"
#include "updatebackupplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateBackupPlanResponse
 * \brief The UpdateBackupPlanResponse class provides an interace for Backup UpdateBackupPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateBackupPlan
 */

/*!
 * Constructs a UpdateBackupPlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackupPlanResponse::UpdateBackupPlanResponse(
        const UpdateBackupPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateBackupPlanResponsePrivate(this), parent)
{
    setRequest(new UpdateBackupPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackupPlanRequest * UpdateBackupPlanResponse::request() const
{
    Q_D(const UpdateBackupPlanResponse);
    return static_cast<const UpdateBackupPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateBackupPlan \a response.
 */
void UpdateBackupPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackupPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateBackupPlanResponsePrivate
 * \brief The UpdateBackupPlanResponsePrivate class provides private implementation for UpdateBackupPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateBackupPlanResponsePrivate object with public implementation \a q.
 */
UpdateBackupPlanResponsePrivate::UpdateBackupPlanResponsePrivate(
    UpdateBackupPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateBackupPlan response element from \a xml.
 */
void UpdateBackupPlanResponsePrivate::parseUpdateBackupPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackupPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

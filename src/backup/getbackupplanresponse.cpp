/*
    Copyright 2013-2020 Paul Colby

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

#include "getbackupplanresponse.h"
#include "getbackupplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanResponse
 * \brief The GetBackupPlanResponse class provides an interace for Backup GetBackupPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlan
 */

/*!
 * Constructs a GetBackupPlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupPlanResponse::GetBackupPlanResponse(
        const GetBackupPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupPlanResponsePrivate(this), parent)
{
    setRequest(new GetBackupPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupPlanRequest * GetBackupPlanResponse::request() const
{
    Q_D(const GetBackupPlanResponse);
    return static_cast<const GetBackupPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupPlan \a response.
 */
void GetBackupPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupPlanResponsePrivate
 * \brief The GetBackupPlanResponsePrivate class provides private implementation for GetBackupPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanResponsePrivate object with public implementation \a q.
 */
GetBackupPlanResponsePrivate::GetBackupPlanResponsePrivate(
    GetBackupPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupPlan response element from \a xml.
 */
void GetBackupPlanResponsePrivate::parseGetBackupPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

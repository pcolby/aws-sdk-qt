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

#include "createbackupplanresponse.h"
#include "createbackupplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupPlanResponse
 * \brief The CreateBackupPlanResponse class provides an interace for Backup CreateBackupPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupPlan
 */

/*!
 * Constructs a CreateBackupPlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackupPlanResponse::CreateBackupPlanResponse(
        const CreateBackupPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateBackupPlanResponsePrivate(this), parent)
{
    setRequest(new CreateBackupPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackupPlanRequest * CreateBackupPlanResponse::request() const
{
    Q_D(const CreateBackupPlanResponse);
    return static_cast<const CreateBackupPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup CreateBackupPlan \a response.
 */
void CreateBackupPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackupPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateBackupPlanResponsePrivate
 * \brief The CreateBackupPlanResponsePrivate class provides private implementation for CreateBackupPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupPlanResponsePrivate object with public implementation \a q.
 */
CreateBackupPlanResponsePrivate::CreateBackupPlanResponsePrivate(
    CreateBackupPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateBackupPlan response element from \a xml.
 */
void CreateBackupPlanResponsePrivate::parseCreateBackupPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackupPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

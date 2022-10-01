// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

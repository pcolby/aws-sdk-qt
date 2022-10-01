// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

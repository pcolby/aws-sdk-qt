// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupplanfromjsonresponse.h"
#include "getbackupplanfromjsonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONResponse
 * \brief The GetBackupPlanFromJSONResponse class provides an interace for Backup GetBackupPlanFromJSON responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlanFromJSON
 */

/*!
 * Constructs a GetBackupPlanFromJSONResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupPlanFromJSONResponse::GetBackupPlanFromJSONResponse(
        const GetBackupPlanFromJSONRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupPlanFromJSONResponsePrivate(this), parent)
{
    setRequest(new GetBackupPlanFromJSONRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupPlanFromJSONRequest * GetBackupPlanFromJSONResponse::request() const
{
    Q_D(const GetBackupPlanFromJSONResponse);
    return static_cast<const GetBackupPlanFromJSONRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupPlanFromJSON \a response.
 */
void GetBackupPlanFromJSONResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupPlanFromJSONResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONResponsePrivate
 * \brief The GetBackupPlanFromJSONResponsePrivate class provides private implementation for GetBackupPlanFromJSONResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanFromJSONResponsePrivate object with public implementation \a q.
 */
GetBackupPlanFromJSONResponsePrivate::GetBackupPlanFromJSONResponsePrivate(
    GetBackupPlanFromJSONResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupPlanFromJSON response element from \a xml.
 */
void GetBackupPlanFromJSONResponsePrivate::parseGetBackupPlanFromJSONResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupPlanFromJSONResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

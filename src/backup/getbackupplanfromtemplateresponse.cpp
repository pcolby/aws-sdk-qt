// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupplanfromtemplateresponse.h"
#include "getbackupplanfromtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanFromTemplateResponse
 * \brief The GetBackupPlanFromTemplateResponse class provides an interace for Backup GetBackupPlanFromTemplate responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlanFromTemplate
 */

/*!
 * Constructs a GetBackupPlanFromTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupPlanFromTemplateResponse::GetBackupPlanFromTemplateResponse(
        const GetBackupPlanFromTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupPlanFromTemplateResponsePrivate(this), parent)
{
    setRequest(new GetBackupPlanFromTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupPlanFromTemplateRequest * GetBackupPlanFromTemplateResponse::request() const
{
    Q_D(const GetBackupPlanFromTemplateResponse);
    return static_cast<const GetBackupPlanFromTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupPlanFromTemplate \a response.
 */
void GetBackupPlanFromTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupPlanFromTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupPlanFromTemplateResponsePrivate
 * \brief The GetBackupPlanFromTemplateResponsePrivate class provides private implementation for GetBackupPlanFromTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanFromTemplateResponsePrivate object with public implementation \a q.
 */
GetBackupPlanFromTemplateResponsePrivate::GetBackupPlanFromTemplateResponsePrivate(
    GetBackupPlanFromTemplateResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupPlanFromTemplate response element from \a xml.
 */
void GetBackupPlanFromTemplateResponsePrivate::parseGetBackupPlanFromTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupPlanFromTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

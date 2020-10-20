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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

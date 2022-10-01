/*
    Copyright 2013-2021 Paul Colby

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

#include "exportbackupplantemplateresponse.h"
#include "exportbackupplantemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ExportBackupPlanTemplateResponse
 * \brief The ExportBackupPlanTemplateResponse class provides an interace for Backup ExportBackupPlanTemplate responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::exportBackupPlanTemplate
 */

/*!
 * Constructs a ExportBackupPlanTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
ExportBackupPlanTemplateResponse::ExportBackupPlanTemplateResponse(
        const ExportBackupPlanTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ExportBackupPlanTemplateResponsePrivate(this), parent)
{
    setRequest(new ExportBackupPlanTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportBackupPlanTemplateRequest * ExportBackupPlanTemplateResponse::request() const
{
    Q_D(const ExportBackupPlanTemplateResponse);
    return static_cast<const ExportBackupPlanTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ExportBackupPlanTemplate \a response.
 */
void ExportBackupPlanTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportBackupPlanTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ExportBackupPlanTemplateResponsePrivate
 * \brief The ExportBackupPlanTemplateResponsePrivate class provides private implementation for ExportBackupPlanTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ExportBackupPlanTemplateResponsePrivate object with public implementation \a q.
 */
ExportBackupPlanTemplateResponsePrivate::ExportBackupPlanTemplateResponsePrivate(
    ExportBackupPlanTemplateResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ExportBackupPlanTemplate response element from \a xml.
 */
void ExportBackupPlanTemplateResponsePrivate::parseExportBackupPlanTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportBackupPlanTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

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

#include "listbackupplantemplatesresponse.h"
#include "listbackupplantemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesResponse
 * \brief The ListBackupPlanTemplatesResponse class provides an interace for Backup ListBackupPlanTemplates responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanTemplates
 */

/*!
 * Constructs a ListBackupPlanTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupPlanTemplatesResponse::ListBackupPlanTemplatesResponse(
        const ListBackupPlanTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupPlanTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListBackupPlanTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupPlanTemplatesRequest * ListBackupPlanTemplatesResponse::request() const
{
    Q_D(const ListBackupPlanTemplatesResponse);
    return static_cast<const ListBackupPlanTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupPlanTemplates \a response.
 */
void ListBackupPlanTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupPlanTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupPlanTemplatesResponsePrivate
 * \brief The ListBackupPlanTemplatesResponsePrivate class provides private implementation for ListBackupPlanTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanTemplatesResponsePrivate object with public implementation \a q.
 */
ListBackupPlanTemplatesResponsePrivate::ListBackupPlanTemplatesResponsePrivate(
    ListBackupPlanTemplatesResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupPlanTemplates response element from \a xml.
 */
void ListBackupPlanTemplatesResponsePrivate::parseListBackupPlanTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupPlanTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

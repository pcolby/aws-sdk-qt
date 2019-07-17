/*
    Copyright 2013-2019 Paul Colby

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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

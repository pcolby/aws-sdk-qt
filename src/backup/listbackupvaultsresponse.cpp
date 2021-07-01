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

#include "listbackupvaultsresponse.h"
#include "listbackupvaultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupVaultsResponse
 * \brief The ListBackupVaultsResponse class provides an interace for Backup ListBackupVaults responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupVaults
 */

/*!
 * Constructs a ListBackupVaultsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupVaultsResponse::ListBackupVaultsResponse(
        const ListBackupVaultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupVaultsResponsePrivate(this), parent)
{
    setRequest(new ListBackupVaultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupVaultsRequest * ListBackupVaultsResponse::request() const
{
    Q_D(const ListBackupVaultsResponse);
    return static_cast<const ListBackupVaultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupVaults \a response.
 */
void ListBackupVaultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupVaultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupVaultsResponsePrivate
 * \brief The ListBackupVaultsResponsePrivate class provides private implementation for ListBackupVaultsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupVaultsResponsePrivate object with public implementation \a q.
 */
ListBackupVaultsResponsePrivate::ListBackupVaultsResponsePrivate(
    ListBackupVaultsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupVaults response element from \a xml.
 */
void ListBackupVaultsResponsePrivate::parseListBackupVaultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupVaultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

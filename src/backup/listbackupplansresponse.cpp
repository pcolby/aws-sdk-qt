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

#include "listbackupplansresponse.h"
#include "listbackupplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlansResponse
 * \brief The ListBackupPlansResponse class provides an interace for Backup ListBackupPlans responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlans
 */

/*!
 * Constructs a ListBackupPlansResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupPlansResponse::ListBackupPlansResponse(
        const ListBackupPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupPlansResponsePrivate(this), parent)
{
    setRequest(new ListBackupPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupPlansRequest * ListBackupPlansResponse::request() const
{
    Q_D(const ListBackupPlansResponse);
    return static_cast<const ListBackupPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupPlans \a response.
 */
void ListBackupPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupPlansResponsePrivate
 * \brief The ListBackupPlansResponsePrivate class provides private implementation for ListBackupPlansResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlansResponsePrivate object with public implementation \a q.
 */
ListBackupPlansResponsePrivate::ListBackupPlansResponsePrivate(
    ListBackupPlansResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupPlans response element from \a xml.
 */
void ListBackupPlansResponsePrivate::parseListBackupPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

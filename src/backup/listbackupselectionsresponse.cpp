// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupselectionsresponse.h"
#include "listbackupselectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupSelectionsResponse
 * \brief The ListBackupSelectionsResponse class provides an interace for Backup ListBackupSelections responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupSelections
 */

/*!
 * Constructs a ListBackupSelectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupSelectionsResponse::ListBackupSelectionsResponse(
        const ListBackupSelectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupSelectionsResponsePrivate(this), parent)
{
    setRequest(new ListBackupSelectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupSelectionsRequest * ListBackupSelectionsResponse::request() const
{
    Q_D(const ListBackupSelectionsResponse);
    return static_cast<const ListBackupSelectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupSelections \a response.
 */
void ListBackupSelectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupSelectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupSelectionsResponsePrivate
 * \brief The ListBackupSelectionsResponsePrivate class provides private implementation for ListBackupSelectionsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupSelectionsResponsePrivate object with public implementation \a q.
 */
ListBackupSelectionsResponsePrivate::ListBackupSelectionsResponsePrivate(
    ListBackupSelectionsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupSelections response element from \a xml.
 */
void ListBackupSelectionsResponsePrivate::parseListBackupSelectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupSelectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

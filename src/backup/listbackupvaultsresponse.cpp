// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

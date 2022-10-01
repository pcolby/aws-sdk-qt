// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupplanversionsresponse.h"
#include "listbackupplanversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsResponse
 * \brief The ListBackupPlanVersionsResponse class provides an interace for Backup ListBackupPlanVersions responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanVersions
 */

/*!
 * Constructs a ListBackupPlanVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBackupPlanVersionsResponse::ListBackupPlanVersionsResponse(
        const ListBackupPlanVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListBackupPlanVersionsResponsePrivate(this), parent)
{
    setRequest(new ListBackupPlanVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBackupPlanVersionsRequest * ListBackupPlanVersionsResponse::request() const
{
    Q_D(const ListBackupPlanVersionsResponse);
    return static_cast<const ListBackupPlanVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListBackupPlanVersions \a response.
 */
void ListBackupPlanVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBackupPlanVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsResponsePrivate
 * \brief The ListBackupPlanVersionsResponsePrivate class provides private implementation for ListBackupPlanVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanVersionsResponsePrivate object with public implementation \a q.
 */
ListBackupPlanVersionsResponsePrivate::ListBackupPlanVersionsResponsePrivate(
    ListBackupPlanVersionsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListBackupPlanVersions response element from \a xml.
 */
void ListBackupPlanVersionsResponsePrivate::parseListBackupPlanVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBackupPlanVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

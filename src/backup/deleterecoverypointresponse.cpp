// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecoverypointresponse.h"
#include "deleterecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteRecoveryPointResponse
 * \brief The DeleteRecoveryPointResponse class provides an interace for Backup DeleteRecoveryPoint responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteRecoveryPoint
 */

/*!
 * Constructs a DeleteRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecoveryPointResponse::DeleteRecoveryPointResponse(
        const DeleteRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new DeleteRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecoveryPointRequest * DeleteRecoveryPointResponse::request() const
{
    Q_D(const DeleteRecoveryPointResponse);
    return static_cast<const DeleteRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteRecoveryPoint \a response.
 */
void DeleteRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteRecoveryPointResponsePrivate
 * \brief The DeleteRecoveryPointResponsePrivate class provides private implementation for DeleteRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteRecoveryPointResponsePrivate object with public implementation \a q.
 */
DeleteRecoveryPointResponsePrivate::DeleteRecoveryPointResponsePrivate(
    DeleteRecoveryPointResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteRecoveryPoint response element from \a xml.
 */
void DeleteRecoveryPointResponsePrivate::parseDeleteRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

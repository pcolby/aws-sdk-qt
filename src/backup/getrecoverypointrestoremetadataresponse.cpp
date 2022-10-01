// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecoverypointrestoremetadataresponse.h"
#include "getrecoverypointrestoremetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetRecoveryPointRestoreMetadataResponse
 * \brief The GetRecoveryPointRestoreMetadataResponse class provides an interace for Backup GetRecoveryPointRestoreMetadata responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getRecoveryPointRestoreMetadata
 */

/*!
 * Constructs a GetRecoveryPointRestoreMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecoveryPointRestoreMetadataResponse::GetRecoveryPointRestoreMetadataResponse(
        const GetRecoveryPointRestoreMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetRecoveryPointRestoreMetadataResponsePrivate(this), parent)
{
    setRequest(new GetRecoveryPointRestoreMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecoveryPointRestoreMetadataRequest * GetRecoveryPointRestoreMetadataResponse::request() const
{
    Q_D(const GetRecoveryPointRestoreMetadataResponse);
    return static_cast<const GetRecoveryPointRestoreMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetRecoveryPointRestoreMetadata \a response.
 */
void GetRecoveryPointRestoreMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecoveryPointRestoreMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetRecoveryPointRestoreMetadataResponsePrivate
 * \brief The GetRecoveryPointRestoreMetadataResponsePrivate class provides private implementation for GetRecoveryPointRestoreMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetRecoveryPointRestoreMetadataResponsePrivate object with public implementation \a q.
 */
GetRecoveryPointRestoreMetadataResponsePrivate::GetRecoveryPointRestoreMetadataResponsePrivate(
    GetRecoveryPointRestoreMetadataResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetRecoveryPointRestoreMetadata response element from \a xml.
 */
void GetRecoveryPointRestoreMetadataResponsePrivate::parseGetRecoveryPointRestoreMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecoveryPointRestoreMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

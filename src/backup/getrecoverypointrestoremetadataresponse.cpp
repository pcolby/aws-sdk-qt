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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

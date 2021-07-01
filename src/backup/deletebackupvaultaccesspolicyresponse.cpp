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

#include "deletebackupvaultaccesspolicyresponse.h"
#include "deletebackupvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultAccessPolicyResponse
 * \brief The DeleteBackupVaultAccessPolicyResponse class provides an interace for Backup DeleteBackupVaultAccessPolicy responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultAccessPolicy
 */

/*!
 * Constructs a DeleteBackupVaultAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupVaultAccessPolicyResponse::DeleteBackupVaultAccessPolicyResponse(
        const DeleteBackupVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DeleteBackupVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupVaultAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupVaultAccessPolicyRequest * DeleteBackupVaultAccessPolicyResponse::request() const
{
    Q_D(const DeleteBackupVaultAccessPolicyResponse);
    return static_cast<const DeleteBackupVaultAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DeleteBackupVaultAccessPolicy \a response.
 */
void DeleteBackupVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultAccessPolicyResponsePrivate
 * \brief The DeleteBackupVaultAccessPolicyResponsePrivate class provides private implementation for DeleteBackupVaultAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultAccessPolicyResponsePrivate object with public implementation \a q.
 */
DeleteBackupVaultAccessPolicyResponsePrivate::DeleteBackupVaultAccessPolicyResponsePrivate(
    DeleteBackupVaultAccessPolicyResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DeleteBackupVaultAccessPolicy response element from \a xml.
 */
void DeleteBackupVaultAccessPolicyResponsePrivate::parseDeleteBackupVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupVaultAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

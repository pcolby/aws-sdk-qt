// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

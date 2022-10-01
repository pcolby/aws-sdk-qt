// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupvaultaccesspolicyresponse.h"
#include "getbackupvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyResponse
 * \brief The GetBackupVaultAccessPolicyResponse class provides an interace for Backup GetBackupVaultAccessPolicy responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupVaultAccessPolicy
 */

/*!
 * Constructs a GetBackupVaultAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackupVaultAccessPolicyResponse::GetBackupVaultAccessPolicyResponse(
        const GetBackupVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetBackupVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new GetBackupVaultAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackupVaultAccessPolicyRequest * GetBackupVaultAccessPolicyResponse::request() const
{
    Q_D(const GetBackupVaultAccessPolicyResponse);
    return static_cast<const GetBackupVaultAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetBackupVaultAccessPolicy \a response.
 */
void GetBackupVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackupVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyResponsePrivate
 * \brief The GetBackupVaultAccessPolicyResponsePrivate class provides private implementation for GetBackupVaultAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupVaultAccessPolicyResponsePrivate object with public implementation \a q.
 */
GetBackupVaultAccessPolicyResponsePrivate::GetBackupVaultAccessPolicyResponsePrivate(
    GetBackupVaultAccessPolicyResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetBackupVaultAccessPolicy response element from \a xml.
 */
void GetBackupVaultAccessPolicyResponsePrivate::parseGetBackupVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackupVaultAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

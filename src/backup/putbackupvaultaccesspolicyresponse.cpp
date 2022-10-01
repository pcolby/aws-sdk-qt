// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbackupvaultaccesspolicyresponse.h"
#include "putbackupvaultaccesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultAccessPolicyResponse
 * \brief The PutBackupVaultAccessPolicyResponse class provides an interace for Backup PutBackupVaultAccessPolicy responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultAccessPolicy
 */

/*!
 * Constructs a PutBackupVaultAccessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutBackupVaultAccessPolicyResponse::PutBackupVaultAccessPolicyResponse(
        const PutBackupVaultAccessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new PutBackupVaultAccessPolicyResponsePrivate(this), parent)
{
    setRequest(new PutBackupVaultAccessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBackupVaultAccessPolicyRequest * PutBackupVaultAccessPolicyResponse::request() const
{
    Q_D(const PutBackupVaultAccessPolicyResponse);
    return static_cast<const PutBackupVaultAccessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup PutBackupVaultAccessPolicy \a response.
 */
void PutBackupVaultAccessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBackupVaultAccessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::PutBackupVaultAccessPolicyResponsePrivate
 * \brief The PutBackupVaultAccessPolicyResponsePrivate class provides private implementation for PutBackupVaultAccessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultAccessPolicyResponsePrivate object with public implementation \a q.
 */
PutBackupVaultAccessPolicyResponsePrivate::PutBackupVaultAccessPolicyResponsePrivate(
    PutBackupVaultAccessPolicyResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup PutBackupVaultAccessPolicy response element from \a xml.
 */
void PutBackupVaultAccessPolicyResponsePrivate::parsePutBackupVaultAccessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBackupVaultAccessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

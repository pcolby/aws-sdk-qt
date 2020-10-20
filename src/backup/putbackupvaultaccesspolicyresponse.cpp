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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

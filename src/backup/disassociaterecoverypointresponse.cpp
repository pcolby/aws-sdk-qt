// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociaterecoverypointresponse.h"
#include "disassociaterecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DisassociateRecoveryPointResponse
 * \brief The DisassociateRecoveryPointResponse class provides an interace for Backup DisassociateRecoveryPoint responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::disassociateRecoveryPoint
 */

/*!
 * Constructs a DisassociateRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateRecoveryPointResponse::DisassociateRecoveryPointResponse(
        const DisassociateRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DisassociateRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new DisassociateRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateRecoveryPointRequest * DisassociateRecoveryPointResponse::request() const
{
    Q_D(const DisassociateRecoveryPointResponse);
    return static_cast<const DisassociateRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DisassociateRecoveryPoint \a response.
 */
void DisassociateRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DisassociateRecoveryPointResponsePrivate
 * \brief The DisassociateRecoveryPointResponsePrivate class provides private implementation for DisassociateRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DisassociateRecoveryPointResponsePrivate object with public implementation \a q.
 */
DisassociateRecoveryPointResponsePrivate::DisassociateRecoveryPointResponsePrivate(
    DisassociateRecoveryPointResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DisassociateRecoveryPoint response element from \a xml.
 */
void DisassociateRecoveryPointResponsePrivate::parseDisassociateRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

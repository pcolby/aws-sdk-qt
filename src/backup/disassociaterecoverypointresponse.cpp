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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    return static_cast<const DisassociateRecoveryPointRequest *>(BackupResponse::request());
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

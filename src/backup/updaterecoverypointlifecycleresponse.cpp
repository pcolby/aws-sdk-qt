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

#include "updaterecoverypointlifecycleresponse.h"
#include "updaterecoverypointlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleResponse
 * \brief The UpdateRecoveryPointLifecycleResponse class provides an interace for Backup UpdateRecoveryPointLifecycle responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateRecoveryPointLifecycle
 */

/*!
 * Constructs a UpdateRecoveryPointLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecoveryPointLifecycleResponse::UpdateRecoveryPointLifecycleResponse(
        const UpdateRecoveryPointLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateRecoveryPointLifecycleResponsePrivate(this), parent)
{
    setRequest(new UpdateRecoveryPointLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecoveryPointLifecycleRequest * UpdateRecoveryPointLifecycleResponse::request() const
{
    Q_D(const UpdateRecoveryPointLifecycleResponse);
    return static_cast<const UpdateRecoveryPointLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateRecoveryPointLifecycle \a response.
 */
void UpdateRecoveryPointLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecoveryPointLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleResponsePrivate
 * \brief The UpdateRecoveryPointLifecycleResponsePrivate class provides private implementation for UpdateRecoveryPointLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateRecoveryPointLifecycleResponsePrivate object with public implementation \a q.
 */
UpdateRecoveryPointLifecycleResponsePrivate::UpdateRecoveryPointLifecycleResponsePrivate(
    UpdateRecoveryPointLifecycleResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateRecoveryPointLifecycle response element from \a xml.
 */
void UpdateRecoveryPointLifecycleResponsePrivate::parseUpdateRecoveryPointLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecoveryPointLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

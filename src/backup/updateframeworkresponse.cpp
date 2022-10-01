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

#include "updateframeworkresponse.h"
#include "updateframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateFrameworkResponse
 * \brief The UpdateFrameworkResponse class provides an interace for Backup UpdateFramework responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateFramework
 */

/*!
 * Constructs a UpdateFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFrameworkResponse::UpdateFrameworkResponse(
        const UpdateFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateFrameworkResponsePrivate(this), parent)
{
    setRequest(new UpdateFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFrameworkRequest * UpdateFrameworkResponse::request() const
{
    Q_D(const UpdateFrameworkResponse);
    return static_cast<const UpdateFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateFramework \a response.
 */
void UpdateFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateFrameworkResponsePrivate
 * \brief The UpdateFrameworkResponsePrivate class provides private implementation for UpdateFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateFrameworkResponsePrivate object with public implementation \a q.
 */
UpdateFrameworkResponsePrivate::UpdateFrameworkResponsePrivate(
    UpdateFrameworkResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateFramework response element from \a xml.
 */
void UpdateFrameworkResponsePrivate::parseUpdateFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

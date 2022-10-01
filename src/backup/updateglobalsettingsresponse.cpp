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

#include "updateglobalsettingsresponse.h"
#include "updateglobalsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateGlobalSettingsResponse
 * \brief The UpdateGlobalSettingsResponse class provides an interace for Backup UpdateGlobalSettings responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateGlobalSettings
 */

/*!
 * Constructs a UpdateGlobalSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGlobalSettingsResponse::UpdateGlobalSettingsResponse(
        const UpdateGlobalSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateGlobalSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGlobalSettingsRequest * UpdateGlobalSettingsResponse::request() const
{
    Q_D(const UpdateGlobalSettingsResponse);
    return static_cast<const UpdateGlobalSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateGlobalSettings \a response.
 */
void UpdateGlobalSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGlobalSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateGlobalSettingsResponsePrivate
 * \brief The UpdateGlobalSettingsResponsePrivate class provides private implementation for UpdateGlobalSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateGlobalSettingsResponsePrivate object with public implementation \a q.
 */
UpdateGlobalSettingsResponsePrivate::UpdateGlobalSettingsResponsePrivate(
    UpdateGlobalSettingsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateGlobalSettings response element from \a xml.
 */
void UpdateGlobalSettingsResponsePrivate::parseUpdateGlobalSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

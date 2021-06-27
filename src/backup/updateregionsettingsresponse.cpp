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

#include "updateregionsettingsresponse.h"
#include "updateregionsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateRegionSettingsResponse
 * \brief The UpdateRegionSettingsResponse class provides an interace for Backup UpdateRegionSettings responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateRegionSettings
 */

/*!
 * Constructs a UpdateRegionSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRegionSettingsResponse::UpdateRegionSettingsResponse(
        const UpdateRegionSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateRegionSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateRegionSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRegionSettingsRequest * UpdateRegionSettingsResponse::request() const
{
    return static_cast<const UpdateRegionSettingsRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup UpdateRegionSettings \a response.
 */
void UpdateRegionSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRegionSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateRegionSettingsResponsePrivate
 * \brief The UpdateRegionSettingsResponsePrivate class provides private implementation for UpdateRegionSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateRegionSettingsResponsePrivate object with public implementation \a q.
 */
UpdateRegionSettingsResponsePrivate::UpdateRegionSettingsResponsePrivate(
    UpdateRegionSettingsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateRegionSettings response element from \a xml.
 */
void UpdateRegionSettingsResponsePrivate::parseUpdateRegionSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegionSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    Q_D(const UpdateRegionSettingsResponse);
    return static_cast<const UpdateRegionSettingsRequest *>(d->request);
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

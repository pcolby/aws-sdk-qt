// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

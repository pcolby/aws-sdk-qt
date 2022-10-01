// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotificationsettingsresponse.h"
#include "updatenotificationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateNotificationSettingsResponse
 * \brief The UpdateNotificationSettingsResponse class provides an interace for MTurk UpdateNotificationSettings responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateNotificationSettings
 */

/*!
 * Constructs a UpdateNotificationSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNotificationSettingsResponse::UpdateNotificationSettingsResponse(
        const UpdateNotificationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateNotificationSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateNotificationSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNotificationSettingsRequest * UpdateNotificationSettingsResponse::request() const
{
    Q_D(const UpdateNotificationSettingsResponse);
    return static_cast<const UpdateNotificationSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateNotificationSettings \a response.
 */
void UpdateNotificationSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNotificationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateNotificationSettingsResponsePrivate
 * \brief The UpdateNotificationSettingsResponsePrivate class provides private implementation for UpdateNotificationSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateNotificationSettingsResponsePrivate object with public implementation \a q.
 */
UpdateNotificationSettingsResponsePrivate::UpdateNotificationSettingsResponsePrivate(
    UpdateNotificationSettingsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateNotificationSettings response element from \a xml.
 */
void UpdateNotificationSettingsResponsePrivate::parseUpdateNotificationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotificationSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws

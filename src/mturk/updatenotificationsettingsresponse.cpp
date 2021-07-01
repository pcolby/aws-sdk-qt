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

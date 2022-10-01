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

#include "updatenotificationconfigurationresponse.h"
#include "updatenotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateNotificationConfigurationResponse
 * \brief The UpdateNotificationConfigurationResponse class provides an interace for KinesisVideo UpdateNotificationConfiguration responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateNotificationConfiguration
 */

/*!
 * Constructs a UpdateNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNotificationConfigurationResponse::UpdateNotificationConfigurationResponse(
        const UpdateNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNotificationConfigurationRequest * UpdateNotificationConfigurationResponse::request() const
{
    Q_D(const UpdateNotificationConfigurationResponse);
    return static_cast<const UpdateNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateNotificationConfiguration \a response.
 */
void UpdateNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateNotificationConfigurationResponsePrivate
 * \brief The UpdateNotificationConfigurationResponsePrivate class provides private implementation for UpdateNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateNotificationConfigurationResponsePrivate::UpdateNotificationConfigurationResponsePrivate(
    UpdateNotificationConfigurationResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateNotificationConfiguration response element from \a xml.
 */
void UpdateNotificationConfigurationResponsePrivate::parseUpdateNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

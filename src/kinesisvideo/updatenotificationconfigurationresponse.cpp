// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

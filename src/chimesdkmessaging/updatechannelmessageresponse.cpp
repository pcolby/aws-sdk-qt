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

#include "updatechannelmessageresponse.h"
#include "updatechannelmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelMessageResponse
 * \brief The UpdateChannelMessageResponse class provides an interace for ChimeSdkMessaging UpdateChannelMessage responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannelMessage
 */

/*!
 * Constructs a UpdateChannelMessageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelMessageResponse::UpdateChannelMessageResponse(
        const UpdateChannelMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new UpdateChannelMessageResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelMessageRequest * UpdateChannelMessageResponse::request() const
{
    Q_D(const UpdateChannelMessageResponse);
    return static_cast<const UpdateChannelMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging UpdateChannelMessage \a response.
 */
void UpdateChannelMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelMessageResponsePrivate
 * \brief The UpdateChannelMessageResponsePrivate class provides private implementation for UpdateChannelMessageResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelMessageResponsePrivate object with public implementation \a q.
 */
UpdateChannelMessageResponsePrivate::UpdateChannelMessageResponsePrivate(
    UpdateChannelMessageResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging UpdateChannelMessage response element from \a xml.
 */
void UpdateChannelMessageResponsePrivate::parseUpdateChannelMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

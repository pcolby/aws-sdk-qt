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

#include "updatechannelreadmarkerresponse.h"
#include "updatechannelreadmarkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelReadMarkerResponse
 * \brief The UpdateChannelReadMarkerResponse class provides an interace for ChimeSdkMessaging UpdateChannelReadMarker responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannelReadMarker
 */

/*!
 * Constructs a UpdateChannelReadMarkerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelReadMarkerResponse::UpdateChannelReadMarkerResponse(
        const UpdateChannelReadMarkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new UpdateChannelReadMarkerResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelReadMarkerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelReadMarkerRequest * UpdateChannelReadMarkerResponse::request() const
{
    Q_D(const UpdateChannelReadMarkerResponse);
    return static_cast<const UpdateChannelReadMarkerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging UpdateChannelReadMarker \a response.
 */
void UpdateChannelReadMarkerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelReadMarkerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelReadMarkerResponsePrivate
 * \brief The UpdateChannelReadMarkerResponsePrivate class provides private implementation for UpdateChannelReadMarkerResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelReadMarkerResponsePrivate object with public implementation \a q.
 */
UpdateChannelReadMarkerResponsePrivate::UpdateChannelReadMarkerResponsePrivate(
    UpdateChannelReadMarkerResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging UpdateChannelReadMarker response element from \a xml.
 */
void UpdateChannelReadMarkerResponsePrivate::parseUpdateChannelReadMarkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelReadMarkerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

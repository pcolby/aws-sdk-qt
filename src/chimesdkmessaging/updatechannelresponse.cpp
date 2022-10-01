// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelresponse.h"
#include "updatechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelResponse
 * \brief The UpdateChannelResponse class provides an interace for ChimeSdkMessaging UpdateChannel responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannel
 */

/*!
 * Constructs a UpdateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelResponse::UpdateChannelResponse(
        const UpdateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new UpdateChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelRequest * UpdateChannelResponse::request() const
{
    Q_D(const UpdateChannelResponse);
    return static_cast<const UpdateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging UpdateChannel \a response.
 */
void UpdateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelResponsePrivate
 * \brief The UpdateChannelResponsePrivate class provides private implementation for UpdateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelResponsePrivate object with public implementation \a q.
 */
UpdateChannelResponsePrivate::UpdateChannelResponsePrivate(
    UpdateChannelResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging UpdateChannel response element from \a xml.
 */
void UpdateChannelResponsePrivate::parseUpdateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

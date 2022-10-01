// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendchannelmessageresponse.h"
#include "sendchannelmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::SendChannelMessageResponse
 * \brief The SendChannelMessageResponse class provides an interace for ChimeSdkMessaging SendChannelMessage responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::sendChannelMessage
 */

/*!
 * Constructs a SendChannelMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendChannelMessageResponse::SendChannelMessageResponse(
        const SendChannelMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new SendChannelMessageResponsePrivate(this), parent)
{
    setRequest(new SendChannelMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendChannelMessageRequest * SendChannelMessageResponse::request() const
{
    Q_D(const SendChannelMessageResponse);
    return static_cast<const SendChannelMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging SendChannelMessage \a response.
 */
void SendChannelMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendChannelMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::SendChannelMessageResponsePrivate
 * \brief The SendChannelMessageResponsePrivate class provides private implementation for SendChannelMessageResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a SendChannelMessageResponsePrivate object with public implementation \a q.
 */
SendChannelMessageResponsePrivate::SendChannelMessageResponsePrivate(
    SendChannelMessageResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging SendChannelMessage response element from \a xml.
 */
void SendChannelMessageResponsePrivate::parseSendChannelMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendChannelMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "redactchannelmessageresponse.h"
#include "redactchannelmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::RedactChannelMessageResponse
 * \brief The RedactChannelMessageResponse class provides an interace for ChimeSdkMessaging RedactChannelMessage responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::redactChannelMessage
 */

/*!
 * Constructs a RedactChannelMessageResponse object for \a reply to \a request, with parent \a parent.
 */
RedactChannelMessageResponse::RedactChannelMessageResponse(
        const RedactChannelMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new RedactChannelMessageResponsePrivate(this), parent)
{
    setRequest(new RedactChannelMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RedactChannelMessageRequest * RedactChannelMessageResponse::request() const
{
    Q_D(const RedactChannelMessageResponse);
    return static_cast<const RedactChannelMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging RedactChannelMessage \a response.
 */
void RedactChannelMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RedactChannelMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::RedactChannelMessageResponsePrivate
 * \brief The RedactChannelMessageResponsePrivate class provides private implementation for RedactChannelMessageResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a RedactChannelMessageResponsePrivate object with public implementation \a q.
 */
RedactChannelMessageResponsePrivate::RedactChannelMessageResponsePrivate(
    RedactChannelMessageResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging RedactChannelMessage response element from \a xml.
 */
void RedactChannelMessageResponsePrivate::parseRedactChannelMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RedactChannelMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

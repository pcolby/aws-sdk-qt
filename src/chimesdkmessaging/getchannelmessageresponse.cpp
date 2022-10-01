// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelmessageresponse.h"
#include "getchannelmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageResponse
 * \brief The GetChannelMessageResponse class provides an interace for ChimeSdkMessaging GetChannelMessage responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMessage
 */

/*!
 * Constructs a GetChannelMessageResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelMessageResponse::GetChannelMessageResponse(
        const GetChannelMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new GetChannelMessageResponsePrivate(this), parent)
{
    setRequest(new GetChannelMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelMessageRequest * GetChannelMessageResponse::request() const
{
    Q_D(const GetChannelMessageResponse);
    return static_cast<const GetChannelMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging GetChannelMessage \a response.
 */
void GetChannelMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageResponsePrivate
 * \brief The GetChannelMessageResponsePrivate class provides private implementation for GetChannelMessageResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMessageResponsePrivate object with public implementation \a q.
 */
GetChannelMessageResponsePrivate::GetChannelMessageResponsePrivate(
    GetChannelMessageResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging GetChannelMessage response element from \a xml.
 */
void GetChannelMessageResponsePrivate::parseGetChannelMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

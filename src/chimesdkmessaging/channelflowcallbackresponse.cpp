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

#include "channelflowcallbackresponse.h"
#include "channelflowcallbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChannelFlowCallbackResponse
 * \brief The ChannelFlowCallbackResponse class provides an interace for ChimeSdkMessaging ChannelFlowCallback responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::channelFlowCallback
 */

/*!
 * Constructs a ChannelFlowCallbackResponse object for \a reply to \a request, with parent \a parent.
 */
ChannelFlowCallbackResponse::ChannelFlowCallbackResponse(
        const ChannelFlowCallbackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ChannelFlowCallbackResponsePrivate(this), parent)
{
    setRequest(new ChannelFlowCallbackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChannelFlowCallbackRequest * ChannelFlowCallbackResponse::request() const
{
    Q_D(const ChannelFlowCallbackResponse);
    return static_cast<const ChannelFlowCallbackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ChannelFlowCallback \a response.
 */
void ChannelFlowCallbackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChannelFlowCallbackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ChannelFlowCallbackResponsePrivate
 * \brief The ChannelFlowCallbackResponsePrivate class provides private implementation for ChannelFlowCallbackResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChannelFlowCallbackResponsePrivate object with public implementation \a q.
 */
ChannelFlowCallbackResponsePrivate::ChannelFlowCallbackResponsePrivate(
    ChannelFlowCallbackResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ChannelFlowCallback response element from \a xml.
 */
void ChannelFlowCallbackResponsePrivate::parseChannelFlowCallbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChannelFlowCallbackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

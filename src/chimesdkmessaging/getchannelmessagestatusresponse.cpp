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

#include "getchannelmessagestatusresponse.h"
#include "getchannelmessagestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageStatusResponse
 * \brief The GetChannelMessageStatusResponse class provides an interace for ChimeSdkMessaging GetChannelMessageStatus responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMessageStatus
 */

/*!
 * Constructs a GetChannelMessageStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelMessageStatusResponse::GetChannelMessageStatusResponse(
        const GetChannelMessageStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new GetChannelMessageStatusResponsePrivate(this), parent)
{
    setRequest(new GetChannelMessageStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelMessageStatusRequest * GetChannelMessageStatusResponse::request() const
{
    Q_D(const GetChannelMessageStatusResponse);
    return static_cast<const GetChannelMessageStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging GetChannelMessageStatus \a response.
 */
void GetChannelMessageStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelMessageStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageStatusResponsePrivate
 * \brief The GetChannelMessageStatusResponsePrivate class provides private implementation for GetChannelMessageStatusResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMessageStatusResponsePrivate object with public implementation \a q.
 */
GetChannelMessageStatusResponsePrivate::GetChannelMessageStatusResponsePrivate(
    GetChannelMessageStatusResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging GetChannelMessageStatus response element from \a xml.
 */
void GetChannelMessageStatusResponsePrivate::parseGetChannelMessageStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelMessageStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

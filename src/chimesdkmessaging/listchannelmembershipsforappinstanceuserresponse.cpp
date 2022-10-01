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

#include "listchannelmembershipsforappinstanceuserresponse.h"
#include "listchannelmembershipsforappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsForAppInstanceUserResponse
 * \brief The ListChannelMembershipsForAppInstanceUserResponse class provides an interace for ChimeSdkMessaging ListChannelMembershipsForAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelMembershipsForAppInstanceUser
 */

/*!
 * Constructs a ListChannelMembershipsForAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelMembershipsForAppInstanceUserResponse::ListChannelMembershipsForAppInstanceUserResponse(
        const ListChannelMembershipsForAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelMembershipsForAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new ListChannelMembershipsForAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelMembershipsForAppInstanceUserRequest * ListChannelMembershipsForAppInstanceUserResponse::request() const
{
    Q_D(const ListChannelMembershipsForAppInstanceUserResponse);
    return static_cast<const ListChannelMembershipsForAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelMembershipsForAppInstanceUser \a response.
 */
void ListChannelMembershipsForAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelMembershipsForAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsForAppInstanceUserResponsePrivate
 * \brief The ListChannelMembershipsForAppInstanceUserResponsePrivate class provides private implementation for ListChannelMembershipsForAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelMembershipsForAppInstanceUserResponsePrivate object with public implementation \a q.
 */
ListChannelMembershipsForAppInstanceUserResponsePrivate::ListChannelMembershipsForAppInstanceUserResponsePrivate(
    ListChannelMembershipsForAppInstanceUserResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelMembershipsForAppInstanceUser response element from \a xml.
 */
void ListChannelMembershipsForAppInstanceUserResponsePrivate::parseListChannelMembershipsForAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelMembershipsForAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

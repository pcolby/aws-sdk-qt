// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsmoderatedbyappinstanceuserresponse.h"
#include "listchannelsmoderatedbyappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsModeratedByAppInstanceUserResponse
 * \brief The ListChannelsModeratedByAppInstanceUserResponse class provides an interace for ChimeSdkMessaging ListChannelsModeratedByAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelsModeratedByAppInstanceUser
 */

/*!
 * Constructs a ListChannelsModeratedByAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelsModeratedByAppInstanceUserResponse::ListChannelsModeratedByAppInstanceUserResponse(
        const ListChannelsModeratedByAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelsModeratedByAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new ListChannelsModeratedByAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelsModeratedByAppInstanceUserRequest * ListChannelsModeratedByAppInstanceUserResponse::request() const
{
    Q_D(const ListChannelsModeratedByAppInstanceUserResponse);
    return static_cast<const ListChannelsModeratedByAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelsModeratedByAppInstanceUser \a response.
 */
void ListChannelsModeratedByAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelsModeratedByAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsModeratedByAppInstanceUserResponsePrivate
 * \brief The ListChannelsModeratedByAppInstanceUserResponsePrivate class provides private implementation for ListChannelsModeratedByAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelsModeratedByAppInstanceUserResponsePrivate object with public implementation \a q.
 */
ListChannelsModeratedByAppInstanceUserResponsePrivate::ListChannelsModeratedByAppInstanceUserResponsePrivate(
    ListChannelsModeratedByAppInstanceUserResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelsModeratedByAppInstanceUser response element from \a xml.
 */
void ListChannelsModeratedByAppInstanceUserResponsePrivate::parseListChannelsModeratedByAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsModeratedByAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

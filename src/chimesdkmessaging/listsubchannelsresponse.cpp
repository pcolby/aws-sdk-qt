// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsubchannelsresponse.h"
#include "listsubchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListSubChannelsResponse
 * \brief The ListSubChannelsResponse class provides an interace for ChimeSdkMessaging ListSubChannels responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listSubChannels
 */

/*!
 * Constructs a ListSubChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubChannelsResponse::ListSubChannelsResponse(
        const ListSubChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListSubChannelsResponsePrivate(this), parent)
{
    setRequest(new ListSubChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubChannelsRequest * ListSubChannelsResponse::request() const
{
    Q_D(const ListSubChannelsResponse);
    return static_cast<const ListSubChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListSubChannels \a response.
 */
void ListSubChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListSubChannelsResponsePrivate
 * \brief The ListSubChannelsResponsePrivate class provides private implementation for ListSubChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListSubChannelsResponsePrivate object with public implementation \a q.
 */
ListSubChannelsResponsePrivate::ListSubChannelsResponsePrivate(
    ListSubChannelsResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListSubChannels response element from \a xml.
 */
void ListSubChannelsResponsePrivate::parseListSubChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

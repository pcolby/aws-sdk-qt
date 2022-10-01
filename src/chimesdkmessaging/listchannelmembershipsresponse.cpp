// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelmembershipsresponse.h"
#include "listchannelmembershipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsResponse
 * \brief The ListChannelMembershipsResponse class provides an interace for ChimeSdkMessaging ListChannelMemberships responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelMemberships
 */

/*!
 * Constructs a ListChannelMembershipsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelMembershipsResponse::ListChannelMembershipsResponse(
        const ListChannelMembershipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelMembershipsResponsePrivate(this), parent)
{
    setRequest(new ListChannelMembershipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelMembershipsRequest * ListChannelMembershipsResponse::request() const
{
    Q_D(const ListChannelMembershipsResponse);
    return static_cast<const ListChannelMembershipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelMemberships \a response.
 */
void ListChannelMembershipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelMembershipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelMembershipsResponsePrivate
 * \brief The ListChannelMembershipsResponsePrivate class provides private implementation for ListChannelMembershipsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelMembershipsResponsePrivate object with public implementation \a q.
 */
ListChannelMembershipsResponsePrivate::ListChannelMembershipsResponsePrivate(
    ListChannelMembershipsResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelMemberships response element from \a xml.
 */
void ListChannelMembershipsResponsePrivate::parseListChannelMembershipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelMembershipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

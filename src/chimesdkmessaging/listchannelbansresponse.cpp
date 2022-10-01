// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelbansresponse.h"
#include "listchannelbansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelBansResponse
 * \brief The ListChannelBansResponse class provides an interace for ChimeSdkMessaging ListChannelBans responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelBans
 */

/*!
 * Constructs a ListChannelBansResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelBansResponse::ListChannelBansResponse(
        const ListChannelBansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelBansResponsePrivate(this), parent)
{
    setRequest(new ListChannelBansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelBansRequest * ListChannelBansResponse::request() const
{
    Q_D(const ListChannelBansResponse);
    return static_cast<const ListChannelBansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelBans \a response.
 */
void ListChannelBansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelBansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelBansResponsePrivate
 * \brief The ListChannelBansResponsePrivate class provides private implementation for ListChannelBansResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelBansResponsePrivate object with public implementation \a q.
 */
ListChannelBansResponsePrivate::ListChannelBansResponsePrivate(
    ListChannelBansResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelBans response element from \a xml.
 */
void ListChannelBansResponsePrivate::parseListChannelBansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelBansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

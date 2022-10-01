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

#include "listchannelmoderatorsresponse.h"
#include "listchannelmoderatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelModeratorsResponse
 * \brief The ListChannelModeratorsResponse class provides an interace for ChimeSdkMessaging ListChannelModerators responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelModerators
 */

/*!
 * Constructs a ListChannelModeratorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelModeratorsResponse::ListChannelModeratorsResponse(
        const ListChannelModeratorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new ListChannelModeratorsResponsePrivate(this), parent)
{
    setRequest(new ListChannelModeratorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelModeratorsRequest * ListChannelModeratorsResponse::request() const
{
    Q_D(const ListChannelModeratorsResponse);
    return static_cast<const ListChannelModeratorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging ListChannelModerators \a response.
 */
void ListChannelModeratorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelModeratorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelModeratorsResponsePrivate
 * \brief The ListChannelModeratorsResponsePrivate class provides private implementation for ListChannelModeratorsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelModeratorsResponsePrivate object with public implementation \a q.
 */
ListChannelModeratorsResponsePrivate::ListChannelModeratorsResponsePrivate(
    ListChannelModeratorsResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging ListChannelModerators response element from \a xml.
 */
void ListChannelModeratorsResponsePrivate::parseListChannelModeratorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelModeratorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

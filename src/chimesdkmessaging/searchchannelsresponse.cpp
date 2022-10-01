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

#include "searchchannelsresponse.h"
#include "searchchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::SearchChannelsResponse
 * \brief The SearchChannelsResponse class provides an interace for ChimeSdkMessaging SearchChannels responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::searchChannels
 */

/*!
 * Constructs a SearchChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchChannelsResponse::SearchChannelsResponse(
        const SearchChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new SearchChannelsResponsePrivate(this), parent)
{
    setRequest(new SearchChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchChannelsRequest * SearchChannelsResponse::request() const
{
    Q_D(const SearchChannelsResponse);
    return static_cast<const SearchChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging SearchChannels \a response.
 */
void SearchChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::SearchChannelsResponsePrivate
 * \brief The SearchChannelsResponsePrivate class provides private implementation for SearchChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a SearchChannelsResponsePrivate object with public implementation \a q.
 */
SearchChannelsResponsePrivate::SearchChannelsResponsePrivate(
    SearchChannelsResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging SearchChannels response element from \a xml.
 */
void SearchChannelsResponsePrivate::parseSearchChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws

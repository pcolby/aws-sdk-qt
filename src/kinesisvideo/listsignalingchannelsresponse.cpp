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

#include "listsignalingchannelsresponse.h"
#include "listsignalingchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListSignalingChannelsResponse
 * \brief The ListSignalingChannelsResponse class provides an interace for KinesisVideo ListSignalingChannels responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listSignalingChannels
 */

/*!
 * Constructs a ListSignalingChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSignalingChannelsResponse::ListSignalingChannelsResponse(
        const ListSignalingChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new ListSignalingChannelsResponsePrivate(this), parent)
{
    setRequest(new ListSignalingChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSignalingChannelsRequest * ListSignalingChannelsResponse::request() const
{
    return static_cast<const ListSignalingChannelsRequest *>(KinesisVideoResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisVideo ListSignalingChannels \a response.
 */
void ListSignalingChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSignalingChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::ListSignalingChannelsResponsePrivate
 * \brief The ListSignalingChannelsResponsePrivate class provides private implementation for ListSignalingChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListSignalingChannelsResponsePrivate object with public implementation \a q.
 */
ListSignalingChannelsResponsePrivate::ListSignalingChannelsResponsePrivate(
    ListSignalingChannelsResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo ListSignalingChannels response element from \a xml.
 */
void ListSignalingChannelsResponsePrivate::parseListSignalingChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSignalingChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

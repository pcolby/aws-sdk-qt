// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListSignalingChannelsResponse);
    return static_cast<const ListSignalingChannelsRequest *>(d->request);
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

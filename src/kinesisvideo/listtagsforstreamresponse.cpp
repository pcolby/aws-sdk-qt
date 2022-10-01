// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforstreamresponse.h"
#include "listtagsforstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamResponse
 * \brief The ListTagsForStreamResponse class provides an interace for KinesisVideo ListTagsForStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listTagsForStream
 */

/*!
 * Constructs a ListTagsForStreamResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForStreamResponse::ListTagsForStreamResponse(
        const ListTagsForStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new ListTagsForStreamResponsePrivate(this), parent)
{
    setRequest(new ListTagsForStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForStreamRequest * ListTagsForStreamResponse::request() const
{
    Q_D(const ListTagsForStreamResponse);
    return static_cast<const ListTagsForStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo ListTagsForStream \a response.
 */
void ListTagsForStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamResponsePrivate
 * \brief The ListTagsForStreamResponsePrivate class provides private implementation for ListTagsForStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListTagsForStreamResponsePrivate object with public implementation \a q.
 */
ListTagsForStreamResponsePrivate::ListTagsForStreamResponsePrivate(
    ListTagsForStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo ListTagsForStream response element from \a xml.
 */
void ListTagsForStreamResponsePrivate::parseListTagsForStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

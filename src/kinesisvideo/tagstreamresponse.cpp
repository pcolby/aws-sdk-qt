// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagstreamresponse.h"
#include "tagstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::TagStreamResponse
 * \brief The TagStreamResponse class provides an interace for KinesisVideo TagStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::tagStream
 */

/*!
 * Constructs a TagStreamResponse object for \a reply to \a request, with parent \a parent.
 */
TagStreamResponse::TagStreamResponse(
        const TagStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new TagStreamResponsePrivate(this), parent)
{
    setRequest(new TagStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagStreamRequest * TagStreamResponse::request() const
{
    Q_D(const TagStreamResponse);
    return static_cast<const TagStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo TagStream \a response.
 */
void TagStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::TagStreamResponsePrivate
 * \brief The TagStreamResponsePrivate class provides private implementation for TagStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a TagStreamResponsePrivate object with public implementation \a q.
 */
TagStreamResponsePrivate::TagStreamResponsePrivate(
    TagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo TagStream response element from \a xml.
 */
void TagStreamResponsePrivate::parseTagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

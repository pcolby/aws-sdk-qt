// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagstreamresponse.h"
#include "untagstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UntagStreamResponse
 * \brief The UntagStreamResponse class provides an interace for KinesisVideo UntagStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::untagStream
 */

/*!
 * Constructs a UntagStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UntagStreamResponse::UntagStreamResponse(
        const UntagStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UntagStreamResponsePrivate(this), parent)
{
    setRequest(new UntagStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagStreamRequest * UntagStreamResponse::request() const
{
    Q_D(const UntagStreamResponse);
    return static_cast<const UntagStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UntagStream \a response.
 */
void UntagStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UntagStreamResponsePrivate
 * \brief The UntagStreamResponsePrivate class provides private implementation for UntagStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UntagStreamResponsePrivate object with public implementation \a q.
 */
UntagStreamResponsePrivate::UntagStreamResponsePrivate(
    UntagStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UntagStream response element from \a xml.
 */
void UntagStreamResponsePrivate::parseUntagStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

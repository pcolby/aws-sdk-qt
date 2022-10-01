// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamresponse.h"
#include "updatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateStreamResponse
 * \brief The UpdateStreamResponse class provides an interace for KinesisVideo UpdateStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateStream
 */

/*!
 * Constructs a UpdateStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamResponse::UpdateStreamResponse(
        const UpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateStreamResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamRequest * UpdateStreamResponse::request() const
{
    Q_D(const UpdateStreamResponse);
    return static_cast<const UpdateStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateStream \a response.
 */
void UpdateStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateStreamResponsePrivate
 * \brief The UpdateStreamResponsePrivate class provides private implementation for UpdateStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateStreamResponsePrivate object with public implementation \a q.
 */
UpdateStreamResponsePrivate::UpdateStreamResponsePrivate(
    UpdateStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateStream response element from \a xml.
 */
void UpdateStreamResponsePrivate::parseUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

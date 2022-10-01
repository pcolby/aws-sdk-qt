// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamresponse.h"
#include "createstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::CreateStreamResponse
 * \brief The CreateStreamResponse class provides an interace for KinesisVideo CreateStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::createStream
 */

/*!
 * Constructs a CreateStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamResponse::CreateStreamResponse(
        const CreateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new CreateStreamResponsePrivate(this), parent)
{
    setRequest(new CreateStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamRequest * CreateStreamResponse::request() const
{
    Q_D(const CreateStreamResponse);
    return static_cast<const CreateStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo CreateStream \a response.
 */
void CreateStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::CreateStreamResponsePrivate
 * \brief The CreateStreamResponsePrivate class provides private implementation for CreateStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a CreateStreamResponsePrivate object with public implementation \a q.
 */
CreateStreamResponsePrivate::CreateStreamResponsePrivate(
    CreateStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo CreateStream response element from \a xml.
 */
void CreateStreamResponsePrivate::parseCreateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

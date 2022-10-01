// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsignalingchannelresponse.h"
#include "createsignalingchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelResponse
 * \brief The CreateSignalingChannelResponse class provides an interace for KinesisVideo CreateSignalingChannel responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::createSignalingChannel
 */

/*!
 * Constructs a CreateSignalingChannelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSignalingChannelResponse::CreateSignalingChannelResponse(
        const CreateSignalingChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new CreateSignalingChannelResponsePrivate(this), parent)
{
    setRequest(new CreateSignalingChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSignalingChannelRequest * CreateSignalingChannelResponse::request() const
{
    Q_D(const CreateSignalingChannelResponse);
    return static_cast<const CreateSignalingChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo CreateSignalingChannel \a response.
 */
void CreateSignalingChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSignalingChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelResponsePrivate
 * \brief The CreateSignalingChannelResponsePrivate class provides private implementation for CreateSignalingChannelResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a CreateSignalingChannelResponsePrivate object with public implementation \a q.
 */
CreateSignalingChannelResponsePrivate::CreateSignalingChannelResponsePrivate(
    CreateSignalingChannelResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo CreateSignalingChannel response element from \a xml.
 */
void CreateSignalingChannelResponsePrivate::parseCreateSignalingChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSignalingChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

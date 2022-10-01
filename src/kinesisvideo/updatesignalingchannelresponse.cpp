// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesignalingchannelresponse.h"
#include "updatesignalingchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateSignalingChannelResponse
 * \brief The UpdateSignalingChannelResponse class provides an interace for KinesisVideo UpdateSignalingChannel responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateSignalingChannel
 */

/*!
 * Constructs a UpdateSignalingChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSignalingChannelResponse::UpdateSignalingChannelResponse(
        const UpdateSignalingChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateSignalingChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateSignalingChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSignalingChannelRequest * UpdateSignalingChannelResponse::request() const
{
    Q_D(const UpdateSignalingChannelResponse);
    return static_cast<const UpdateSignalingChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateSignalingChannel \a response.
 */
void UpdateSignalingChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSignalingChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateSignalingChannelResponsePrivate
 * \brief The UpdateSignalingChannelResponsePrivate class provides private implementation for UpdateSignalingChannelResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateSignalingChannelResponsePrivate object with public implementation \a q.
 */
UpdateSignalingChannelResponsePrivate::UpdateSignalingChannelResponsePrivate(
    UpdateSignalingChannelResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateSignalingChannel response element from \a xml.
 */
void UpdateSignalingChannelResponsePrivate::parseUpdateSignalingChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSignalingChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

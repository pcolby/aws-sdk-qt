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

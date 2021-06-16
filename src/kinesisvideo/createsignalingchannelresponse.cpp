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

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

#include "geticeserverconfigresponse.h"
#include "geticeserverconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoSignalingChannels {

/*!
 * \class QtAws::KinesisVideoSignalingChannels::GetIceServerConfigResponse
 * \brief The GetIceServerConfigResponse class provides an interace for KinesisVideoSignalingChannels GetIceServerConfig responses.
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingChannelsClient::getIceServerConfig
 */

/*!
 * Constructs a GetIceServerConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetIceServerConfigResponse::GetIceServerConfigResponse(
        const GetIceServerConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoSignalingChannelsResponse(new GetIceServerConfigResponsePrivate(this), parent)
{
    setRequest(new GetIceServerConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIceServerConfigRequest * GetIceServerConfigResponse::request() const
{
    return static_cast<const GetIceServerConfigRequest *>(KinesisVideoSignalingChannelsResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisVideoSignalingChannels GetIceServerConfig \a response.
 */
void GetIceServerConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIceServerConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoSignalingChannels::GetIceServerConfigResponsePrivate
 * \brief The GetIceServerConfigResponsePrivate class provides private implementation for GetIceServerConfigResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * Constructs a GetIceServerConfigResponsePrivate object with public implementation \a q.
 */
GetIceServerConfigResponsePrivate::GetIceServerConfigResponsePrivate(
    GetIceServerConfigResponse * const q) : KinesisVideoSignalingChannelsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoSignalingChannels GetIceServerConfig response element from \a xml.
 */
void GetIceServerConfigResponsePrivate::parseGetIceServerConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIceServerConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws

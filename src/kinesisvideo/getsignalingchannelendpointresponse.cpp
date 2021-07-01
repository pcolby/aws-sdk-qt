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

#include "getsignalingchannelendpointresponse.h"
#include "getsignalingchannelendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::GetSignalingChannelEndpointResponse
 * \brief The GetSignalingChannelEndpointResponse class provides an interace for KinesisVideo GetSignalingChannelEndpoint responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::getSignalingChannelEndpoint
 */

/*!
 * Constructs a GetSignalingChannelEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetSignalingChannelEndpointResponse::GetSignalingChannelEndpointResponse(
        const GetSignalingChannelEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new GetSignalingChannelEndpointResponsePrivate(this), parent)
{
    setRequest(new GetSignalingChannelEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSignalingChannelEndpointRequest * GetSignalingChannelEndpointResponse::request() const
{
    Q_D(const GetSignalingChannelEndpointResponse);
    return static_cast<const GetSignalingChannelEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo GetSignalingChannelEndpoint \a response.
 */
void GetSignalingChannelEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSignalingChannelEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::GetSignalingChannelEndpointResponsePrivate
 * \brief The GetSignalingChannelEndpointResponsePrivate class provides private implementation for GetSignalingChannelEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a GetSignalingChannelEndpointResponsePrivate object with public implementation \a q.
 */
GetSignalingChannelEndpointResponsePrivate::GetSignalingChannelEndpointResponsePrivate(
    GetSignalingChannelEndpointResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo GetSignalingChannelEndpoint response element from \a xml.
 */
void GetSignalingChannelEndpointResponsePrivate::parseGetSignalingChannelEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSignalingChannelEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

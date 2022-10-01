// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

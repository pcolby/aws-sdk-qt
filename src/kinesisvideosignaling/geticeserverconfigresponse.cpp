// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geticeserverconfigresponse.h"
#include "geticeserverconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::GetIceServerConfigResponse
 * \brief The GetIceServerConfigResponse class provides an interace for KinesisVideoSignaling GetIceServerConfig responses.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingClient::getIceServerConfig
 */

/*!
 * Constructs a GetIceServerConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetIceServerConfigResponse::GetIceServerConfigResponse(
        const GetIceServerConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoSignalingResponse(new GetIceServerConfigResponsePrivate(this), parent)
{
    setRequest(new GetIceServerConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIceServerConfigRequest * GetIceServerConfigResponse::request() const
{
    Q_D(const GetIceServerConfigResponse);
    return static_cast<const GetIceServerConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideoSignaling GetIceServerConfig \a response.
 */
void GetIceServerConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIceServerConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideoSignaling::GetIceServerConfigResponsePrivate
 * \brief The GetIceServerConfigResponsePrivate class provides private implementation for GetIceServerConfigResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a GetIceServerConfigResponsePrivate object with public implementation \a q.
 */
GetIceServerConfigResponsePrivate::GetIceServerConfigResponsePrivate(
    GetIceServerConfigResponse * const q) : KinesisVideoSignalingResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideoSignaling GetIceServerConfig response element from \a xml.
 */
void GetIceServerConfigResponsePrivate::parseGetIceServerConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIceServerConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideoSignaling
} // namespace QtAws

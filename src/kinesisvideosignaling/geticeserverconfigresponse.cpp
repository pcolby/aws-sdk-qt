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

/*
    Copyright 2013-2019 Paul Colby

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

#include "getvoicechannelresponse.h"
#include "getvoicechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelResponse
 * \brief The GetVoiceChannelResponse class provides an interace for Pinpoint GetVoiceChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getVoiceChannel
 */

/*!
 * Constructs a GetVoiceChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetVoiceChannelResponse::GetVoiceChannelResponse(
        const GetVoiceChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetVoiceChannelResponsePrivate(this), parent)
{
    setRequest(new GetVoiceChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVoiceChannelRequest * GetVoiceChannelResponse::request() const
{
    Q_D(const GetVoiceChannelResponse);
    return static_cast<const GetVoiceChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetVoiceChannel \a response.
 */
void GetVoiceChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVoiceChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelResponsePrivate
 * \brief The GetVoiceChannelResponsePrivate class provides private implementation for GetVoiceChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceChannelResponsePrivate object with public implementation \a q.
 */
GetVoiceChannelResponsePrivate::GetVoiceChannelResponsePrivate(
    GetVoiceChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetVoiceChannel response element from \a xml.
 */
void GetVoiceChannelResponsePrivate::parseGetVoiceChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVoiceChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

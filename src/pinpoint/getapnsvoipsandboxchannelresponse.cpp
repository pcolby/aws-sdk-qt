/*
    Copyright 2013-2018 Paul Colby

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

#include "getapnsvoipsandboxchannelresponse.h"
#include "getapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelResponse
 * \brief The GetApnsVoipSandboxChannelResponse class provides an interace for Pinpoint GetApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipSandboxChannel
 */

/*!
 * Constructs a GetApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsVoipSandboxChannelResponse::GetApnsVoipSandboxChannelResponse(
        const GetApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsVoipSandboxChannelRequest * GetApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const GetApnsVoipSandboxChannelResponse);
    return static_cast<const GetApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsVoipSandboxChannel \a response.
 */
void GetApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelResponsePrivate
 * \brief The GetApnsVoipSandboxChannelResponsePrivate class provides private implementation for GetApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
GetApnsVoipSandboxChannelResponsePrivate::GetApnsVoipSandboxChannelResponsePrivate(
    GetApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsVoipSandboxChannel response element from \a xml.
 */
void GetApnsVoipSandboxChannelResponsePrivate::parseGetApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

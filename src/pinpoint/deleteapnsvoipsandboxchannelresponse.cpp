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

#include "deleteapnsvoipsandboxchannelresponse.h"
#include "deleteapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelResponse
 * \brief The DeleteApnsVoipSandboxChannelResponse class provides an interace for Pinpoint DeleteApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipSandboxChannel
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsVoipSandboxChannelResponse::DeleteApnsVoipSandboxChannelResponse(
        const DeleteApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsVoipSandboxChannelRequest * DeleteApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipSandboxChannelResponse);
    return static_cast<const DeleteApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsVoipSandboxChannel \a response.
 */
void DeleteApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelResponsePrivate
 * \brief The DeleteApnsVoipSandboxChannelResponsePrivate class provides private implementation for DeleteApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsVoipSandboxChannelResponsePrivate::DeleteApnsVoipSandboxChannelResponsePrivate(
    DeleteApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsVoipSandboxChannel response element from \a xml.
 */
void DeleteApnsVoipSandboxChannelResponsePrivate::parseDeleteApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

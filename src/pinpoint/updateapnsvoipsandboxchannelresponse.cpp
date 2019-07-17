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

#include "updateapnsvoipsandboxchannelresponse.h"
#include "updateapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelResponse
 * \brief The UpdateApnsVoipSandboxChannelResponse class provides an interace for Pinpoint UpdateApnsVoipSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipSandboxChannel
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsVoipSandboxChannelResponse::UpdateApnsVoipSandboxChannelResponse(
        const UpdateApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsVoipSandboxChannelRequest * UpdateApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipSandboxChannelResponse);
    return static_cast<const UpdateApnsVoipSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsVoipSandboxChannel \a response.
 */
void UpdateApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsVoipSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelResponsePrivate
 * \brief The UpdateApnsVoipSandboxChannelResponsePrivate class provides private implementation for UpdateApnsVoipSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsVoipSandboxChannelResponsePrivate::UpdateApnsVoipSandboxChannelResponsePrivate(
    UpdateApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsVoipSandboxChannel response element from \a xml.
 */
void UpdateApnsVoipSandboxChannelResponsePrivate::parseUpdateApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

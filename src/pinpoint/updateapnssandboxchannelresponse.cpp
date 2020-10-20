/*
    Copyright 2013-2020 Paul Colby

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

#include "updateapnssandboxchannelresponse.h"
#include "updateapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelResponse
 * \brief The UpdateApnsSandboxChannelResponse class provides an interace for Pinpoint UpdateApnsSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsSandboxChannel
 */

/*!
 * Constructs a UpdateApnsSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsSandboxChannelResponse::UpdateApnsSandboxChannelResponse(
        const UpdateApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsSandboxChannelRequest * UpdateApnsSandboxChannelResponse::request() const
{
    Q_D(const UpdateApnsSandboxChannelResponse);
    return static_cast<const UpdateApnsSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsSandboxChannel \a response.
 */
void UpdateApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelResponsePrivate
 * \brief The UpdateApnsSandboxChannelResponsePrivate class provides private implementation for UpdateApnsSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsSandboxChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsSandboxChannelResponsePrivate::UpdateApnsSandboxChannelResponsePrivate(
    UpdateApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsSandboxChannel response element from \a xml.
 */
void UpdateApnsSandboxChannelResponsePrivate::parseUpdateApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

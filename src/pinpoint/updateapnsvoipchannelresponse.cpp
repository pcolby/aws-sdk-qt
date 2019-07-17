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

#include "updateapnsvoipchannelresponse.h"
#include "updateapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelResponse
 * \brief The UpdateApnsVoipChannelResponse class provides an interace for Pinpoint UpdateApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateApnsVoipChannel
 */

/*!
 * Constructs a UpdateApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApnsVoipChannelResponse::UpdateApnsVoipChannelResponse(
        const UpdateApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApnsVoipChannelRequest * UpdateApnsVoipChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipChannelResponse);
    return static_cast<const UpdateApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApnsVoipChannel \a response.
 */
void UpdateApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelResponsePrivate
 * \brief The UpdateApnsVoipChannelResponsePrivate class provides private implementation for UpdateApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
UpdateApnsVoipChannelResponsePrivate::UpdateApnsVoipChannelResponsePrivate(
    UpdateApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApnsVoipChannel response element from \a xml.
 */
void UpdateApnsVoipChannelResponsePrivate::parseUpdateApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

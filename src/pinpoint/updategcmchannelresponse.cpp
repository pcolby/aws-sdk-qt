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

#include "updategcmchannelresponse.h"
#include "updategcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelResponse
 * \brief The UpdateGcmChannelResponse class provides an interace for Pinpoint UpdateGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateGcmChannel
 */

/*!
 * Constructs a UpdateGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGcmChannelResponse::UpdateGcmChannelResponse(
        const UpdateGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateGcmChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGcmChannelRequest * UpdateGcmChannelResponse::request() const
{
    Q_D(const UpdateGcmChannelResponse);
    return static_cast<const UpdateGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateGcmChannel \a response.
 */
void UpdateGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelResponsePrivate
 * \brief The UpdateGcmChannelResponsePrivate class provides private implementation for UpdateGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateGcmChannelResponsePrivate object with public implementation \a q.
 */
UpdateGcmChannelResponsePrivate::UpdateGcmChannelResponsePrivate(
    UpdateGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateGcmChannel response element from \a xml.
 */
void UpdateGcmChannelResponsePrivate::parseUpdateGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

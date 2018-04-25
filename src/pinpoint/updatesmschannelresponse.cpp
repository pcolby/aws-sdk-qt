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

#include "updatesmschannelresponse.h"
#include "updatesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelResponse
 * \brief The UpdateSmsChannelResponse class provides an interace for Pinpoint UpdateSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateSmsChannel
 */

/*!
 * Constructs a UpdateSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSmsChannelResponse::UpdateSmsChannelResponse(
        const UpdateSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSmsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSmsChannelRequest * UpdateSmsChannelResponse::request() const
{
    Q_D(const UpdateSmsChannelResponse);
    return static_cast<const UpdateSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSmsChannel \a response.
 */
void UpdateSmsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelResponsePrivate
 * \brief The UpdateSmsChannelResponsePrivate class provides private implementation for UpdateSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsChannelResponsePrivate object with public implementation \a q.
 */
UpdateSmsChannelResponsePrivate::UpdateSmsChannelResponsePrivate(
    UpdateSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSmsChannel response element from \a xml.
 */
void UpdateSmsChannelResponsePrivate::parseUpdateSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSmsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

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

#include "deleteapnsvoipchannelresponse.h"
#include "deleteapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelResponse
 * \brief The DeleteApnsVoipChannelResponse class provides an interace for Pinpoint DeleteApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * Constructs a DeleteApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsVoipChannelResponse::DeleteApnsVoipChannelResponse(
        const DeleteApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsVoipChannelRequest * DeleteApnsVoipChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipChannelResponse);
    return static_cast<const DeleteApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsVoipChannel \a response.
 */
void DeleteApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelResponsePrivate
 * \brief The DeleteApnsVoipChannelResponsePrivate class provides private implementation for DeleteApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsVoipChannelResponsePrivate::DeleteApnsVoipChannelResponsePrivate(
    DeleteApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsVoipChannel response element from \a xml.
 */
void DeleteApnsVoipChannelResponsePrivate::parseDeleteApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

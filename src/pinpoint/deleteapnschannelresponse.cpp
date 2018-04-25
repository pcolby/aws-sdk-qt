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

#include "deleteapnschannelresponse.h"
#include "deleteapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelResponse
 * \brief The DeleteApnsChannelResponse class provides an interace for Pinpoint DeleteApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsChannel
 */

/*!
 * Constructs a DeleteApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsChannelResponse::DeleteApnsChannelResponse(
        const DeleteApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsChannelRequest * DeleteApnsChannelResponse::request() const
{
    Q_D(const DeleteApnsChannelResponse);
    return static_cast<const DeleteApnsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsChannel \a response.
 */
void DeleteApnsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelResponsePrivate
 * \brief The DeleteApnsChannelResponsePrivate class provides private implementation for DeleteApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsChannelResponsePrivate::DeleteApnsChannelResponsePrivate(
    DeleteApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsChannel response element from \a xml.
 */
void DeleteApnsChannelResponsePrivate::parseDeleteApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

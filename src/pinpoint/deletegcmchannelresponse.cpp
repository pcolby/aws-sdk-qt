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

#include "deletegcmchannelresponse.h"
#include "deletegcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelResponse
 * \brief The DeleteGcmChannelResponse class provides an interace for Pinpoint DeleteGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteGcmChannel
 */

/*!
 * Constructs a DeleteGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGcmChannelResponse::DeleteGcmChannelResponse(
        const DeleteGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteGcmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGcmChannelRequest * DeleteGcmChannelResponse::request() const
{
    Q_D(const DeleteGcmChannelResponse);
    return static_cast<const DeleteGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteGcmChannel \a response.
 */
void DeleteGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelResponsePrivate
 * \brief The DeleteGcmChannelResponsePrivate class provides private implementation for DeleteGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteGcmChannelResponsePrivate object with public implementation \a q.
 */
DeleteGcmChannelResponsePrivate::DeleteGcmChannelResponsePrivate(
    DeleteGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteGcmChannel response element from \a xml.
 */
void DeleteGcmChannelResponsePrivate::parseDeleteGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

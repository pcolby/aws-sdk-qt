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

#include "deletesmschannelresponse.h"
#include "deletesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelResponse
 * \brief The DeleteSmsChannelResponse class provides an interace for Pinpoint DeleteSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteSmsChannel
 */

/*!
 * Constructs a DeleteSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSmsChannelResponse::DeleteSmsChannelResponse(
        const DeleteSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSmsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSmsChannelRequest * DeleteSmsChannelResponse::request() const
{
    Q_D(const DeleteSmsChannelResponse);
    return static_cast<const DeleteSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSmsChannel \a response.
 */
void DeleteSmsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelResponsePrivate
 * \brief The DeleteSmsChannelResponsePrivate class provides private implementation for DeleteSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsChannelResponsePrivate object with public implementation \a q.
 */
DeleteSmsChannelResponsePrivate::DeleteSmsChannelResponsePrivate(
    DeleteSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSmsChannel response element from \a xml.
 */
void DeleteSmsChannelResponsePrivate::parseDeleteSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSmsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

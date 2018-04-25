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

#include "deleteadmchannelresponse.h"
#include "deleteadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelResponse
 * \brief The DeleteAdmChannelResponse class provides an interace for Pinpoint DeleteAdmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteAdmChannel
 */

/*!
 * Constructs a DeleteAdmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAdmChannelResponse::DeleteAdmChannelResponse(
        const DeleteAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteAdmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteAdmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAdmChannelRequest * DeleteAdmChannelResponse::request() const
{
    Q_D(const DeleteAdmChannelResponse);
    return static_cast<const DeleteAdmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteAdmChannel \a response.
 */
void DeleteAdmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelResponsePrivate
 * \brief The DeleteAdmChannelResponsePrivate class provides private implementation for DeleteAdmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAdmChannelResponsePrivate object with public implementation \a q.
 */
DeleteAdmChannelResponsePrivate::DeleteAdmChannelResponsePrivate(
    DeleteAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteAdmChannel response element from \a xml.
 */
void DeleteAdmChannelResponsePrivate::parseDeleteAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAdmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

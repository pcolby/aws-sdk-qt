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

#include "getgcmchannelresponse.h"
#include "getgcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetGcmChannelResponse
 * \brief The GetGcmChannelResponse class provides an interace for Pinpoint GetGcmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getGcmChannel
 */

/*!
 * Constructs a GetGcmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetGcmChannelResponse::GetGcmChannelResponse(
        const GetGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetGcmChannelResponsePrivate(this), parent)
{
    setRequest(new GetGcmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGcmChannelRequest * GetGcmChannelResponse::request() const
{
    Q_D(const GetGcmChannelResponse);
    return static_cast<const GetGcmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetGcmChannel \a response.
 */
void GetGcmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGcmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetGcmChannelResponsePrivate
 * \brief The GetGcmChannelResponsePrivate class provides private implementation for GetGcmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetGcmChannelResponsePrivate object with public implementation \a q.
 */
GetGcmChannelResponsePrivate::GetGcmChannelResponsePrivate(
    GetGcmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetGcmChannel response element from \a xml.
 */
void GetGcmChannelResponsePrivate::parseGetGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGcmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

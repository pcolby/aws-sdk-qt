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

#include "getapnsvoipchannelresponse.h"
#include "getapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelResponse
 * \brief The GetApnsVoipChannelResponse class provides an interace for Pinpoint GetApnsVoipChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * Constructs a GetApnsVoipChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsVoipChannelResponse::GetApnsVoipChannelResponse(
        const GetApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsVoipChannelRequest * GetApnsVoipChannelResponse::request() const
{
    Q_D(const GetApnsVoipChannelResponse);
    return static_cast<const GetApnsVoipChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsVoipChannel \a response.
 */
void GetApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelResponsePrivate
 * \brief The GetApnsVoipChannelResponsePrivate class provides private implementation for GetApnsVoipChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipChannelResponsePrivate object with public implementation \a q.
 */
GetApnsVoipChannelResponsePrivate::GetApnsVoipChannelResponsePrivate(
    GetApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsVoipChannel response element from \a xml.
 */
void GetApnsVoipChannelResponsePrivate::parseGetApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

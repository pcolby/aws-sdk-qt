/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getapnschannelresponse.h"
#include "getapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsChannelResponse
 * \brief The GetApnsChannelResponse class provides an interace for Pinpoint GetApnsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsChannel
 */

/*!
 * Constructs a GetApnsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsChannelResponse::GetApnsChannelResponse(
        const GetApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsChannelRequest * GetApnsChannelResponse::request() const
{
    Q_D(const GetApnsChannelResponse);
    return static_cast<const GetApnsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsChannel \a response.
 */
void GetApnsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApnsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsChannelResponsePrivate
 * \brief The GetApnsChannelResponsePrivate class provides private implementation for GetApnsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsChannelResponsePrivate object with public implementation \a q.
 */
GetApnsChannelResponsePrivate::GetApnsChannelResponsePrivate(
    GetApnsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsChannel response element from \a xml.
 */
void GetApnsChannelResponsePrivate::parseGetApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

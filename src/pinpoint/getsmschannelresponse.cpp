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

#include "getsmschannelresponse.h"
#include "getsmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsChannelResponse
 * \brief The GetSmsChannelResponse class provides an interace for Pinpoint GetSmsChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsChannel
 */

/*!
 * Constructs a GetSmsChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetSmsChannelResponse::GetSmsChannelResponse(
        const GetSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSmsChannelResponsePrivate(this), parent)
{
    setRequest(new GetSmsChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSmsChannelRequest * GetSmsChannelResponse::request() const
{
    Q_D(const GetSmsChannelResponse);
    return static_cast<const GetSmsChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSmsChannel \a response.
 */
void GetSmsChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSmsChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSmsChannelResponsePrivate
 * \brief The GetSmsChannelResponsePrivate class provides private implementation for GetSmsChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsChannelResponsePrivate object with public implementation \a q.
 */
GetSmsChannelResponsePrivate::GetSmsChannelResponsePrivate(
    GetSmsChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSmsChannel response element from \a xml.
 */
void GetSmsChannelResponsePrivate::parseGetSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSmsChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

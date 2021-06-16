/*
    Copyright 2013-2021 Paul Colby

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

#include "getapnssandboxchannelresponse.h"
#include "getapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelResponse
 * \brief The GetApnsSandboxChannelResponse class provides an interace for Pinpoint GetApnsSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsSandboxChannel
 */

/*!
 * Constructs a GetApnsSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetApnsSandboxChannelResponse::GetApnsSandboxChannelResponse(
        const GetApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApnsSandboxChannelRequest * GetApnsSandboxChannelResponse::request() const
{
    Q_D(const GetApnsSandboxChannelResponse);
    return static_cast<const GetApnsSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApnsSandboxChannel \a response.
 */
void GetApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelResponsePrivate
 * \brief The GetApnsSandboxChannelResponsePrivate class provides private implementation for GetApnsSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsSandboxChannelResponsePrivate object with public implementation \a q.
 */
GetApnsSandboxChannelResponsePrivate::GetApnsSandboxChannelResponsePrivate(
    GetApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApnsSandboxChannel response element from \a xml.
 */
void GetApnsSandboxChannelResponsePrivate::parseGetApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsSandboxChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

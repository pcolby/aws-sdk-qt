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

#include "getadmchannelresponse.h"
#include "getadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAdmChannelResponse
 * \brief The GetAdmChannelResponse class provides an interace for Pinpoint GetAdmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getAdmChannel
 */

/*!
 * Constructs a GetAdmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetAdmChannelResponse::GetAdmChannelResponse(
        const GetAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAdmChannelResponsePrivate(this), parent)
{
    setRequest(new GetAdmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAdmChannelRequest * GetAdmChannelResponse::request() const
{
    Q_D(const GetAdmChannelResponse);
    return static_cast<const GetAdmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetAdmChannel \a response.
 */
void GetAdmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAdmChannelResponsePrivate
 * \brief The GetAdmChannelResponsePrivate class provides private implementation for GetAdmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAdmChannelResponsePrivate object with public implementation \a q.
 */
GetAdmChannelResponsePrivate::GetAdmChannelResponsePrivate(
    GetAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetAdmChannel response element from \a xml.
 */
void GetAdmChannelResponsePrivate::parseGetAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

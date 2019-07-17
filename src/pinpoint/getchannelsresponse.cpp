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

#include "getchannelsresponse.h"
#include "getchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetChannelsResponse
 * \brief The GetChannelsResponse class provides an interace for Pinpoint GetChannels responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getChannels
 */

/*!
 * Constructs a GetChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelsResponse::GetChannelsResponse(
        const GetChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetChannelsResponsePrivate(this), parent)
{
    setRequest(new GetChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelsRequest * GetChannelsResponse::request() const
{
    Q_D(const GetChannelsResponse);
    return static_cast<const GetChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetChannels \a response.
 */
void GetChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetChannelsResponsePrivate
 * \brief The GetChannelsResponsePrivate class provides private implementation for GetChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetChannelsResponsePrivate object with public implementation \a q.
 */
GetChannelsResponsePrivate::GetChannelsResponsePrivate(
    GetChannelsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetChannels response element from \a xml.
 */
void GetChannelsResponsePrivate::parseGetChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

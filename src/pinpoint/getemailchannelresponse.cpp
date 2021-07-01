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

#include "getemailchannelresponse.h"
#include "getemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailChannelResponse
 * \brief The GetEmailChannelResponse class provides an interace for Pinpoint GetEmailChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEmailChannel
 */

/*!
 * Constructs a GetEmailChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetEmailChannelResponse::GetEmailChannelResponse(
        const GetEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEmailChannelResponsePrivate(this), parent)
{
    setRequest(new GetEmailChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEmailChannelRequest * GetEmailChannelResponse::request() const
{
    Q_D(const GetEmailChannelResponse);
    return static_cast<const GetEmailChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEmailChannel \a response.
 */
void GetEmailChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEmailChannelResponsePrivate
 * \brief The GetEmailChannelResponsePrivate class provides private implementation for GetEmailChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEmailChannelResponsePrivate object with public implementation \a q.
 */
GetEmailChannelResponsePrivate::GetEmailChannelResponsePrivate(
    GetEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEmailChannel response element from \a xml.
 */
void GetEmailChannelResponsePrivate::parseGetEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

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

#include "getbaiduchannelresponse.h"
#include "getbaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelResponse
 * \brief The GetBaiduChannelResponse class provides an interace for Pinpoint GetBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getBaiduChannel
 */

/*!
 * Constructs a GetBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetBaiduChannelResponse::GetBaiduChannelResponse(
        const GetBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new GetBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBaiduChannelRequest * GetBaiduChannelResponse::request() const
{
    Q_D(const GetBaiduChannelResponse);
    return static_cast<const GetBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetBaiduChannel \a response.
 */
void GetBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelResponsePrivate
 * \brief The GetBaiduChannelResponsePrivate class provides private implementation for GetBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetBaiduChannelResponsePrivate object with public implementation \a q.
 */
GetBaiduChannelResponsePrivate::GetBaiduChannelResponsePrivate(
    GetBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetBaiduChannel response element from \a xml.
 */
void GetBaiduChannelResponsePrivate::parseGetBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBaiduChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

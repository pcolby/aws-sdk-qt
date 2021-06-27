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

#include "getuserendpointsresponse.h"
#include "getuserendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsResponse
 * \brief The GetUserEndpointsResponse class provides an interace for Pinpoint GetUserEndpoints responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getUserEndpoints
 */

/*!
 * Constructs a GetUserEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserEndpointsResponse::GetUserEndpointsResponse(
        const GetUserEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetUserEndpointsResponsePrivate(this), parent)
{
    setRequest(new GetUserEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserEndpointsRequest * GetUserEndpointsResponse::request() const
{
    return static_cast<const GetUserEndpointsRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetUserEndpoints \a response.
 */
void GetUserEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsResponsePrivate
 * \brief The GetUserEndpointsResponsePrivate class provides private implementation for GetUserEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetUserEndpointsResponsePrivate object with public implementation \a q.
 */
GetUserEndpointsResponsePrivate::GetUserEndpointsResponsePrivate(
    GetUserEndpointsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetUserEndpoints response element from \a xml.
 */
void GetUserEndpointsResponsePrivate::parseGetUserEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

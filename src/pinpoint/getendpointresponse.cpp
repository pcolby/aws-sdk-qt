/*
    Copyright 2013-2020 Paul Colby

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

#include "getendpointresponse.h"
#include "getendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEndpointResponse
 * \brief The GetEndpointResponse class provides an interace for Pinpoint GetEndpoint responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEndpoint
 */

/*!
 * Constructs a GetEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetEndpointResponse::GetEndpointResponse(
        const GetEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEndpointResponsePrivate(this), parent)
{
    setRequest(new GetEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEndpointRequest * GetEndpointResponse::request() const
{
    Q_D(const GetEndpointResponse);
    return static_cast<const GetEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEndpoint \a response.
 */
void GetEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEndpointResponsePrivate
 * \brief The GetEndpointResponsePrivate class provides private implementation for GetEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEndpointResponsePrivate object with public implementation \a q.
 */
GetEndpointResponsePrivate::GetEndpointResponsePrivate(
    GetEndpointResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEndpoint response element from \a xml.
 */
void GetEndpointResponsePrivate::parseGetEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

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

#include "deleteuserendpointsresponse.h"
#include "deleteuserendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsResponse
 * \brief The DeleteUserEndpointsResponse class provides an interace for Pinpoint DeleteUserEndpoints responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteUserEndpoints
 */

/*!
 * Constructs a DeleteUserEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserEndpointsResponse::DeleteUserEndpointsResponse(
        const DeleteUserEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteUserEndpointsResponsePrivate(this), parent)
{
    setRequest(new DeleteUserEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserEndpointsRequest * DeleteUserEndpointsResponse::request() const
{
    Q_D(const DeleteUserEndpointsResponse);
    return static_cast<const DeleteUserEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteUserEndpoints \a response.
 */
void DeleteUserEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsResponsePrivate
 * \brief The DeleteUserEndpointsResponsePrivate class provides private implementation for DeleteUserEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteUserEndpointsResponsePrivate object with public implementation \a q.
 */
DeleteUserEndpointsResponsePrivate::DeleteUserEndpointsResponsePrivate(
    DeleteUserEndpointsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteUserEndpoints response element from \a xml.
 */
void DeleteUserEndpointsResponsePrivate::parseDeleteUserEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

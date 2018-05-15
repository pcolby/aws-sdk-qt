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

#include "getappsresponse.h"
#include "getappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppsResponse
 * \brief The GetAppsResponse class provides an interace for Pinpoint GetApps responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApps
 */

/*!
 * Constructs a GetAppsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppsResponse::GetAppsResponse(
        const GetAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppsResponsePrivate(this), parent)
{
    setRequest(new GetAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppsRequest * GetAppsResponse::request() const
{
    Q_D(const GetAppsResponse);
    return static_cast<const GetAppsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApps \a response.
 */
void GetAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetAppsResponsePrivate
 * \brief The GetAppsResponsePrivate class provides private implementation for GetAppsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetAppsResponsePrivate object with public implementation \a q.
 */
GetAppsResponsePrivate::GetAppsResponsePrivate(
    GetAppsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApps response element from \a xml.
 */
void GetAppsResponsePrivate::parseGetAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppsResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws

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

#include "getapplicationsettingsresponse.h"
#include "getapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsResponse
 * \brief The GetApplicationSettingsResponse class provides an interace for Pinpoint GetApplicationSettings responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApplicationSettings
 */

/*!
 * Constructs a GetApplicationSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationSettingsResponse::GetApplicationSettingsResponse(
        const GetApplicationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new GetApplicationSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationSettingsRequest * GetApplicationSettingsResponse::request() const
{
    Q_D(const GetApplicationSettingsResponse);
    return static_cast<const GetApplicationSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetApplicationSettings \a response.
 */
void GetApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsResponsePrivate
 * \brief The GetApplicationSettingsResponsePrivate class provides private implementation for GetApplicationSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApplicationSettingsResponsePrivate object with public implementation \a q.
 */
GetApplicationSettingsResponsePrivate::GetApplicationSettingsResponsePrivate(
    GetApplicationSettingsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetApplicationSettings response element from \a xml.
 */
void GetApplicationSettingsResponsePrivate::parseGetApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws

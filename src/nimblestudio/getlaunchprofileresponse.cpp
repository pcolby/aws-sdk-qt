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

#include "getlaunchprofileresponse.h"
#include "getlaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileResponse
 * \brief The GetLaunchProfileResponse class provides an interace for NimbleStudio GetLaunchProfile responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfile
 */

/*!
 * Constructs a GetLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileResponse::GetLaunchProfileResponse(
        const GetLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileRequest * GetLaunchProfileResponse::request() const
{
    Q_D(const GetLaunchProfileResponse);
    return static_cast<const GetLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetLaunchProfile \a response.
 */
void GetLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileResponsePrivate
 * \brief The GetLaunchProfileResponsePrivate class provides private implementation for GetLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileResponsePrivate::GetLaunchProfileResponsePrivate(
    GetLaunchProfileResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetLaunchProfile response element from \a xml.
 */
void GetLaunchProfileResponsePrivate::parseGetLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

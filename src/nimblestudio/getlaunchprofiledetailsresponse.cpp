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

#include "getlaunchprofiledetailsresponse.h"
#include "getlaunchprofiledetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileDetailsResponse
 * \brief The GetLaunchProfileDetailsResponse class provides an interace for NimbleStudio GetLaunchProfileDetails responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileDetails
 */

/*!
 * Constructs a GetLaunchProfileDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileDetailsResponse::GetLaunchProfileDetailsResponse(
        const GetLaunchProfileDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetLaunchProfileDetailsResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileDetailsRequest * GetLaunchProfileDetailsResponse::request() const
{
    Q_D(const GetLaunchProfileDetailsResponse);
    return static_cast<const GetLaunchProfileDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetLaunchProfileDetails \a response.
 */
void GetLaunchProfileDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileDetailsResponsePrivate
 * \brief The GetLaunchProfileDetailsResponsePrivate class provides private implementation for GetLaunchProfileDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileDetailsResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileDetailsResponsePrivate::GetLaunchProfileDetailsResponsePrivate(
    GetLaunchProfileDetailsResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetLaunchProfileDetails response element from \a xml.
 */
void GetLaunchProfileDetailsResponsePrivate::parseGetLaunchProfileDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

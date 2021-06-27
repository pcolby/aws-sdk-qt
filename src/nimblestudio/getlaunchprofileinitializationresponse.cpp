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

#include "getlaunchprofileinitializationresponse.h"
#include "getlaunchprofileinitializationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileInitializationResponse
 * \brief The GetLaunchProfileInitializationResponse class provides an interace for NimbleStudio GetLaunchProfileInitialization responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileInitialization
 */

/*!
 * Constructs a GetLaunchProfileInitializationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileInitializationResponse::GetLaunchProfileInitializationResponse(
        const GetLaunchProfileInitializationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetLaunchProfileInitializationResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileInitializationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileInitializationRequest * GetLaunchProfileInitializationResponse::request() const
{
    return static_cast<const GetLaunchProfileInitializationRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetLaunchProfileInitialization \a response.
 */
void GetLaunchProfileInitializationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileInitializationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileInitializationResponsePrivate
 * \brief The GetLaunchProfileInitializationResponsePrivate class provides private implementation for GetLaunchProfileInitializationResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileInitializationResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileInitializationResponsePrivate::GetLaunchProfileInitializationResponsePrivate(
    GetLaunchProfileInitializationResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetLaunchProfileInitialization response element from \a xml.
 */
void GetLaunchProfileInitializationResponsePrivate::parseGetLaunchProfileInitializationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileInitializationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

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

#include "getlaunchprofilememberresponse.h"
#include "getlaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileMemberResponse
 * \brief The GetLaunchProfileMemberResponse class provides an interace for NimbleStudio GetLaunchProfileMember responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileMember
 */

/*!
 * Constructs a GetLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileMemberResponse::GetLaunchProfileMemberResponse(
        const GetLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileMemberRequest * GetLaunchProfileMemberResponse::request() const
{
    return static_cast<const GetLaunchProfileMemberRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetLaunchProfileMember \a response.
 */
void GetLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileMemberResponsePrivate
 * \brief The GetLaunchProfileMemberResponsePrivate class provides private implementation for GetLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileMemberResponsePrivate::GetLaunchProfileMemberResponsePrivate(
    GetLaunchProfileMemberResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetLaunchProfileMember response element from \a xml.
 */
void GetLaunchProfileMemberResponsePrivate::parseGetLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

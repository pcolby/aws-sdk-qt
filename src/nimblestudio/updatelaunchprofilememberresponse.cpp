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

#include "updatelaunchprofilememberresponse.h"
#include "updatelaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileMemberResponse
 * \brief The UpdateLaunchProfileMemberResponse class provides an interace for NimbleStudio UpdateLaunchProfileMember responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateLaunchProfileMember
 */

/*!
 * Constructs a UpdateLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchProfileMemberResponse::UpdateLaunchProfileMemberResponse(
        const UpdateLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new UpdateLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchProfileMemberRequest * UpdateLaunchProfileMemberResponse::request() const
{
    Q_D(const UpdateLaunchProfileMemberResponse);
    return static_cast<const UpdateLaunchProfileMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio UpdateLaunchProfileMember \a response.
 */
void UpdateLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileMemberResponsePrivate
 * \brief The UpdateLaunchProfileMemberResponsePrivate class provides private implementation for UpdateLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
UpdateLaunchProfileMemberResponsePrivate::UpdateLaunchProfileMemberResponsePrivate(
    UpdateLaunchProfileMemberResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio UpdateLaunchProfileMember response element from \a xml.
 */
void UpdateLaunchProfileMemberResponsePrivate::parseUpdateLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

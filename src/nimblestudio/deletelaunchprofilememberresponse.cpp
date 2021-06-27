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

#include "deletelaunchprofilememberresponse.h"
#include "deletelaunchprofilememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileMemberResponse
 * \brief The DeleteLaunchProfileMemberResponse class provides an interace for NimbleStudio DeleteLaunchProfileMember responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteLaunchProfileMember
 */

/*!
 * Constructs a DeleteLaunchProfileMemberResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchProfileMemberResponse::DeleteLaunchProfileMemberResponse(
        const DeleteLaunchProfileMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteLaunchProfileMemberResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchProfileMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchProfileMemberRequest * DeleteLaunchProfileMemberResponse::request() const
{
    return static_cast<const DeleteLaunchProfileMemberRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteLaunchProfileMember \a response.
 */
void DeleteLaunchProfileMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchProfileMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileMemberResponsePrivate
 * \brief The DeleteLaunchProfileMemberResponsePrivate class provides private implementation for DeleteLaunchProfileMemberResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteLaunchProfileMemberResponsePrivate object with public implementation \a q.
 */
DeleteLaunchProfileMemberResponsePrivate::DeleteLaunchProfileMemberResponsePrivate(
    DeleteLaunchProfileMemberResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteLaunchProfileMember response element from \a xml.
 */
void DeleteLaunchProfileMemberResponsePrivate::parseDeleteLaunchProfileMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchProfileMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

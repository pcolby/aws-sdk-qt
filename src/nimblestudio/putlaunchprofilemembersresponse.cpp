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

#include "putlaunchprofilemembersresponse.h"
#include "putlaunchprofilemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::PutLaunchProfileMembersResponse
 * \brief The PutLaunchProfileMembersResponse class provides an interace for NimbleStudio PutLaunchProfileMembers responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::putLaunchProfileMembers
 */

/*!
 * Constructs a PutLaunchProfileMembersResponse object for \a reply to \a request, with parent \a parent.
 */
PutLaunchProfileMembersResponse::PutLaunchProfileMembersResponse(
        const PutLaunchProfileMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new PutLaunchProfileMembersResponsePrivate(this), parent)
{
    setRequest(new PutLaunchProfileMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLaunchProfileMembersRequest * PutLaunchProfileMembersResponse::request() const
{
    Q_D(const PutLaunchProfileMembersResponse);
    return static_cast<const PutLaunchProfileMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio PutLaunchProfileMembers \a response.
 */
void PutLaunchProfileMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLaunchProfileMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::PutLaunchProfileMembersResponsePrivate
 * \brief The PutLaunchProfileMembersResponsePrivate class provides private implementation for PutLaunchProfileMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a PutLaunchProfileMembersResponsePrivate object with public implementation \a q.
 */
PutLaunchProfileMembersResponsePrivate::PutLaunchProfileMembersResponsePrivate(
    PutLaunchProfileMembersResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio PutLaunchProfileMembers response element from \a xml.
 */
void PutLaunchProfileMembersResponsePrivate::parsePutLaunchProfileMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLaunchProfileMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

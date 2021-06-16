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

#include "listlaunchprofilesresponse.h"
#include "listlaunchprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfilesResponse
 * \brief The ListLaunchProfilesResponse class provides an interace for NimbleStudio ListLaunchProfiles responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listLaunchProfiles
 */

/*!
 * Constructs a ListLaunchProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchProfilesResponse::ListLaunchProfilesResponse(
        const ListLaunchProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListLaunchProfilesResponsePrivate(this), parent)
{
    setRequest(new ListLaunchProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchProfilesRequest * ListLaunchProfilesResponse::request() const
{
    Q_D(const ListLaunchProfilesResponse);
    return static_cast<const ListLaunchProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListLaunchProfiles \a response.
 */
void ListLaunchProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfilesResponsePrivate
 * \brief The ListLaunchProfilesResponsePrivate class provides private implementation for ListLaunchProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListLaunchProfilesResponsePrivate object with public implementation \a q.
 */
ListLaunchProfilesResponsePrivate::ListLaunchProfilesResponsePrivate(
    ListLaunchProfilesResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListLaunchProfiles response element from \a xml.
 */
void ListLaunchProfilesResponsePrivate::parseListLaunchProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

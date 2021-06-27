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

#include "liststudiomembersresponse.h"
#include "liststudiomembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudioMembersResponse
 * \brief The ListStudioMembersResponse class provides an interace for NimbleStudio ListStudioMembers responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudioMembers
 */

/*!
 * Constructs a ListStudioMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioMembersResponse::ListStudioMembersResponse(
        const ListStudioMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListStudioMembersResponsePrivate(this), parent)
{
    setRequest(new ListStudioMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioMembersRequest * ListStudioMembersResponse::request() const
{
    return static_cast<const ListStudioMembersRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListStudioMembers \a response.
 */
void ListStudioMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListStudioMembersResponsePrivate
 * \brief The ListStudioMembersResponsePrivate class provides private implementation for ListStudioMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudioMembersResponsePrivate object with public implementation \a q.
 */
ListStudioMembersResponsePrivate::ListStudioMembersResponsePrivate(
    ListStudioMembersResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListStudioMembers response element from \a xml.
 */
void ListStudioMembersResponsePrivate::parseListStudioMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

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

#include "listextensionversionsresponse.h"
#include "listextensionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsResponse
 * \brief The ListExtensionVersionsResponse class provides an interace for GameSparks ListExtensionVersions responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensionVersions
 */

/*!
 * Constructs a ListExtensionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensionVersionsResponse::ListExtensionVersionsResponse(
        const ListExtensionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListExtensionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListExtensionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensionVersionsRequest * ListExtensionVersionsResponse::request() const
{
    Q_D(const ListExtensionVersionsResponse);
    return static_cast<const ListExtensionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListExtensionVersions \a response.
 */
void ListExtensionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsResponsePrivate
 * \brief The ListExtensionVersionsResponsePrivate class provides private implementation for ListExtensionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionVersionsResponsePrivate object with public implementation \a q.
 */
ListExtensionVersionsResponsePrivate::ListExtensionVersionsResponsePrivate(
    ListExtensionVersionsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListExtensionVersions response element from \a xml.
 */
void ListExtensionVersionsResponsePrivate::parseListExtensionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws

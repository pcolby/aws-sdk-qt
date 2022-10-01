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

#include "listextensionsresponse.h"
#include "listextensionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionsResponse
 * \brief The ListExtensionsResponse class provides an interace for GameSparks ListExtensions responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensions
 */

/*!
 * Constructs a ListExtensionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensionsResponse::ListExtensionsResponse(
        const ListExtensionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListExtensionsResponsePrivate(this), parent)
{
    setRequest(new ListExtensionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensionsRequest * ListExtensionsResponse::request() const
{
    Q_D(const ListExtensionsResponse);
    return static_cast<const ListExtensionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListExtensions \a response.
 */
void ListExtensionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListExtensionsResponsePrivate
 * \brief The ListExtensionsResponsePrivate class provides private implementation for ListExtensionsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionsResponsePrivate object with public implementation \a q.
 */
ListExtensionsResponsePrivate::ListExtensionsResponsePrivate(
    ListExtensionsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListExtensions response element from \a xml.
 */
void ListExtensionsResponsePrivate::parseListExtensionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws

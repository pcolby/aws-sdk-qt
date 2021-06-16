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

#include "listeulasresponse.h"
#include "listeulasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListEulasResponse
 * \brief The ListEulasResponse class provides an interace for NimbleStudio ListEulas responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listEulas
 */

/*!
 * Constructs a ListEulasResponse object for \a reply to \a request, with parent \a parent.
 */
ListEulasResponse::ListEulasResponse(
        const ListEulasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListEulasResponsePrivate(this), parent)
{
    setRequest(new ListEulasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEulasRequest * ListEulasResponse::request() const
{
    Q_D(const ListEulasResponse);
    return static_cast<const ListEulasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListEulas \a response.
 */
void ListEulasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEulasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListEulasResponsePrivate
 * \brief The ListEulasResponsePrivate class provides private implementation for ListEulasResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListEulasResponsePrivate object with public implementation \a q.
 */
ListEulasResponsePrivate::ListEulasResponsePrivate(
    ListEulasResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListEulas response element from \a xml.
 */
void ListEulasResponsePrivate::parseListEulasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEulasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

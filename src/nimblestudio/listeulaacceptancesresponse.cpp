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

#include "listeulaacceptancesresponse.h"
#include "listeulaacceptancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListEulaAcceptancesResponse
 * \brief The ListEulaAcceptancesResponse class provides an interace for NimbleStudio ListEulaAcceptances responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listEulaAcceptances
 */

/*!
 * Constructs a ListEulaAcceptancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEulaAcceptancesResponse::ListEulaAcceptancesResponse(
        const ListEulaAcceptancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListEulaAcceptancesResponsePrivate(this), parent)
{
    setRequest(new ListEulaAcceptancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEulaAcceptancesRequest * ListEulaAcceptancesResponse::request() const
{
    Q_D(const ListEulaAcceptancesResponse);
    return static_cast<const ListEulaAcceptancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListEulaAcceptances \a response.
 */
void ListEulaAcceptancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEulaAcceptancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListEulaAcceptancesResponsePrivate
 * \brief The ListEulaAcceptancesResponsePrivate class provides private implementation for ListEulaAcceptancesResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListEulaAcceptancesResponsePrivate object with public implementation \a q.
 */
ListEulaAcceptancesResponsePrivate::ListEulaAcceptancesResponsePrivate(
    ListEulaAcceptancesResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListEulaAcceptances response element from \a xml.
 */
void ListEulaAcceptancesResponsePrivate::parseListEulaAcceptancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEulaAcceptancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws

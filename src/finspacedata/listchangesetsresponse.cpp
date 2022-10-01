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

#include "listchangesetsresponse.h"
#include "listchangesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListChangesetsResponse
 * \brief The ListChangesetsResponse class provides an interace for FinspaceData ListChangesets responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listChangesets
 */

/*!
 * Constructs a ListChangesetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChangesetsResponse::ListChangesetsResponse(
        const ListChangesetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListChangesetsResponsePrivate(this), parent)
{
    setRequest(new ListChangesetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChangesetsRequest * ListChangesetsResponse::request() const
{
    Q_D(const ListChangesetsResponse);
    return static_cast<const ListChangesetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListChangesets \a response.
 */
void ListChangesetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChangesetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListChangesetsResponsePrivate
 * \brief The ListChangesetsResponsePrivate class provides private implementation for ListChangesetsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListChangesetsResponsePrivate object with public implementation \a q.
 */
ListChangesetsResponsePrivate::ListChangesetsResponsePrivate(
    ListChangesetsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListChangesets response element from \a xml.
 */
void ListChangesetsResponsePrivate::parseListChangesetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChangesetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws

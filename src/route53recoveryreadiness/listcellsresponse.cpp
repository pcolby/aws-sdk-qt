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

#include "listcellsresponse.h"
#include "listcellsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsResponse
 * \brief The ListCellsResponse class provides an interace for Route53RecoveryReadiness ListCells responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listCells
 */

/*!
 * Constructs a ListCellsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCellsResponse::ListCellsResponse(
        const ListCellsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListCellsResponsePrivate(this), parent)
{
    setRequest(new ListCellsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCellsRequest * ListCellsResponse::request() const
{
    Q_D(const ListCellsResponse);
    return static_cast<const ListCellsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListCells \a response.
 */
void ListCellsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCellsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsResponsePrivate
 * \brief The ListCellsResponsePrivate class provides private implementation for ListCellsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListCellsResponsePrivate object with public implementation \a q.
 */
ListCellsResponsePrivate::ListCellsResponsePrivate(
    ListCellsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListCells response element from \a xml.
 */
void ListCellsResponsePrivate::parseListCellsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCellsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws

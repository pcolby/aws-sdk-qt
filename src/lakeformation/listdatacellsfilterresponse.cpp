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

#include "listdatacellsfilterresponse.h"
#include "listdatacellsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterResponse
 * \brief The ListDataCellsFilterResponse class provides an interace for LakeFormation ListDataCellsFilter responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listDataCellsFilter
 */

/*!
 * Constructs a ListDataCellsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataCellsFilterResponse::ListDataCellsFilterResponse(
        const ListDataCellsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListDataCellsFilterResponsePrivate(this), parent)
{
    setRequest(new ListDataCellsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataCellsFilterRequest * ListDataCellsFilterResponse::request() const
{
    Q_D(const ListDataCellsFilterResponse);
    return static_cast<const ListDataCellsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListDataCellsFilter \a response.
 */
void ListDataCellsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataCellsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterResponsePrivate
 * \brief The ListDataCellsFilterResponsePrivate class provides private implementation for ListDataCellsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListDataCellsFilterResponsePrivate object with public implementation \a q.
 */
ListDataCellsFilterResponsePrivate::ListDataCellsFilterResponsePrivate(
    ListDataCellsFilterResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListDataCellsFilter response element from \a xml.
 */
void ListDataCellsFilterResponsePrivate::parseListDataCellsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataCellsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

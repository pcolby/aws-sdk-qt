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

#include "deletedatacellsfilterresponse.h"
#include "deletedatacellsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterResponse
 * \brief The DeleteDataCellsFilterResponse class provides an interace for LakeFormation DeleteDataCellsFilter responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteDataCellsFilter
 */

/*!
 * Constructs a DeleteDataCellsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataCellsFilterResponse::DeleteDataCellsFilterResponse(
        const DeleteDataCellsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteDataCellsFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteDataCellsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataCellsFilterRequest * DeleteDataCellsFilterResponse::request() const
{
    Q_D(const DeleteDataCellsFilterResponse);
    return static_cast<const DeleteDataCellsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteDataCellsFilter \a response.
 */
void DeleteDataCellsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataCellsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterResponsePrivate
 * \brief The DeleteDataCellsFilterResponsePrivate class provides private implementation for DeleteDataCellsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteDataCellsFilterResponsePrivate object with public implementation \a q.
 */
DeleteDataCellsFilterResponsePrivate::DeleteDataCellsFilterResponsePrivate(
    DeleteDataCellsFilterResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteDataCellsFilter response element from \a xml.
 */
void DeleteDataCellsFilterResponsePrivate::parseDeleteDataCellsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataCellsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

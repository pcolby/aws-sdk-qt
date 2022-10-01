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

#include "listtablestorageoptimizersresponse.h"
#include "listtablestorageoptimizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersResponse
 * \brief The ListTableStorageOptimizersResponse class provides an interace for LakeFormation ListTableStorageOptimizers responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listTableStorageOptimizers
 */

/*!
 * Constructs a ListTableStorageOptimizersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableStorageOptimizersResponse::ListTableStorageOptimizersResponse(
        const ListTableStorageOptimizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListTableStorageOptimizersResponsePrivate(this), parent)
{
    setRequest(new ListTableStorageOptimizersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableStorageOptimizersRequest * ListTableStorageOptimizersResponse::request() const
{
    Q_D(const ListTableStorageOptimizersResponse);
    return static_cast<const ListTableStorageOptimizersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListTableStorageOptimizers \a response.
 */
void ListTableStorageOptimizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableStorageOptimizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersResponsePrivate
 * \brief The ListTableStorageOptimizersResponsePrivate class provides private implementation for ListTableStorageOptimizersResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListTableStorageOptimizersResponsePrivate object with public implementation \a q.
 */
ListTableStorageOptimizersResponsePrivate::ListTableStorageOptimizersResponsePrivate(
    ListTableStorageOptimizersResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListTableStorageOptimizers response element from \a xml.
 */
void ListTableStorageOptimizersResponsePrivate::parseListTableStorageOptimizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableStorageOptimizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

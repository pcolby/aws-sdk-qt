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

#include "listresourcesresponse.h"
#include "listresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListResourcesResponse
 * \brief The ListResourcesResponse class provides an interace for LakeFormation ListResources responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::listResources
 */

/*!
 * Constructs a ListResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesResponse::ListResourcesResponse(
        const ListResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListResourcesResponsePrivate(this), parent)
{
    setRequest(new ListResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesRequest * ListResourcesResponse::request() const
{
    return static_cast<const ListResourcesRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListResources \a response.
 */
void ListResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListResourcesResponsePrivate
 * \brief The ListResourcesResponsePrivate class provides private implementation for ListResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListResourcesResponsePrivate object with public implementation \a q.
 */
ListResourcesResponsePrivate::ListResourcesResponsePrivate(
    ListResourcesResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListResources response element from \a xml.
 */
void ListResourcesResponsePrivate::parseListResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

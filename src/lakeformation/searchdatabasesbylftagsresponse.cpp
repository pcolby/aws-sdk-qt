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

#include "searchdatabasesbylftagsresponse.h"
#include "searchdatabasesbylftagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::SearchDatabasesByLFTagsResponse
 * \brief The SearchDatabasesByLFTagsResponse class provides an interace for LakeFormation SearchDatabasesByLFTags responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::searchDatabasesByLFTags
 */

/*!
 * Constructs a SearchDatabasesByLFTagsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchDatabasesByLFTagsResponse::SearchDatabasesByLFTagsResponse(
        const SearchDatabasesByLFTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new SearchDatabasesByLFTagsResponsePrivate(this), parent)
{
    setRequest(new SearchDatabasesByLFTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchDatabasesByLFTagsRequest * SearchDatabasesByLFTagsResponse::request() const
{
    return static_cast<const SearchDatabasesByLFTagsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation SearchDatabasesByLFTags \a response.
 */
void SearchDatabasesByLFTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchDatabasesByLFTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::SearchDatabasesByLFTagsResponsePrivate
 * \brief The SearchDatabasesByLFTagsResponsePrivate class provides private implementation for SearchDatabasesByLFTagsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a SearchDatabasesByLFTagsResponsePrivate object with public implementation \a q.
 */
SearchDatabasesByLFTagsResponsePrivate::SearchDatabasesByLFTagsResponsePrivate(
    SearchDatabasesByLFTagsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation SearchDatabasesByLFTags response element from \a xml.
 */
void SearchDatabasesByLFTagsResponsePrivate::parseSearchDatabasesByLFTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDatabasesByLFTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

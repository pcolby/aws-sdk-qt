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

#include "searchtablesbylftagsresponse.h"
#include "searchtablesbylftagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::SearchTablesByLFTagsResponse
 * \brief The SearchTablesByLFTagsResponse class provides an interace for LakeFormation SearchTablesByLFTags responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::searchTablesByLFTags
 */

/*!
 * Constructs a SearchTablesByLFTagsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchTablesByLFTagsResponse::SearchTablesByLFTagsResponse(
        const SearchTablesByLFTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new SearchTablesByLFTagsResponsePrivate(this), parent)
{
    setRequest(new SearchTablesByLFTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchTablesByLFTagsRequest * SearchTablesByLFTagsResponse::request() const
{
    Q_D(const SearchTablesByLFTagsResponse);
    return static_cast<const SearchTablesByLFTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation SearchTablesByLFTags \a response.
 */
void SearchTablesByLFTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchTablesByLFTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::SearchTablesByLFTagsResponsePrivate
 * \brief The SearchTablesByLFTagsResponsePrivate class provides private implementation for SearchTablesByLFTagsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a SearchTablesByLFTagsResponsePrivate object with public implementation \a q.
 */
SearchTablesByLFTagsResponsePrivate::SearchTablesByLFTagsResponsePrivate(
    SearchTablesByLFTagsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation SearchTablesByLFTags response element from \a xml.
 */
void SearchTablesByLFTagsResponsePrivate::parseSearchTablesByLFTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchTablesByLFTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws

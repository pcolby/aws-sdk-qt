// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
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
    Q_D(const SearchDatabasesByLFTagsResponse);
    return static_cast<const SearchDatabasesByLFTagsRequest *>(d->request);
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

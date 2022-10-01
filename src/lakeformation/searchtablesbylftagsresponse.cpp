// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
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

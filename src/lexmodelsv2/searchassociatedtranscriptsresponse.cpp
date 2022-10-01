// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchassociatedtranscriptsresponse.h"
#include "searchassociatedtranscriptsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::SearchAssociatedTranscriptsResponse
 * \brief The SearchAssociatedTranscriptsResponse class provides an interace for LexModelsV2 SearchAssociatedTranscripts responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::searchAssociatedTranscripts
 */

/*!
 * Constructs a SearchAssociatedTranscriptsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchAssociatedTranscriptsResponse::SearchAssociatedTranscriptsResponse(
        const SearchAssociatedTranscriptsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new SearchAssociatedTranscriptsResponsePrivate(this), parent)
{
    setRequest(new SearchAssociatedTranscriptsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchAssociatedTranscriptsRequest * SearchAssociatedTranscriptsResponse::request() const
{
    Q_D(const SearchAssociatedTranscriptsResponse);
    return static_cast<const SearchAssociatedTranscriptsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 SearchAssociatedTranscripts \a response.
 */
void SearchAssociatedTranscriptsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchAssociatedTranscriptsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::SearchAssociatedTranscriptsResponsePrivate
 * \brief The SearchAssociatedTranscriptsResponsePrivate class provides private implementation for SearchAssociatedTranscriptsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a SearchAssociatedTranscriptsResponsePrivate object with public implementation \a q.
 */
SearchAssociatedTranscriptsResponsePrivate::SearchAssociatedTranscriptsResponsePrivate(
    SearchAssociatedTranscriptsResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 SearchAssociatedTranscripts response element from \a xml.
 */
void SearchAssociatedTranscriptsResponsePrivate::parseSearchAssociatedTranscriptsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchAssociatedTranscriptsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws

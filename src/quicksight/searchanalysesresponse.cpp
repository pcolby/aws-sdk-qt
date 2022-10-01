// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchanalysesresponse.h"
#include "searchanalysesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchAnalysesResponse
 * \brief The SearchAnalysesResponse class provides an interace for QuickSight SearchAnalyses responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchAnalyses
 */

/*!
 * Constructs a SearchAnalysesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchAnalysesResponse::SearchAnalysesResponse(
        const SearchAnalysesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new SearchAnalysesResponsePrivate(this), parent)
{
    setRequest(new SearchAnalysesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchAnalysesRequest * SearchAnalysesResponse::request() const
{
    Q_D(const SearchAnalysesResponse);
    return static_cast<const SearchAnalysesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight SearchAnalyses \a response.
 */
void SearchAnalysesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchAnalysesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::SearchAnalysesResponsePrivate
 * \brief The SearchAnalysesResponsePrivate class provides private implementation for SearchAnalysesResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchAnalysesResponsePrivate object with public implementation \a q.
 */
SearchAnalysesResponsePrivate::SearchAnalysesResponsePrivate(
    SearchAnalysesResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight SearchAnalyses response element from \a xml.
 */
void SearchAnalysesResponsePrivate::parseSearchAnalysesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchAnalysesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

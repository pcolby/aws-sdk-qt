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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
    return static_cast<const SearchAnalysesRequest *>(QuickSightResponse::request());
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

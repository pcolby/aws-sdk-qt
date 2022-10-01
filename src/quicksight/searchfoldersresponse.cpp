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

#include "searchfoldersresponse.h"
#include "searchfoldersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchFoldersResponse
 * \brief The SearchFoldersResponse class provides an interace for QuickSight SearchFolders responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchFolders
 */

/*!
 * Constructs a SearchFoldersResponse object for \a reply to \a request, with parent \a parent.
 */
SearchFoldersResponse::SearchFoldersResponse(
        const SearchFoldersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new SearchFoldersResponsePrivate(this), parent)
{
    setRequest(new SearchFoldersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchFoldersRequest * SearchFoldersResponse::request() const
{
    Q_D(const SearchFoldersResponse);
    return static_cast<const SearchFoldersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight SearchFolders \a response.
 */
void SearchFoldersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchFoldersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::SearchFoldersResponsePrivate
 * \brief The SearchFoldersResponsePrivate class provides private implementation for SearchFoldersResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchFoldersResponsePrivate object with public implementation \a q.
 */
SearchFoldersResponsePrivate::SearchFoldersResponsePrivate(
    SearchFoldersResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight SearchFolders response element from \a xml.
 */
void SearchFoldersResponsePrivate::parseSearchFoldersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchFoldersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

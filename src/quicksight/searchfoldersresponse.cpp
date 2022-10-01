// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

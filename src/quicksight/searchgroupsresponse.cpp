// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchgroupsresponse.h"
#include "searchgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::SearchGroupsResponse
 * \brief The SearchGroupsResponse class provides an interace for QuickSight SearchGroups responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::searchGroups
 */

/*!
 * Constructs a SearchGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchGroupsResponse::SearchGroupsResponse(
        const SearchGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new SearchGroupsResponsePrivate(this), parent)
{
    setRequest(new SearchGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchGroupsRequest * SearchGroupsResponse::request() const
{
    Q_D(const SearchGroupsResponse);
    return static_cast<const SearchGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight SearchGroups \a response.
 */
void SearchGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::SearchGroupsResponsePrivate
 * \brief The SearchGroupsResponsePrivate class provides private implementation for SearchGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a SearchGroupsResponsePrivate object with public implementation \a q.
 */
SearchGroupsResponsePrivate::SearchGroupsResponsePrivate(
    SearchGroupsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight SearchGroups response element from \a xml.
 */
void SearchGroupsResponsePrivate::parseSearchGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

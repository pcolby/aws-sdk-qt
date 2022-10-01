// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesresponse.h"
#include "listdatasourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDataSourcesResponse
 * \brief The ListDataSourcesResponse class provides an interace for AppSync ListDataSources responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDataSources
 */

/*!
 * Constructs a ListDataSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSourcesResponse::ListDataSourcesResponse(
        const ListDataSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListDataSourcesResponsePrivate(this), parent)
{
    setRequest(new ListDataSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSourcesRequest * ListDataSourcesResponse::request() const
{
    Q_D(const ListDataSourcesResponse);
    return static_cast<const ListDataSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListDataSources \a response.
 */
void ListDataSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListDataSourcesResponsePrivate
 * \brief The ListDataSourcesResponsePrivate class provides private implementation for ListDataSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListDataSourcesResponsePrivate object with public implementation \a q.
 */
ListDataSourcesResponsePrivate::ListDataSourcesResponsePrivate(
    ListDataSourcesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListDataSources response element from \a xml.
 */
void ListDataSourcesResponsePrivate::parseListDataSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

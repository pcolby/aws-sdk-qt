// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgraphqlapisresponse.h"
#include "listgraphqlapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListGraphqlApisResponse
 * \brief The ListGraphqlApisResponse class provides an interace for AppSync ListGraphqlApis responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listGraphqlApis
 */

/*!
 * Constructs a ListGraphqlApisResponse object for \a reply to \a request, with parent \a parent.
 */
ListGraphqlApisResponse::ListGraphqlApisResponse(
        const ListGraphqlApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListGraphqlApisResponsePrivate(this), parent)
{
    setRequest(new ListGraphqlApisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGraphqlApisRequest * ListGraphqlApisResponse::request() const
{
    Q_D(const ListGraphqlApisResponse);
    return static_cast<const ListGraphqlApisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListGraphqlApis \a response.
 */
void ListGraphqlApisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGraphqlApisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListGraphqlApisResponsePrivate
 * \brief The ListGraphqlApisResponsePrivate class provides private implementation for ListGraphqlApisResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListGraphqlApisResponsePrivate object with public implementation \a q.
 */
ListGraphqlApisResponsePrivate::ListGraphqlApisResponsePrivate(
    ListGraphqlApisResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListGraphqlApis response element from \a xml.
 */
void ListGraphqlApisResponsePrivate::parseListGraphqlApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGraphqlApisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

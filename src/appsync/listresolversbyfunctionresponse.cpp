// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresolversbyfunctionresponse.h"
#include "listresolversbyfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListResolversByFunctionResponse
 * \brief The ListResolversByFunctionResponse class provides an interace for AppSync ListResolversByFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listResolversByFunction
 */

/*!
 * Constructs a ListResolversByFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
ListResolversByFunctionResponse::ListResolversByFunctionResponse(
        const ListResolversByFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListResolversByFunctionResponsePrivate(this), parent)
{
    setRequest(new ListResolversByFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResolversByFunctionRequest * ListResolversByFunctionResponse::request() const
{
    Q_D(const ListResolversByFunctionResponse);
    return static_cast<const ListResolversByFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListResolversByFunction \a response.
 */
void ListResolversByFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResolversByFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListResolversByFunctionResponsePrivate
 * \brief The ListResolversByFunctionResponsePrivate class provides private implementation for ListResolversByFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListResolversByFunctionResponsePrivate object with public implementation \a q.
 */
ListResolversByFunctionResponsePrivate::ListResolversByFunctionResponsePrivate(
    ListResolversByFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListResolversByFunction response element from \a xml.
 */
void ListResolversByFunctionResponsePrivate::parseListResolversByFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResolversByFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

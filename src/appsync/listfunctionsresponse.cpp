// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctionsresponse.h"
#include "listfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListFunctionsResponse
 * \brief The ListFunctionsResponse class provides an interace for AppSync ListFunctions responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listFunctions
 */

/*!
 * Constructs a ListFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionsResponse::ListFunctionsResponse(
        const ListFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionsRequest * ListFunctionsResponse::request() const
{
    Q_D(const ListFunctionsResponse);
    return static_cast<const ListFunctionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListFunctions \a response.
 */
void ListFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListFunctionsResponsePrivate
 * \brief The ListFunctionsResponsePrivate class provides private implementation for ListFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListFunctionsResponsePrivate object with public implementation \a q.
 */
ListFunctionsResponsePrivate::ListFunctionsResponsePrivate(
    ListFunctionsResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListFunctions response element from \a xml.
 */
void ListFunctionsResponsePrivate::parseListFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

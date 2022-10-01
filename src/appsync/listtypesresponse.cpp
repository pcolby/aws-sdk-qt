// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypesresponse.h"
#include "listtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListTypesResponse
 * \brief The ListTypesResponse class provides an interace for AppSync ListTypes responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listTypes
 */

/*!
 * Constructs a ListTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTypesResponse::ListTypesResponse(
        const ListTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListTypesResponsePrivate(this), parent)
{
    setRequest(new ListTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTypesRequest * ListTypesResponse::request() const
{
    Q_D(const ListTypesResponse);
    return static_cast<const ListTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListTypes \a response.
 */
void ListTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListTypesResponsePrivate
 * \brief The ListTypesResponsePrivate class provides private implementation for ListTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListTypesResponsePrivate object with public implementation \a q.
 */
ListTypesResponsePrivate::ListTypesResponsePrivate(
    ListTypesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListTypes response element from \a xml.
 */
void ListTypesResponsePrivate::parseListTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

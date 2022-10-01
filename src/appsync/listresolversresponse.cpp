// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresolversresponse.h"
#include "listresolversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListResolversResponse
 * \brief The ListResolversResponse class provides an interace for AppSync ListResolvers responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listResolvers
 */

/*!
 * Constructs a ListResolversResponse object for \a reply to \a request, with parent \a parent.
 */
ListResolversResponse::ListResolversResponse(
        const ListResolversRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListResolversResponsePrivate(this), parent)
{
    setRequest(new ListResolversRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResolversRequest * ListResolversResponse::request() const
{
    Q_D(const ListResolversResponse);
    return static_cast<const ListResolversRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListResolvers \a response.
 */
void ListResolversResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResolversResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListResolversResponsePrivate
 * \brief The ListResolversResponsePrivate class provides private implementation for ListResolversResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListResolversResponsePrivate object with public implementation \a q.
 */
ListResolversResponsePrivate::ListResolversResponsePrivate(
    ListResolversResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListResolvers response element from \a xml.
 */
void ListResolversResponsePrivate::parseListResolversResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResolversResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

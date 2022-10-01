// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainnamesresponse.h"
#include "listdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDomainNamesResponse
 * \brief The ListDomainNamesResponse class provides an interace for AppSync ListDomainNames responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDomainNames
 */

/*!
 * Constructs a ListDomainNamesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainNamesResponse::ListDomainNamesResponse(
        const ListDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListDomainNamesResponsePrivate(this), parent)
{
    setRequest(new ListDomainNamesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainNamesRequest * ListDomainNamesResponse::request() const
{
    Q_D(const ListDomainNamesResponse);
    return static_cast<const ListDomainNamesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListDomainNames \a response.
 */
void ListDomainNamesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListDomainNamesResponsePrivate
 * \brief The ListDomainNamesResponsePrivate class provides private implementation for ListDomainNamesResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListDomainNamesResponsePrivate object with public implementation \a q.
 */
ListDomainNamesResponsePrivate::ListDomainNamesResponsePrivate(
    ListDomainNamesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListDomainNames response element from \a xml.
 */
void ListDomainNamesResponsePrivate::parseListDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainNamesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhealthchecksresponse.h"
#include "listhealthchecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHealthChecksResponse
 * \brief The ListHealthChecksResponse class provides an interace for Route53 ListHealthChecks responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHealthChecks
 */

/*!
 * Constructs a ListHealthChecksResponse object for \a reply to \a request, with parent \a parent.
 */
ListHealthChecksResponse::ListHealthChecksResponse(
        const ListHealthChecksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHealthChecksResponsePrivate(this), parent)
{
    setRequest(new ListHealthChecksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHealthChecksRequest * ListHealthChecksResponse::request() const
{
    Q_D(const ListHealthChecksResponse);
    return static_cast<const ListHealthChecksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHealthChecks \a response.
 */
void ListHealthChecksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHealthChecksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHealthChecksResponsePrivate
 * \brief The ListHealthChecksResponsePrivate class provides private implementation for ListHealthChecksResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHealthChecksResponsePrivate object with public implementation \a q.
 */
ListHealthChecksResponsePrivate::ListHealthChecksResponsePrivate(
    ListHealthChecksResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHealthChecks response element from \a xml.
 */
void ListHealthChecksResponsePrivate::parseListHealthChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHealthChecksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

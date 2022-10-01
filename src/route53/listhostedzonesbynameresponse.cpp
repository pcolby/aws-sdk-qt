// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostedzonesbynameresponse.h"
#include "listhostedzonesbynameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesByNameResponse
 * \brief The ListHostedZonesByNameResponse class provides an interace for Route53 ListHostedZonesByName responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHostedZonesByName
 */

/*!
 * Constructs a ListHostedZonesByNameResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostedZonesByNameResponse::ListHostedZonesByNameResponse(
        const ListHostedZonesByNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesByNameResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesByNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostedZonesByNameRequest * ListHostedZonesByNameResponse::request() const
{
    Q_D(const ListHostedZonesByNameResponse);
    return static_cast<const ListHostedZonesByNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHostedZonesByName \a response.
 */
void ListHostedZonesByNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHostedZonesByNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHostedZonesByNameResponsePrivate
 * \brief The ListHostedZonesByNameResponsePrivate class provides private implementation for ListHostedZonesByNameResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesByNameResponsePrivate object with public implementation \a q.
 */
ListHostedZonesByNameResponsePrivate::ListHostedZonesByNameResponsePrivate(
    ListHostedZonesByNameResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHostedZonesByName response element from \a xml.
 */
void ListHostedZonesByNameResponsePrivate::parseListHostedZonesByNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesByNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

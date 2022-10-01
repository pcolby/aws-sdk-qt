// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostedzonesresponse.h"
#include "listhostedzonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesResponse
 * \brief The ListHostedZonesResponse class provides an interace for Route53 ListHostedZones responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHostedZones
 */

/*!
 * Constructs a ListHostedZonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostedZonesResponse::ListHostedZonesResponse(
        const ListHostedZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostedZonesRequest * ListHostedZonesResponse::request() const
{
    Q_D(const ListHostedZonesResponse);
    return static_cast<const ListHostedZonesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHostedZones \a response.
 */
void ListHostedZonesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHostedZonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHostedZonesResponsePrivate
 * \brief The ListHostedZonesResponsePrivate class provides private implementation for ListHostedZonesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesResponsePrivate object with public implementation \a q.
 */
ListHostedZonesResponsePrivate::ListHostedZonesResponsePrivate(
    ListHostedZonesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHostedZones response element from \a xml.
 */
void ListHostedZonesResponsePrivate::parseListHostedZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

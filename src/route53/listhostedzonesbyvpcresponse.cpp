// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhostedzonesbyvpcresponse.h"
#include "listhostedzonesbyvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesByVPCResponse
 * \brief The ListHostedZonesByVPCResponse class provides an interace for Route53 ListHostedZonesByVPC responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listHostedZonesByVPC
 */

/*!
 * Constructs a ListHostedZonesByVPCResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostedZonesByVPCResponse::ListHostedZonesByVPCResponse(
        const ListHostedZonesByVPCRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesByVPCResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesByVPCRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostedZonesByVPCRequest * ListHostedZonesByVPCResponse::request() const
{
    Q_D(const ListHostedZonesByVPCResponse);
    return static_cast<const ListHostedZonesByVPCRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHostedZonesByVPC \a response.
 */
void ListHostedZonesByVPCResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHostedZonesByVPCResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHostedZonesByVPCResponsePrivate
 * \brief The ListHostedZonesByVPCResponsePrivate class provides private implementation for ListHostedZonesByVPCResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesByVPCResponsePrivate object with public implementation \a q.
 */
ListHostedZonesByVPCResponsePrivate::ListHostedZonesByVPCResponsePrivate(
    ListHostedZonesByVPCResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHostedZonesByVPC response element from \a xml.
 */
void ListHostedZonesByVPCResponsePrivate::parseListHostedZonesByVPCResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesByVPCResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

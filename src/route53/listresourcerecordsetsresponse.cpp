// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcerecordsetsresponse.h"
#include "listresourcerecordsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListResourceRecordSetsResponse
 * \brief The ListResourceRecordSetsResponse class provides an interace for Route53 ListResourceRecordSets responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listResourceRecordSets
 */

/*!
 * Constructs a ListResourceRecordSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceRecordSetsResponse::ListResourceRecordSetsResponse(
        const ListResourceRecordSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListResourceRecordSetsResponsePrivate(this), parent)
{
    setRequest(new ListResourceRecordSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceRecordSetsRequest * ListResourceRecordSetsResponse::request() const
{
    Q_D(const ListResourceRecordSetsResponse);
    return static_cast<const ListResourceRecordSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListResourceRecordSets \a response.
 */
void ListResourceRecordSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceRecordSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListResourceRecordSetsResponsePrivate
 * \brief The ListResourceRecordSetsResponsePrivate class provides private implementation for ListResourceRecordSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListResourceRecordSetsResponsePrivate object with public implementation \a q.
 */
ListResourceRecordSetsResponsePrivate::ListResourceRecordSetsResponsePrivate(
    ListResourceRecordSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListResourceRecordSets response element from \a xml.
 */
void ListResourceRecordSetsResponsePrivate::parseListResourceRecordSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceRecordSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreusabledelegationsetsresponse.h"
#include "listreusabledelegationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsResponse
 * \brief The ListReusableDelegationSetsResponse class provides an interace for Route53 ListReusableDelegationSets responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listReusableDelegationSets
 */

/*!
 * Constructs a ListReusableDelegationSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReusableDelegationSetsResponse::ListReusableDelegationSetsResponse(
        const ListReusableDelegationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListReusableDelegationSetsResponsePrivate(this), parent)
{
    setRequest(new ListReusableDelegationSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReusableDelegationSetsRequest * ListReusableDelegationSetsResponse::request() const
{
    Q_D(const ListReusableDelegationSetsResponse);
    return static_cast<const ListReusableDelegationSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListReusableDelegationSets \a response.
 */
void ListReusableDelegationSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReusableDelegationSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListReusableDelegationSetsResponsePrivate
 * \brief The ListReusableDelegationSetsResponsePrivate class provides private implementation for ListReusableDelegationSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListReusableDelegationSetsResponsePrivate object with public implementation \a q.
 */
ListReusableDelegationSetsResponsePrivate::ListReusableDelegationSetsResponsePrivate(
    ListReusableDelegationSetsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListReusableDelegationSets response element from \a xml.
 */
void ListReusableDelegationSetsResponsePrivate::parseListReusableDelegationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReusableDelegationSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

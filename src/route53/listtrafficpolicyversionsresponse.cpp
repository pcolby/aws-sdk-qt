// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrafficpolicyversionsresponse.h"
#include "listtrafficpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyVersionsResponse
 * \brief The ListTrafficPolicyVersionsResponse class provides an interace for Route53 ListTrafficPolicyVersions responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyVersions
 */

/*!
 * Constructs a ListTrafficPolicyVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPolicyVersionsResponse::ListTrafficPolicyVersionsResponse(
        const ListTrafficPolicyVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPolicyVersionsRequest * ListTrafficPolicyVersionsResponse::request() const
{
    Q_D(const ListTrafficPolicyVersionsResponse);
    return static_cast<const ListTrafficPolicyVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicyVersions \a response.
 */
void ListTrafficPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPolicyVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyVersionsResponsePrivate
 * \brief The ListTrafficPolicyVersionsResponsePrivate class provides private implementation for ListTrafficPolicyVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyVersionsResponsePrivate object with public implementation \a q.
 */
ListTrafficPolicyVersionsResponsePrivate::ListTrafficPolicyVersionsResponsePrivate(
    ListTrafficPolicyVersionsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicyVersions response element from \a xml.
 */
void ListTrafficPolicyVersionsResponsePrivate::parseListTrafficPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

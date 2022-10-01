// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrafficpolicyinstancesbypolicyresponse.h"
#include "listtrafficpolicyinstancesbypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyResponse
 * \brief The ListTrafficPolicyInstancesByPolicyResponse class provides an interace for Route53 ListTrafficPolicyInstancesByPolicy responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listTrafficPolicyInstancesByPolicy
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrafficPolicyInstancesByPolicyResponse::ListTrafficPolicyInstancesByPolicyResponse(
        const ListTrafficPolicyInstancesByPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyInstancesByPolicyResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyInstancesByPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrafficPolicyInstancesByPolicyRequest * ListTrafficPolicyInstancesByPolicyResponse::request() const
{
    Q_D(const ListTrafficPolicyInstancesByPolicyResponse);
    return static_cast<const ListTrafficPolicyInstancesByPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTrafficPolicyInstancesByPolicy \a response.
 */
void ListTrafficPolicyInstancesByPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrafficPolicyInstancesByPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTrafficPolicyInstancesByPolicyResponsePrivate
 * \brief The ListTrafficPolicyInstancesByPolicyResponsePrivate class provides private implementation for ListTrafficPolicyInstancesByPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTrafficPolicyInstancesByPolicyResponsePrivate object with public implementation \a q.
 */
ListTrafficPolicyInstancesByPolicyResponsePrivate::ListTrafficPolicyInstancesByPolicyResponsePrivate(
    ListTrafficPolicyInstancesByPolicyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTrafficPolicyInstancesByPolicy response element from \a xml.
 */
void ListTrafficPolicyInstancesByPolicyResponsePrivate::parseListTrafficPolicyInstancesByPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyInstancesByPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws

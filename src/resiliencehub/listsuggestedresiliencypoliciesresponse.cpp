// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuggestedresiliencypoliciesresponse.h"
#include "listsuggestedresiliencypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListSuggestedResiliencyPoliciesResponse
 * \brief The ListSuggestedResiliencyPoliciesResponse class provides an interace for ResilienceHub ListSuggestedResiliencyPolicies responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listSuggestedResiliencyPolicies
 */

/*!
 * Constructs a ListSuggestedResiliencyPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSuggestedResiliencyPoliciesResponse::ListSuggestedResiliencyPoliciesResponse(
        const ListSuggestedResiliencyPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListSuggestedResiliencyPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListSuggestedResiliencyPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSuggestedResiliencyPoliciesRequest * ListSuggestedResiliencyPoliciesResponse::request() const
{
    Q_D(const ListSuggestedResiliencyPoliciesResponse);
    return static_cast<const ListSuggestedResiliencyPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListSuggestedResiliencyPolicies \a response.
 */
void ListSuggestedResiliencyPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSuggestedResiliencyPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListSuggestedResiliencyPoliciesResponsePrivate
 * \brief The ListSuggestedResiliencyPoliciesResponsePrivate class provides private implementation for ListSuggestedResiliencyPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListSuggestedResiliencyPoliciesResponsePrivate object with public implementation \a q.
 */
ListSuggestedResiliencyPoliciesResponsePrivate::ListSuggestedResiliencyPoliciesResponsePrivate(
    ListSuggestedResiliencyPoliciesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListSuggestedResiliencyPolicies response element from \a xml.
 */
void ListSuggestedResiliencyPoliciesResponsePrivate::parseListSuggestedResiliencyPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuggestedResiliencyPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

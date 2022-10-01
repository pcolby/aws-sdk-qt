// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresiliencypoliciesresponse.h"
#include "listresiliencypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListResiliencyPoliciesResponse
 * \brief The ListResiliencyPoliciesResponse class provides an interace for ResilienceHub ListResiliencyPolicies responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listResiliencyPolicies
 */

/*!
 * Constructs a ListResiliencyPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListResiliencyPoliciesResponse::ListResiliencyPoliciesResponse(
        const ListResiliencyPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListResiliencyPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListResiliencyPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResiliencyPoliciesRequest * ListResiliencyPoliciesResponse::request() const
{
    Q_D(const ListResiliencyPoliciesResponse);
    return static_cast<const ListResiliencyPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListResiliencyPolicies \a response.
 */
void ListResiliencyPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResiliencyPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListResiliencyPoliciesResponsePrivate
 * \brief The ListResiliencyPoliciesResponsePrivate class provides private implementation for ListResiliencyPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListResiliencyPoliciesResponsePrivate object with public implementation \a q.
 */
ListResiliencyPoliciesResponsePrivate::ListResiliencyPoliciesResponsePrivate(
    ListResiliencyPoliciesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListResiliencyPolicies response element from \a xml.
 */
void ListResiliencyPoliciesResponsePrivate::parseListResiliencyPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResiliencyPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

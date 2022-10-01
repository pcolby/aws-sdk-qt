// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappcomponentcompliancesresponse.h"
#include "listappcomponentcompliancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppComponentCompliancesResponse
 * \brief The ListAppComponentCompliancesResponse class provides an interace for ResilienceHub ListAppComponentCompliances responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppComponentCompliances
 */

/*!
 * Constructs a ListAppComponentCompliancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppComponentCompliancesResponse::ListAppComponentCompliancesResponse(
        const ListAppComponentCompliancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppComponentCompliancesResponsePrivate(this), parent)
{
    setRequest(new ListAppComponentCompliancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppComponentCompliancesRequest * ListAppComponentCompliancesResponse::request() const
{
    Q_D(const ListAppComponentCompliancesResponse);
    return static_cast<const ListAppComponentCompliancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppComponentCompliances \a response.
 */
void ListAppComponentCompliancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppComponentCompliancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppComponentCompliancesResponsePrivate
 * \brief The ListAppComponentCompliancesResponsePrivate class provides private implementation for ListAppComponentCompliancesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppComponentCompliancesResponsePrivate object with public implementation \a q.
 */
ListAppComponentCompliancesResponsePrivate::ListAppComponentCompliancesResponsePrivate(
    ListAppComponentCompliancesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppComponentCompliances response element from \a xml.
 */
void ListAppComponentCompliancesResponsePrivate::parseListAppComponentCompliancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppComponentCompliancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

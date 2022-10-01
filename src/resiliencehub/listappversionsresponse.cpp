// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappversionsresponse.h"
#include "listappversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsResponse
 * \brief The ListAppVersionsResponse class provides an interace for ResilienceHub ListAppVersions responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersions
 */

/*!
 * Constructs a ListAppVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppVersionsResponse::ListAppVersionsResponse(
        const ListAppVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppVersionsResponsePrivate(this), parent)
{
    setRequest(new ListAppVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppVersionsRequest * ListAppVersionsResponse::request() const
{
    Q_D(const ListAppVersionsResponse);
    return static_cast<const ListAppVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppVersions \a response.
 */
void ListAppVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsResponsePrivate
 * \brief The ListAppVersionsResponsePrivate class provides private implementation for ListAppVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionsResponsePrivate object with public implementation \a q.
 */
ListAppVersionsResponsePrivate::ListAppVersionsResponsePrivate(
    ListAppVersionsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppVersions response element from \a xml.
 */
void ListAppVersionsResponsePrivate::parseListAppVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

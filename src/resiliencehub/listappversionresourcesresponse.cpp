// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappversionresourcesresponse.h"
#include "listappversionresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourcesResponse
 * \brief The ListAppVersionResourcesResponse class provides an interace for ResilienceHub ListAppVersionResources responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersionResources
 */

/*!
 * Constructs a ListAppVersionResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppVersionResourcesResponse::ListAppVersionResourcesResponse(
        const ListAppVersionResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppVersionResourcesResponsePrivate(this), parent)
{
    setRequest(new ListAppVersionResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppVersionResourcesRequest * ListAppVersionResourcesResponse::request() const
{
    Q_D(const ListAppVersionResourcesResponse);
    return static_cast<const ListAppVersionResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppVersionResources \a response.
 */
void ListAppVersionResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppVersionResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourcesResponsePrivate
 * \brief The ListAppVersionResourcesResponsePrivate class provides private implementation for ListAppVersionResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionResourcesResponsePrivate object with public implementation \a q.
 */
ListAppVersionResourcesResponsePrivate::ListAppVersionResourcesResponsePrivate(
    ListAppVersionResourcesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppVersionResources response element from \a xml.
 */
void ListAppVersionResourcesResponsePrivate::parseListAppVersionResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppVersionResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

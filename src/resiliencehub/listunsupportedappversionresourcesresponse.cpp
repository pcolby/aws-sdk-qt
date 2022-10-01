// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listunsupportedappversionresourcesresponse.h"
#include "listunsupportedappversionresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListUnsupportedAppVersionResourcesResponse
 * \brief The ListUnsupportedAppVersionResourcesResponse class provides an interace for ResilienceHub ListUnsupportedAppVersionResources responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listUnsupportedAppVersionResources
 */

/*!
 * Constructs a ListUnsupportedAppVersionResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListUnsupportedAppVersionResourcesResponse::ListUnsupportedAppVersionResourcesResponse(
        const ListUnsupportedAppVersionResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListUnsupportedAppVersionResourcesResponsePrivate(this), parent)
{
    setRequest(new ListUnsupportedAppVersionResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUnsupportedAppVersionResourcesRequest * ListUnsupportedAppVersionResourcesResponse::request() const
{
    Q_D(const ListUnsupportedAppVersionResourcesResponse);
    return static_cast<const ListUnsupportedAppVersionResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListUnsupportedAppVersionResources \a response.
 */
void ListUnsupportedAppVersionResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUnsupportedAppVersionResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListUnsupportedAppVersionResourcesResponsePrivate
 * \brief The ListUnsupportedAppVersionResourcesResponsePrivate class provides private implementation for ListUnsupportedAppVersionResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListUnsupportedAppVersionResourcesResponsePrivate object with public implementation \a q.
 */
ListUnsupportedAppVersionResourcesResponsePrivate::ListUnsupportedAppVersionResourcesResponsePrivate(
    ListUnsupportedAppVersionResourcesResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListUnsupportedAppVersionResources response element from \a xml.
 */
void ListUnsupportedAppVersionResourcesResponsePrivate::parseListUnsupportedAppVersionResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUnsupportedAppVersionResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

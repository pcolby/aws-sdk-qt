// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappversionresourcemappingsresponse.h"
#include "listappversionresourcemappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourceMappingsResponse
 * \brief The ListAppVersionResourceMappingsResponse class provides an interace for ResilienceHub ListAppVersionResourceMappings responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersionResourceMappings
 */

/*!
 * Constructs a ListAppVersionResourceMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppVersionResourceMappingsResponse::ListAppVersionResourceMappingsResponse(
        const ListAppVersionResourceMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new ListAppVersionResourceMappingsResponsePrivate(this), parent)
{
    setRequest(new ListAppVersionResourceMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppVersionResourceMappingsRequest * ListAppVersionResourceMappingsResponse::request() const
{
    Q_D(const ListAppVersionResourceMappingsResponse);
    return static_cast<const ListAppVersionResourceMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub ListAppVersionResourceMappings \a response.
 */
void ListAppVersionResourceMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppVersionResourceMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourceMappingsResponsePrivate
 * \brief The ListAppVersionResourceMappingsResponsePrivate class provides private implementation for ListAppVersionResourceMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionResourceMappingsResponsePrivate object with public implementation \a q.
 */
ListAppVersionResourceMappingsResponsePrivate::ListAppVersionResourceMappingsResponsePrivate(
    ListAppVersionResourceMappingsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub ListAppVersionResourceMappings response element from \a xml.
 */
void ListAppVersionResourceMappingsResponsePrivate::parseListAppVersionResourceMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppVersionResourceMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

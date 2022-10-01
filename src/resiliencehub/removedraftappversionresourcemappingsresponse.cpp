// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removedraftappversionresourcemappingsresponse.h"
#include "removedraftappversionresourcemappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::RemoveDraftAppVersionResourceMappingsResponse
 * \brief The RemoveDraftAppVersionResourceMappingsResponse class provides an interace for ResilienceHub RemoveDraftAppVersionResourceMappings responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::removeDraftAppVersionResourceMappings
 */

/*!
 * Constructs a RemoveDraftAppVersionResourceMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveDraftAppVersionResourceMappingsResponse::RemoveDraftAppVersionResourceMappingsResponse(
        const RemoveDraftAppVersionResourceMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new RemoveDraftAppVersionResourceMappingsResponsePrivate(this), parent)
{
    setRequest(new RemoveDraftAppVersionResourceMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveDraftAppVersionResourceMappingsRequest * RemoveDraftAppVersionResourceMappingsResponse::request() const
{
    Q_D(const RemoveDraftAppVersionResourceMappingsResponse);
    return static_cast<const RemoveDraftAppVersionResourceMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub RemoveDraftAppVersionResourceMappings \a response.
 */
void RemoveDraftAppVersionResourceMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveDraftAppVersionResourceMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::RemoveDraftAppVersionResourceMappingsResponsePrivate
 * \brief The RemoveDraftAppVersionResourceMappingsResponsePrivate class provides private implementation for RemoveDraftAppVersionResourceMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a RemoveDraftAppVersionResourceMappingsResponsePrivate object with public implementation \a q.
 */
RemoveDraftAppVersionResourceMappingsResponsePrivate::RemoveDraftAppVersionResourceMappingsResponsePrivate(
    RemoveDraftAppVersionResourceMappingsResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub RemoveDraftAppVersionResourceMappings response element from \a xml.
 */
void RemoveDraftAppVersionResourceMappingsResponsePrivate::parseRemoveDraftAppVersionResourceMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveDraftAppVersionResourceMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

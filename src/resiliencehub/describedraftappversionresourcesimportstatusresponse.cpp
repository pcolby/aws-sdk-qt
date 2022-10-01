// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedraftappversionresourcesimportstatusresponse.h"
#include "describedraftappversionresourcesimportstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeDraftAppVersionResourcesImportStatusResponse
 * \brief The DescribeDraftAppVersionResourcesImportStatusResponse class provides an interace for ResilienceHub DescribeDraftAppVersionResourcesImportStatus responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeDraftAppVersionResourcesImportStatus
 */

/*!
 * Constructs a DescribeDraftAppVersionResourcesImportStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDraftAppVersionResourcesImportStatusResponse::DescribeDraftAppVersionResourcesImportStatusResponse(
        const DescribeDraftAppVersionResourcesImportStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeDraftAppVersionResourcesImportStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeDraftAppVersionResourcesImportStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDraftAppVersionResourcesImportStatusRequest * DescribeDraftAppVersionResourcesImportStatusResponse::request() const
{
    Q_D(const DescribeDraftAppVersionResourcesImportStatusResponse);
    return static_cast<const DescribeDraftAppVersionResourcesImportStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeDraftAppVersionResourcesImportStatus \a response.
 */
void DescribeDraftAppVersionResourcesImportStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDraftAppVersionResourcesImportStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeDraftAppVersionResourcesImportStatusResponsePrivate
 * \brief The DescribeDraftAppVersionResourcesImportStatusResponsePrivate class provides private implementation for DescribeDraftAppVersionResourcesImportStatusResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeDraftAppVersionResourcesImportStatusResponsePrivate object with public implementation \a q.
 */
DescribeDraftAppVersionResourcesImportStatusResponsePrivate::DescribeDraftAppVersionResourcesImportStatusResponsePrivate(
    DescribeDraftAppVersionResourcesImportStatusResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeDraftAppVersionResourcesImportStatus response element from \a xml.
 */
void DescribeDraftAppVersionResourcesImportStatusResponsePrivate::parseDescribeDraftAppVersionResourcesImportStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDraftAppVersionResourcesImportStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

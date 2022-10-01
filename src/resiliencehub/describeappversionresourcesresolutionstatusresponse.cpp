// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappversionresourcesresolutionstatusresponse.h"
#include "describeappversionresourcesresolutionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionResourcesResolutionStatusResponse
 * \brief The DescribeAppVersionResourcesResolutionStatusResponse class provides an interace for ResilienceHub DescribeAppVersionResourcesResolutionStatus responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppVersionResourcesResolutionStatus
 */

/*!
 * Constructs a DescribeAppVersionResourcesResolutionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppVersionResourcesResolutionStatusResponse::DescribeAppVersionResourcesResolutionStatusResponse(
        const DescribeAppVersionResourcesResolutionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeAppVersionResourcesResolutionStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeAppVersionResourcesResolutionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppVersionResourcesResolutionStatusRequest * DescribeAppVersionResourcesResolutionStatusResponse::request() const
{
    Q_D(const DescribeAppVersionResourcesResolutionStatusResponse);
    return static_cast<const DescribeAppVersionResourcesResolutionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeAppVersionResourcesResolutionStatus \a response.
 */
void DescribeAppVersionResourcesResolutionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppVersionResourcesResolutionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionResourcesResolutionStatusResponsePrivate
 * \brief The DescribeAppVersionResourcesResolutionStatusResponsePrivate class provides private implementation for DescribeAppVersionResourcesResolutionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppVersionResourcesResolutionStatusResponsePrivate object with public implementation \a q.
 */
DescribeAppVersionResourcesResolutionStatusResponsePrivate::DescribeAppVersionResourcesResolutionStatusResponsePrivate(
    DescribeAppVersionResourcesResolutionStatusResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeAppVersionResourcesResolutionStatus response element from \a xml.
 */
void DescribeAppVersionResourcesResolutionStatusResponsePrivate::parseDescribeAppVersionResourcesResolutionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppVersionResourcesResolutionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws

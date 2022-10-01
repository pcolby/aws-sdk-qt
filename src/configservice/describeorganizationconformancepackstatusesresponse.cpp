// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeorganizationconformancepackstatusesresponse.h"
#include "describeorganizationconformancepackstatusesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DescribeOrganizationConformancePackStatusesResponse
 * \brief The DescribeOrganizationConformancePackStatusesResponse class provides an interace for ConfigService DescribeOrganizationConformancePackStatuses responses.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>Config</fullname>
 * 
 *  Config provides a way to keep track of the configurations of all the Amazon Web Services resources associated with your
 *  Amazon Web Services account. You can use Config to get the current and historical configurations of each Amazon Web
 *  Services resource and also to get information about the relationship between the resources. An Amazon Web Services
 *  resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block Store (EBS) volume, an elastic network
 *  Interface (ENI), or a security group. For a complete list of resources currently supported by Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  Amazon Web Services
 * 
 *  resources</a>>
 * 
 *  You can access and manage Config through the Amazon Web Services Management Console, the Amazon Web Services Command
 *  Line Interface (Amazon Web Services CLI), the Config API, or the Amazon Web Services SDKs for Config. This reference
 *  guide contains documentation for the Config API and the Amazon Web Services CLI commands that you can use to manage
 *  Config. The Config API uses the Signature Version 4 protocol for signing requests. For more information about how to
 *  sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about Config features and their associated actions or commands, as well as how to work with
 *  Amazon Web Services Management Console, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is Config</a> in the <i>Config
 *  Developer
 *
 * \sa ConfigServiceClient::describeOrganizationConformancePackStatuses
 */

/*!
 * Constructs a DescribeOrganizationConformancePackStatusesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrganizationConformancePackStatusesResponse::DescribeOrganizationConformancePackStatusesResponse(
        const DescribeOrganizationConformancePackStatusesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeOrganizationConformancePackStatusesResponsePrivate(this), parent)
{
    setRequest(new DescribeOrganizationConformancePackStatusesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOrganizationConformancePackStatusesRequest * DescribeOrganizationConformancePackStatusesResponse::request() const
{
    Q_D(const DescribeOrganizationConformancePackStatusesResponse);
    return static_cast<const DescribeOrganizationConformancePackStatusesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConfigService DescribeOrganizationConformancePackStatuses \a response.
 */
void DescribeOrganizationConformancePackStatusesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrganizationConformancePackStatusesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConfigService::DescribeOrganizationConformancePackStatusesResponsePrivate
 * \brief The DescribeOrganizationConformancePackStatusesResponsePrivate class provides private implementation for DescribeOrganizationConformancePackStatusesResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a DescribeOrganizationConformancePackStatusesResponsePrivate object with public implementation \a q.
 */
DescribeOrganizationConformancePackStatusesResponsePrivate::DescribeOrganizationConformancePackStatusesResponsePrivate(
    DescribeOrganizationConformancePackStatusesResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * Parses a ConfigService DescribeOrganizationConformancePackStatuses response element from \a xml.
 */
void DescribeOrganizationConformancePackStatusesResponsePrivate::parseDescribeOrganizationConformancePackStatusesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrganizationConformancePackStatusesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConfigService
} // namespace QtAws

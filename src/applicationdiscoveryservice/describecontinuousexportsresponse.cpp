/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecontinuousexportsresponse.h"
#include "describecontinuousexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/*!
 * \class QtAws::ApplicationDiscoveryService::DescribeContinuousExportsResponse
 * \brief The DescribeContinuousExportsResponse class provides an interace for ApplicationDiscoveryService DescribeContinuousExports responses.
 *
 * \inmodule QtAwsApplicationDiscoveryService
 *
 *  <fullname>AWS Application Discovery Service</fullname>
 * 
 *  AWS Application Discovery Service helps you plan application migration projects. It automatically identifies servers,
 *  virtual machines (VMs), and network dependencies in your on-premises data centers. For more information, see the <a
 *  href="http://aws.amazon.com/application-discovery/faqs/">AWS Application Discovery Service FAQ</a>. Application
 *  Discovery Service offers three ways of performing discovery and collecting data about your on-premises
 * 
 *  servers> <ul> <li>
 * 
 *  <b>Agentless discovery</b> is recommended for environments that use VMware vCenter Server. This mode doesn't require you
 *  to install an agent on each host. It does not work in non-VMware
 * 
 *  environments> <ul> <li>
 * 
 *  Agentless discovery gathers server information regardless of the operating systems, which minimizes the time required
 *  for initial on-premises infrastructure
 * 
 *  assessment> </li> <li>
 * 
 *  Agentless discovery doesn't collect information about network dependencies, only agent-based discovery collects that
 * 
 *  information> </li> </ul> </li> </ul> <ul> <li>
 * 
 *  <b>Agent-based discovery</b> collects a richer set of data than agentless discovery by using the AWS Application
 *  Discovery Agent, which you install on one or more hosts in your data
 * 
 *  center> <ul> <li>
 * 
 *  The agent captures infrastructure and application information, including an inventory of running processes, system
 *  performance information, resource utilization, and network
 * 
 *  dependencies> </li> <li>
 * 
 *  The information collected by agents is secured at rest and in transit to the Application Discovery Service database in
 *  the cloud.
 * 
 *  </p </li> </ul> </li> </ul> <ul> <li>
 * 
 *  <b>AWS Partner Network (APN) solutions</b> integrate with Application Discovery Service, enabling you to import details
 *  of your on-premises environment directly into Migration Hub without using the discovery connector or discovery
 * 
 *  agent> <ul> <li>
 * 
 *  Third-party application discovery tools can query AWS Application Discovery Service, and they can write to the
 *  Application Discovery Service database using the public
 * 
 *  API> </li> <li>
 * 
 *  In this way, you can import data into Migration Hub and view it, so that you can associate applications with servers and
 *  track
 * 
 *  migrations> </li> </ul> </li> </ul>
 * 
 *  <b>Recommendations</b>
 * 
 *  </p
 * 
 *  We recommend that you use agent-based discovery for non-VMware environments, and whenever you want to collect
 *  information about network dependencies. You can run agent-based and agentless discovery simultaneously. Use agentless
 *  discovery to complete the initial infrastructure assessment quickly, and then install agents on select hosts to collect
 *  additional
 * 
 *  information>
 * 
 *  <b>Working With This Guide</b>
 * 
 *  </p
 * 
 *  This API reference provides descriptions, syntax, and usage examples for each of the actions and data types for
 *  Application Discovery Service. The topic for each action shows the API request parameters and the response.
 *  Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note> <ul> <li>
 * 
 *  Remember that you must set your Migration Hub home region before you call any of these
 * 
 *  APIs> </li> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  Although it is unlikely, the Migration Hub home region could change. If you call APIs outside the home region, an
 *  <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You must call <code>GetHomeRegion</code> to obtain the latest Migration Hub home
 * 
 *  region> </li> </ul> </note>
 * 
 *  This guide is intended for use with the <a href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">AWS
 *  Application Discovery Service User
 * 
 *  Guide</a>> <b>
 * 
 *  All data is handled according to the <a href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate
 *  Application Discovery Service offline to inspect collected data before it is shared with the
 *
 * \sa ApplicationDiscoveryServiceClient::describeContinuousExports
 */

/*!
 * Constructs a DescribeContinuousExportsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContinuousExportsResponse::DescribeContinuousExportsResponse(
        const DescribeContinuousExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new DescribeContinuousExportsResponsePrivate(this), parent)
{
    setRequest(new DescribeContinuousExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContinuousExportsRequest * DescribeContinuousExportsResponse::request() const
{
    return static_cast<const DescribeContinuousExportsRequest *>(ApplicationDiscoveryServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ApplicationDiscoveryService DescribeContinuousExports \a response.
 */
void DescribeContinuousExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContinuousExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationDiscoveryService::DescribeContinuousExportsResponsePrivate
 * \brief The DescribeContinuousExportsResponsePrivate class provides private implementation for DescribeContinuousExportsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscoveryService
 */

/*!
 * Constructs a DescribeContinuousExportsResponsePrivate object with public implementation \a q.
 */
DescribeContinuousExportsResponsePrivate::DescribeContinuousExportsResponsePrivate(
    DescribeContinuousExportsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationDiscoveryService DescribeContinuousExports response element from \a xml.
 */
void DescribeContinuousExportsResponsePrivate::parseDescribeContinuousExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContinuousExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws

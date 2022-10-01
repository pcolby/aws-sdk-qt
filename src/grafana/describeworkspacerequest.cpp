// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspacerequest.h"
#include "describeworkspacerequest_p.h"
#include "describeworkspaceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DescribeWorkspaceRequest
 * \brief The DescribeWorkspaceRequest class provides an interface for Grafana DescribeWorkspace requests.
 *
 * \inmodule QtAwsGrafana
 *
 *  Amazon Managed Grafana is a fully managed and secure data visualization service that you can use to instantly query,
 *  correlate, and visualize operational metrics, logs, and traces from multiple sources. Amazon Managed Grafana makes it
 *  easy to deploy, operate, and scale Grafana, a widely deployed data visualization tool that is popular for its extensible
 *  data
 * 
 *  support>
 * 
 *  With Amazon Managed Grafana, you create logically isolated Grafana servers called <i>workspaces</i>. In a workspace, you
 *  can create Grafana dashboards and visualizations to analyze your metrics, logs, and traces without having to build,
 *  package, or deploy any hardware to run Grafana servers.
 *
 * \sa GrafanaClient::describeWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest(const DescribeWorkspaceRequest &other)
    : GrafanaRequest(new DescribeWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceRequest object.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest()
    : GrafanaRequest(new DescribeWorkspaceRequestPrivate(GrafanaRequest::DescribeWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::DescribeWorkspaceRequestPrivate
 * \brief The DescribeWorkspaceRequestPrivate class provides private implementation for DescribeWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DescribeWorkspaceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const GrafanaRequest::Action action, DescribeWorkspaceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceRequest
 * class' copy constructor.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const DescribeWorkspaceRequestPrivate &other, DescribeWorkspaceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

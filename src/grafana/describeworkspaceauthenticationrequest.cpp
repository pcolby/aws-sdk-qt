// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspaceauthenticationrequest.h"
#include "describeworkspaceauthenticationrequest_p.h"
#include "describeworkspaceauthenticationresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DescribeWorkspaceAuthenticationRequest
 * \brief The DescribeWorkspaceAuthenticationRequest class provides an interface for Grafana DescribeWorkspaceAuthentication requests.
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
 * \sa GrafanaClient::describeWorkspaceAuthentication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceAuthenticationRequest::DescribeWorkspaceAuthenticationRequest(const DescribeWorkspaceAuthenticationRequest &other)
    : GrafanaRequest(new DescribeWorkspaceAuthenticationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceAuthenticationRequest object.
 */
DescribeWorkspaceAuthenticationRequest::DescribeWorkspaceAuthenticationRequest()
    : GrafanaRequest(new DescribeWorkspaceAuthenticationRequestPrivate(GrafanaRequest::DescribeWorkspaceAuthenticationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceAuthenticationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceAuthenticationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceAuthenticationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceAuthenticationResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::DescribeWorkspaceAuthenticationRequestPrivate
 * \brief The DescribeWorkspaceAuthenticationRequestPrivate class provides private implementation for DescribeWorkspaceAuthenticationRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DescribeWorkspaceAuthenticationRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceAuthenticationRequestPrivate::DescribeWorkspaceAuthenticationRequestPrivate(
    const GrafanaRequest::Action action, DescribeWorkspaceAuthenticationRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceAuthenticationRequest
 * class' copy constructor.
 */
DescribeWorkspaceAuthenticationRequestPrivate::DescribeWorkspaceAuthenticationRequestPrivate(
    const DescribeWorkspaceAuthenticationRequestPrivate &other, DescribeWorkspaceAuthenticationRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

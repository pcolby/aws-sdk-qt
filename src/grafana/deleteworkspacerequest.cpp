// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspacerequest.h"
#include "deleteworkspacerequest_p.h"
#include "deleteworkspaceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DeleteWorkspaceRequest
 * \brief The DeleteWorkspaceRequest class provides an interface for Grafana DeleteWorkspace requests.
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
 * \sa GrafanaClient::deleteWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest(const DeleteWorkspaceRequest &other)
    : GrafanaRequest(new DeleteWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkspaceRequest object.
 */
DeleteWorkspaceRequest::DeleteWorkspaceRequest()
    : GrafanaRequest(new DeleteWorkspaceRequestPrivate(GrafanaRequest::DeleteWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::DeleteWorkspaceRequestPrivate
 * \brief The DeleteWorkspaceRequestPrivate class provides private implementation for DeleteWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DeleteWorkspaceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const GrafanaRequest::Action action, DeleteWorkspaceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkspaceRequest
 * class' copy constructor.
 */
DeleteWorkspaceRequestPrivate::DeleteWorkspaceRequestPrivate(
    const DeleteWorkspaceRequestPrivate &other, DeleteWorkspaceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

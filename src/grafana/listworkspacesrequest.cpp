// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesrequest.h"
#include "listworkspacesrequest_p.h"
#include "listworkspacesresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::ListWorkspacesRequest
 * \brief The ListWorkspacesRequest class provides an interface for Grafana ListWorkspaces requests.
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
 * \sa GrafanaClient::listWorkspaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkspacesRequest::ListWorkspacesRequest(const ListWorkspacesRequest &other)
    : GrafanaRequest(new ListWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkspacesRequest object.
 */
ListWorkspacesRequest::ListWorkspacesRequest()
    : GrafanaRequest(new ListWorkspacesRequestPrivate(GrafanaRequest::ListWorkspacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkspacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkspacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkspacesResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::ListWorkspacesRequestPrivate
 * \brief The ListWorkspacesRequestPrivate class provides private implementation for ListWorkspacesRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a ListWorkspacesRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const GrafanaRequest::Action action, ListWorkspacesRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkspacesRequest
 * class' copy constructor.
 */
ListWorkspacesRequestPrivate::ListWorkspacesRequestPrivate(
    const ListWorkspacesRequestPrivate &other, ListWorkspacesRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

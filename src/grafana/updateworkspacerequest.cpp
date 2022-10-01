// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspacerequest.h"
#include "updateworkspacerequest_p.h"
#include "updateworkspaceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdateWorkspaceRequest
 * \brief The UpdateWorkspaceRequest class provides an interface for Grafana UpdateWorkspace requests.
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
 * \sa GrafanaClient::updateWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceRequest::UpdateWorkspaceRequest(const UpdateWorkspaceRequest &other)
    : GrafanaRequest(new UpdateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceRequest object.
 */
UpdateWorkspaceRequest::UpdateWorkspaceRequest()
    : GrafanaRequest(new UpdateWorkspaceRequestPrivate(GrafanaRequest::UpdateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::UpdateWorkspaceRequestPrivate
 * \brief The UpdateWorkspaceRequestPrivate class provides private implementation for UpdateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdateWorkspaceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceRequestPrivate::UpdateWorkspaceRequestPrivate(
    const GrafanaRequest::Action action, UpdateWorkspaceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceRequest
 * class' copy constructor.
 */
UpdateWorkspaceRequestPrivate::UpdateWorkspaceRequestPrivate(
    const UpdateWorkspaceRequestPrivate &other, UpdateWorkspaceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

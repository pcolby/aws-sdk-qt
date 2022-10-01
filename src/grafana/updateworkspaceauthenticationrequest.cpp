// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspaceauthenticationrequest.h"
#include "updateworkspaceauthenticationrequest_p.h"
#include "updateworkspaceauthenticationresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::UpdateWorkspaceAuthenticationRequest
 * \brief The UpdateWorkspaceAuthenticationRequest class provides an interface for Grafana UpdateWorkspaceAuthentication requests.
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
 * \sa GrafanaClient::updateWorkspaceAuthentication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkspaceAuthenticationRequest::UpdateWorkspaceAuthenticationRequest(const UpdateWorkspaceAuthenticationRequest &other)
    : GrafanaRequest(new UpdateWorkspaceAuthenticationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkspaceAuthenticationRequest object.
 */
UpdateWorkspaceAuthenticationRequest::UpdateWorkspaceAuthenticationRequest()
    : GrafanaRequest(new UpdateWorkspaceAuthenticationRequestPrivate(GrafanaRequest::UpdateWorkspaceAuthenticationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkspaceAuthenticationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkspaceAuthenticationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkspaceAuthenticationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkspaceAuthenticationResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::UpdateWorkspaceAuthenticationRequestPrivate
 * \brief The UpdateWorkspaceAuthenticationRequestPrivate class provides private implementation for UpdateWorkspaceAuthenticationRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a UpdateWorkspaceAuthenticationRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
UpdateWorkspaceAuthenticationRequestPrivate::UpdateWorkspaceAuthenticationRequestPrivate(
    const GrafanaRequest::Action action, UpdateWorkspaceAuthenticationRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkspaceAuthenticationRequest
 * class' copy constructor.
 */
UpdateWorkspaceAuthenticationRequestPrivate::UpdateWorkspaceAuthenticationRequestPrivate(
    const UpdateWorkspaceAuthenticationRequestPrivate &other, UpdateWorkspaceAuthenticationRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspacerequest.h"
#include "createworkspacerequest_p.h"
#include "createworkspaceresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::CreateWorkspaceRequest
 * \brief The CreateWorkspaceRequest class provides an interface for Grafana CreateWorkspace requests.
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
 * \sa GrafanaClient::createWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest(const CreateWorkspaceRequest &other)
    : GrafanaRequest(new CreateWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspaceRequest object.
 */
CreateWorkspaceRequest::CreateWorkspaceRequest()
    : GrafanaRequest(new CreateWorkspaceRequestPrivate(GrafanaRequest::CreateWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::CreateWorkspaceRequestPrivate
 * \brief The CreateWorkspaceRequestPrivate class provides private implementation for CreateWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a CreateWorkspaceRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const GrafanaRequest::Action action, CreateWorkspaceRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspaceRequest
 * class' copy constructor.
 */
CreateWorkspaceRequestPrivate::CreateWorkspaceRequestPrivate(
    const CreateWorkspaceRequestPrivate &other, CreateWorkspaceRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

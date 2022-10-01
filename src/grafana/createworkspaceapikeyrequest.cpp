// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspaceapikeyrequest.h"
#include "createworkspaceapikeyrequest_p.h"
#include "createworkspaceapikeyresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::CreateWorkspaceApiKeyRequest
 * \brief The CreateWorkspaceApiKeyRequest class provides an interface for Grafana CreateWorkspaceApiKey requests.
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
 * \sa GrafanaClient::createWorkspaceApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkspaceApiKeyRequest::CreateWorkspaceApiKeyRequest(const CreateWorkspaceApiKeyRequest &other)
    : GrafanaRequest(new CreateWorkspaceApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkspaceApiKeyRequest object.
 */
CreateWorkspaceApiKeyRequest::CreateWorkspaceApiKeyRequest()
    : GrafanaRequest(new CreateWorkspaceApiKeyRequestPrivate(GrafanaRequest::CreateWorkspaceApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkspaceApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkspaceApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkspaceApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspaceApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::CreateWorkspaceApiKeyRequestPrivate
 * \brief The CreateWorkspaceApiKeyRequestPrivate class provides private implementation for CreateWorkspaceApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a CreateWorkspaceApiKeyRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
CreateWorkspaceApiKeyRequestPrivate::CreateWorkspaceApiKeyRequestPrivate(
    const GrafanaRequest::Action action, CreateWorkspaceApiKeyRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspaceApiKeyRequest
 * class' copy constructor.
 */
CreateWorkspaceApiKeyRequestPrivate::CreateWorkspaceApiKeyRequestPrivate(
    const CreateWorkspaceApiKeyRequestPrivate &other, CreateWorkspaceApiKeyRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

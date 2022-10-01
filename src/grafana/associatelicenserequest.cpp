// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatelicenserequest.h"
#include "associatelicenserequest_p.h"
#include "associatelicenseresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::AssociateLicenseRequest
 * \brief The AssociateLicenseRequest class provides an interface for Grafana AssociateLicense requests.
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
 * \sa GrafanaClient::associateLicense
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateLicenseRequest::AssociateLicenseRequest(const AssociateLicenseRequest &other)
    : GrafanaRequest(new AssociateLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateLicenseRequest object.
 */
AssociateLicenseRequest::AssociateLicenseRequest()
    : GrafanaRequest(new AssociateLicenseRequestPrivate(GrafanaRequest::AssociateLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateLicenseRequest::response(QNetworkReply * const reply) const
{
    return new AssociateLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::AssociateLicenseRequestPrivate
 * \brief The AssociateLicenseRequestPrivate class provides private implementation for AssociateLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a AssociateLicenseRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
AssociateLicenseRequestPrivate::AssociateLicenseRequestPrivate(
    const GrafanaRequest::Action action, AssociateLicenseRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateLicenseRequest
 * class' copy constructor.
 */
AssociateLicenseRequestPrivate::AssociateLicenseRequestPrivate(
    const AssociateLicenseRequestPrivate &other, AssociateLicenseRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

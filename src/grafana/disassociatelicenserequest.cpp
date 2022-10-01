// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatelicenserequest.h"
#include "disassociatelicenserequest_p.h"
#include "disassociatelicenseresponse.h"
#include "grafanarequest_p.h"

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::DisassociateLicenseRequest
 * \brief The DisassociateLicenseRequest class provides an interface for Grafana DisassociateLicense requests.
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
 * \sa GrafanaClient::disassociateLicense
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateLicenseRequest::DisassociateLicenseRequest(const DisassociateLicenseRequest &other)
    : GrafanaRequest(new DisassociateLicenseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateLicenseRequest object.
 */
DisassociateLicenseRequest::DisassociateLicenseRequest()
    : GrafanaRequest(new DisassociateLicenseRequestPrivate(GrafanaRequest::DisassociateLicenseAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateLicenseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateLicenseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateLicenseRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateLicenseResponse(*this, reply);
}

/*!
 * \class QtAws::Grafana::DisassociateLicenseRequestPrivate
 * \brief The DisassociateLicenseRequestPrivate class provides private implementation for DisassociateLicenseRequest.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a DisassociateLicenseRequestPrivate object for Grafana \a action,
 * with public implementation \a q.
 */
DisassociateLicenseRequestPrivate::DisassociateLicenseRequestPrivate(
    const GrafanaRequest::Action action, DisassociateLicenseRequest * const q)
    : GrafanaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateLicenseRequest
 * class' copy constructor.
 */
DisassociateLicenseRequestPrivate::DisassociateLicenseRequestPrivate(
    const DisassociateLicenseRequestPrivate &other, DisassociateLicenseRequest * const q)
    : GrafanaRequestPrivate(other, q)
{

}

} // namespace Grafana
} // namespace QtAws

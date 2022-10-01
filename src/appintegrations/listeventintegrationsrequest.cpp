// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventintegrationsrequest.h"
#include "listeventintegrationsrequest_p.h"
#include "listeventintegrationsresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationsRequest
 * \brief The ListEventIntegrationsRequest class provides an interface for AppIntegrations ListEventIntegrations requests.
 *
 * \inmodule QtAwsAppIntegrations
 *
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> and <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver information to agents
 *  using Amazon Connect Wisdom</a> in the <i>Amazon Connect Administrator
 *
 * \sa AppIntegrationsClient::listEventIntegrations
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventIntegrationsRequest::ListEventIntegrationsRequest(const ListEventIntegrationsRequest &other)
    : AppIntegrationsRequest(new ListEventIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventIntegrationsRequest object.
 */
ListEventIntegrationsRequest::ListEventIntegrationsRequest()
    : AppIntegrationsRequest(new ListEventIntegrationsRequestPrivate(AppIntegrationsRequest::ListEventIntegrationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventIntegrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventIntegrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventIntegrationsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventIntegrationsResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationsRequestPrivate
 * \brief The ListEventIntegrationsRequestPrivate class provides private implementation for ListEventIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListEventIntegrationsRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
ListEventIntegrationsRequestPrivate::ListEventIntegrationsRequestPrivate(
    const AppIntegrationsRequest::Action action, ListEventIntegrationsRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventIntegrationsRequest
 * class' copy constructor.
 */
ListEventIntegrationsRequestPrivate::ListEventIntegrationsRequestPrivate(
    const ListEventIntegrationsRequestPrivate &other, ListEventIntegrationsRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws

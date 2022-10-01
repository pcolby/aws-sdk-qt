// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventintegrationassociationsrequest.h"
#include "listeventintegrationassociationsrequest_p.h"
#include "listeventintegrationassociationsresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationAssociationsRequest
 * \brief The ListEventIntegrationAssociationsRequest class provides an interface for AppIntegrations ListEventIntegrationAssociations requests.
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
 * \sa AppIntegrationsClient::listEventIntegrationAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventIntegrationAssociationsRequest::ListEventIntegrationAssociationsRequest(const ListEventIntegrationAssociationsRequest &other)
    : AppIntegrationsRequest(new ListEventIntegrationAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventIntegrationAssociationsRequest object.
 */
ListEventIntegrationAssociationsRequest::ListEventIntegrationAssociationsRequest()
    : AppIntegrationsRequest(new ListEventIntegrationAssociationsRequestPrivate(AppIntegrationsRequest::ListEventIntegrationAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventIntegrationAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventIntegrationAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventIntegrationAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventIntegrationAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::ListEventIntegrationAssociationsRequestPrivate
 * \brief The ListEventIntegrationAssociationsRequestPrivate class provides private implementation for ListEventIntegrationAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListEventIntegrationAssociationsRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
ListEventIntegrationAssociationsRequestPrivate::ListEventIntegrationAssociationsRequestPrivate(
    const AppIntegrationsRequest::Action action, ListEventIntegrationAssociationsRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventIntegrationAssociationsRequest
 * class' copy constructor.
 */
ListEventIntegrationAssociationsRequestPrivate::ListEventIntegrationAssociationsRequestPrivate(
    const ListEventIntegrationAssociationsRequestPrivate &other, ListEventIntegrationAssociationsRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws

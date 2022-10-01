// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataintegrationassociationsrequest.h"
#include "listdataintegrationassociationsrequest_p.h"
#include "listdataintegrationassociationsresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationAssociationsRequest
 * \brief The ListDataIntegrationAssociationsRequest class provides an interface for AppIntegrations ListDataIntegrationAssociations requests.
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
 * \sa AppIntegrationsClient::listDataIntegrationAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataIntegrationAssociationsRequest::ListDataIntegrationAssociationsRequest(const ListDataIntegrationAssociationsRequest &other)
    : AppIntegrationsRequest(new ListDataIntegrationAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataIntegrationAssociationsRequest object.
 */
ListDataIntegrationAssociationsRequest::ListDataIntegrationAssociationsRequest()
    : AppIntegrationsRequest(new ListDataIntegrationAssociationsRequestPrivate(AppIntegrationsRequest::ListDataIntegrationAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataIntegrationAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataIntegrationAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataIntegrationAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataIntegrationAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationAssociationsRequestPrivate
 * \brief The ListDataIntegrationAssociationsRequestPrivate class provides private implementation for ListDataIntegrationAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListDataIntegrationAssociationsRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
ListDataIntegrationAssociationsRequestPrivate::ListDataIntegrationAssociationsRequestPrivate(
    const AppIntegrationsRequest::Action action, ListDataIntegrationAssociationsRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataIntegrationAssociationsRequest
 * class' copy constructor.
 */
ListDataIntegrationAssociationsRequestPrivate::ListDataIntegrationAssociationsRequestPrivate(
    const ListDataIntegrationAssociationsRequestPrivate &other, ListDataIntegrationAssociationsRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws

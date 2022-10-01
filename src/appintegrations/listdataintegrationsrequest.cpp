// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataintegrationsrequest.h"
#include "listdataintegrationsrequest_p.h"
#include "listdataintegrationsresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationsRequest
 * \brief The ListDataIntegrationsRequest class provides an interface for AppIntegrations ListDataIntegrations requests.
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
 * \sa AppIntegrationsClient::listDataIntegrations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataIntegrationsRequest::ListDataIntegrationsRequest(const ListDataIntegrationsRequest &other)
    : AppIntegrationsRequest(new ListDataIntegrationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataIntegrationsRequest object.
 */
ListDataIntegrationsRequest::ListDataIntegrationsRequest()
    : AppIntegrationsRequest(new ListDataIntegrationsRequestPrivate(AppIntegrationsRequest::ListDataIntegrationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataIntegrationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataIntegrationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataIntegrationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataIntegrationsResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::ListDataIntegrationsRequestPrivate
 * \brief The ListDataIntegrationsRequestPrivate class provides private implementation for ListDataIntegrationsRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a ListDataIntegrationsRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
ListDataIntegrationsRequestPrivate::ListDataIntegrationsRequestPrivate(
    const AppIntegrationsRequest::Action action, ListDataIntegrationsRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataIntegrationsRequest
 * class' copy constructor.
 */
ListDataIntegrationsRequestPrivate::ListDataIntegrationsRequestPrivate(
    const ListDataIntegrationsRequestPrivate &other, ListDataIntegrationsRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws

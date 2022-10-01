/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

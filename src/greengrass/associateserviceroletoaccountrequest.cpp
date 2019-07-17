/*
    Copyright 2013-2019 Paul Colby

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

#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountrequest_p.h"
#include "associateserviceroletoaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::AssociateServiceRoleToAccountRequest
 * \brief The AssociateServiceRoleToAccountRequest class provides an interface for Greengrass AssociateServiceRoleToAccount requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::associateServiceRoleToAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest(const AssociateServiceRoleToAccountRequest &other)
    : GreengrassRequest(new AssociateServiceRoleToAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateServiceRoleToAccountRequest object.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest()
    : GreengrassRequest(new AssociateServiceRoleToAccountRequestPrivate(GreengrassRequest::AssociateServiceRoleToAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateServiceRoleToAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateServiceRoleToAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateServiceRoleToAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateServiceRoleToAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::AssociateServiceRoleToAccountRequestPrivate
 * \brief The AssociateServiceRoleToAccountRequestPrivate class provides private implementation for AssociateServiceRoleToAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a AssociateServiceRoleToAccountRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const GreengrassRequest::Action action, AssociateServiceRoleToAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateServiceRoleToAccountRequest
 * class' copy constructor.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const AssociateServiceRoleToAccountRequestPrivate &other, AssociateServiceRoleToAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

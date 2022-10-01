// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

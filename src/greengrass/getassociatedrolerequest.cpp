// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassociatedrolerequest.h"
#include "getassociatedrolerequest_p.h"
#include "getassociatedroleresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleRequest
 * \brief The GetAssociatedRoleRequest class provides an interface for Greengrass GetAssociatedRole requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getAssociatedRole
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest(const GetAssociatedRoleRequest &other)
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssociatedRoleRequest object.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest()
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(GreengrassRequest::GetAssociatedRoleAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssociatedRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssociatedRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssociatedRoleRequest::response(QNetworkReply * const reply) const
{
    return new GetAssociatedRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetAssociatedRoleRequestPrivate
 * \brief The GetAssociatedRoleRequestPrivate class provides private implementation for GetAssociatedRoleRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetAssociatedRoleRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GreengrassRequest::Action action, GetAssociatedRoleRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssociatedRoleRequest
 * class' copy constructor.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GetAssociatedRoleRequestPrivate &other, GetAssociatedRoleRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateroletogrouprequest.h"
#include "associateroletogrouprequest_p.h"
#include "associateroletogroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::AssociateRoleToGroupRequest
 * \brief The AssociateRoleToGroupRequest class provides an interface for Greengrass AssociateRoleToGroup requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::associateRoleToGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateRoleToGroupRequest::AssociateRoleToGroupRequest(const AssociateRoleToGroupRequest &other)
    : GreengrassRequest(new AssociateRoleToGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateRoleToGroupRequest object.
 */
AssociateRoleToGroupRequest::AssociateRoleToGroupRequest()
    : GreengrassRequest(new AssociateRoleToGroupRequestPrivate(GreengrassRequest::AssociateRoleToGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateRoleToGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateRoleToGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateRoleToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AssociateRoleToGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::AssociateRoleToGroupRequestPrivate
 * \brief The AssociateRoleToGroupRequestPrivate class provides private implementation for AssociateRoleToGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a AssociateRoleToGroupRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
AssociateRoleToGroupRequestPrivate::AssociateRoleToGroupRequestPrivate(
    const GreengrassRequest::Action action, AssociateRoleToGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateRoleToGroupRequest
 * class' copy constructor.
 */
AssociateRoleToGroupRequestPrivate::AssociateRoleToGroupRequestPrivate(
    const AssociateRoleToGroupRequestPrivate &other, AssociateRoleToGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

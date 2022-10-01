// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociaterolefromgrouprequest.h"
#include "disassociaterolefromgrouprequest_p.h"
#include "disassociaterolefromgroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupRequest
 * \brief The DisassociateRoleFromGroupRequest class provides an interface for Greengrass DisassociateRoleFromGroup requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::disassociateRoleFromGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest(const DisassociateRoleFromGroupRequest &other)
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateRoleFromGroupRequest object.
 */
DisassociateRoleFromGroupRequest::DisassociateRoleFromGroupRequest()
    : GreengrassRequest(new DisassociateRoleFromGroupRequestPrivate(GreengrassRequest::DisassociateRoleFromGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateRoleFromGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateRoleFromGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateRoleFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateRoleFromGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DisassociateRoleFromGroupRequestPrivate
 * \brief The DisassociateRoleFromGroupRequestPrivate class provides private implementation for DisassociateRoleFromGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DisassociateRoleFromGroupRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const GreengrassRequest::Action action, DisassociateRoleFromGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateRoleFromGroupRequest
 * class' copy constructor.
 */
DisassociateRoleFromGroupRequestPrivate::DisassociateRoleFromGroupRequestPrivate(
    const DisassociateRoleFromGroupRequestPrivate &other, DisassociateRoleFromGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

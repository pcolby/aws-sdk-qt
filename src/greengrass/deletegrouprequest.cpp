// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteGroupRequest
 * \brief The DeleteGroupRequest class provides an interface for Greengrass DeleteGroup requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : GreengrassRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : GreengrassRequest(new DeleteGroupRequestPrivate(GreengrassRequest::DeleteGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteGroupRequestPrivate
 * \brief The DeleteGroupRequestPrivate class provides private implementation for DeleteGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteGroupRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const GreengrassRequest::Action action, DeleteGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws

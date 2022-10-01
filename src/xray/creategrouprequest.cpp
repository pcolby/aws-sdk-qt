// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrouprequest.h"
#include "creategrouprequest_p.h"
#include "creategroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::CreateGroupRequest
 * \brief The CreateGroupRequest class provides an interface for XRay CreateGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::createGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest &other)
    : XRayRequest(new CreateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupRequest object.
 */
CreateGroupRequest::CreateGroupRequest()
    : XRayRequest(new CreateGroupRequestPrivate(XRayRequest::CreateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::CreateGroupRequestPrivate
 * \brief The CreateGroupRequestPrivate class provides private implementation for CreateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a CreateGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const XRayRequest::Action action, CreateGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupRequest
 * class' copy constructor.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const CreateGroupRequestPrivate &other, CreateGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws

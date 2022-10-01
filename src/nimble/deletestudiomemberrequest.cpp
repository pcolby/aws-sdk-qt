// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiomemberrequest.h"
#include "deletestudiomemberrequest_p.h"
#include "deletestudiomemberresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioMemberRequest
 * \brief The DeleteStudioMemberRequest class provides an interface for Nimble DeleteStudioMember requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::deleteStudioMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioMemberRequest::DeleteStudioMemberRequest(const DeleteStudioMemberRequest &other)
    : NimbleRequest(new DeleteStudioMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioMemberRequest object.
 */
DeleteStudioMemberRequest::DeleteStudioMemberRequest()
    : NimbleRequest(new DeleteStudioMemberRequestPrivate(NimbleRequest::DeleteStudioMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteStudioMemberRequestPrivate
 * \brief The DeleteStudioMemberRequestPrivate class provides private implementation for DeleteStudioMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioMemberRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteStudioMemberRequestPrivate::DeleteStudioMemberRequestPrivate(
    const NimbleRequest::Action action, DeleteStudioMemberRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioMemberRequest
 * class' copy constructor.
 */
DeleteStudioMemberRequestPrivate::DeleteStudioMemberRequestPrivate(
    const DeleteStudioMemberRequestPrivate &other, DeleteStudioMemberRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

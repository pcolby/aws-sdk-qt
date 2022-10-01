// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstudiomembersrequest.h"
#include "putstudiomembersrequest_p.h"
#include "putstudiomembersresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::PutStudioMembersRequest
 * \brief The PutStudioMembersRequest class provides an interface for Nimble PutStudioMembers requests.
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
 * \sa NimbleClient::putStudioMembers
 */

/*!
 * Constructs a copy of \a other.
 */
PutStudioMembersRequest::PutStudioMembersRequest(const PutStudioMembersRequest &other)
    : NimbleRequest(new PutStudioMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutStudioMembersRequest object.
 */
PutStudioMembersRequest::PutStudioMembersRequest()
    : NimbleRequest(new PutStudioMembersRequestPrivate(NimbleRequest::PutStudioMembersAction, this))
{

}

/*!
 * \reimp
 */
bool PutStudioMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutStudioMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutStudioMembersRequest::response(QNetworkReply * const reply) const
{
    return new PutStudioMembersResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::PutStudioMembersRequestPrivate
 * \brief The PutStudioMembersRequestPrivate class provides private implementation for PutStudioMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a PutStudioMembersRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
PutStudioMembersRequestPrivate::PutStudioMembersRequestPrivate(
    const NimbleRequest::Action action, PutStudioMembersRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutStudioMembersRequest
 * class' copy constructor.
 */
PutStudioMembersRequestPrivate::PutStudioMembersRequestPrivate(
    const PutStudioMembersRequestPrivate &other, PutStudioMembersRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

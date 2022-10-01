// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for Nimble UntagResource requests.
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
 * \sa NimbleClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : NimbleRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : NimbleRequest(new UntagResourceRequestPrivate(NimbleRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const NimbleRequest::Action action, UntagResourceRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

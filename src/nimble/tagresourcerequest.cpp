// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for Nimble TagResource requests.
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
 * \sa NimbleClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : NimbleRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : NimbleRequest(new TagResourceRequestPrivate(NimbleRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a TagResourceRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const NimbleRequest::Action action, TagResourceRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

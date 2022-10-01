// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for Wisdom UntagResource requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : WisdomRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : WisdomRequest(new UntagResourceRequestPrivate(WisdomRequest::UntagResourceAction, this))
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
 * \class QtAws::Wisdom::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const WisdomRequest::Action action, UntagResourceRequest * const q)
    : WisdomRequestPrivate(action, q)
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
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws

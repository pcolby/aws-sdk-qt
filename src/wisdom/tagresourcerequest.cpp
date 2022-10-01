// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for Wisdom TagResource requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : WisdomRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : WisdomRequest(new TagResourceRequestPrivate(WisdomRequest::TagResourceAction, this))
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
 * \class QtAws::Wisdom::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a TagResourceRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const WisdomRequest::Action action, TagResourceRequest * const q)
    : WisdomRequestPrivate(action, q)
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
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcerequest.h"
#include "listtagsforresourcerequest_p.h"
#include "listtagsforresourceresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTagsForResourceRequest
 * \brief The ListTagsForResourceRequest class provides an interface for Pinpoint ListTagsForResource requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest(const ListTagsForResourceRequest &other)
    : PinpointRequest(new ListTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourceRequest object.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest()
    : PinpointRequest(new ListTagsForResourceRequestPrivate(PinpointRequest::ListTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListTagsForResourceRequestPrivate
 * \brief The ListTagsForResourceRequestPrivate class provides private implementation for ListTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTagsForResourceRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const PinpointRequest::Action action, ListTagsForResourceRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourceRequest
 * class' copy constructor.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ListTagsForResourceRequestPrivate &other, ListTagsForResourceRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws

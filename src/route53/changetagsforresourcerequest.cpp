// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changetagsforresourcerequest.h"
#include "changetagsforresourcerequest_p.h"
#include "changetagsforresourceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeTagsForResourceRequest
 * \brief The ChangeTagsForResourceRequest class provides an interface for Route53 ChangeTagsForResource requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::changeTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeTagsForResourceRequest::ChangeTagsForResourceRequest(const ChangeTagsForResourceRequest &other)
    : Route53Request(new ChangeTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeTagsForResourceRequest object.
 */
ChangeTagsForResourceRequest::ChangeTagsForResourceRequest()
    : Route53Request(new ChangeTagsForResourceRequestPrivate(Route53Request::ChangeTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangeTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ChangeTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ChangeTagsForResourceRequestPrivate
 * \brief The ChangeTagsForResourceRequestPrivate class provides private implementation for ChangeTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeTagsForResourceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ChangeTagsForResourceRequestPrivate::ChangeTagsForResourceRequestPrivate(
    const Route53Request::Action action, ChangeTagsForResourceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangeTagsForResourceRequest
 * class' copy constructor.
 */
ChangeTagsForResourceRequestPrivate::ChangeTagsForResourceRequestPrivate(
    const ChangeTagsForResourceRequestPrivate &other, ChangeTagsForResourceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws

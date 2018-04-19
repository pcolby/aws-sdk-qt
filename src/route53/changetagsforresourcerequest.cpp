/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a ChangeTagsForResourceRequestPrivate object for Route53 \a action with,
 * public implementation \a q.
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

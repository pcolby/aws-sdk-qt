// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsharedendpointsrequest.h"
#include "listsharedendpointsrequest_p.h"
#include "listsharedendpointsresponse.h"
#include "s3outpostsrequest_p.h"

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsRequest
 * \brief The ListSharedEndpointsRequest class provides an interface for S3Outposts ListSharedEndpoints requests.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::listSharedEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListSharedEndpointsRequest::ListSharedEndpointsRequest(const ListSharedEndpointsRequest &other)
    : S3OutpostsRequest(new ListSharedEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSharedEndpointsRequest object.
 */
ListSharedEndpointsRequest::ListSharedEndpointsRequest()
    : S3OutpostsRequest(new ListSharedEndpointsRequestPrivate(S3OutpostsRequest::ListSharedEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSharedEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSharedEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSharedEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListSharedEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Outposts::ListSharedEndpointsRequestPrivate
 * \brief The ListSharedEndpointsRequestPrivate class provides private implementation for ListSharedEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a ListSharedEndpointsRequestPrivate object for S3Outposts \a action,
 * with public implementation \a q.
 */
ListSharedEndpointsRequestPrivate::ListSharedEndpointsRequestPrivate(
    const S3OutpostsRequest::Action action, ListSharedEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSharedEndpointsRequest
 * class' copy constructor.
 */
ListSharedEndpointsRequestPrivate::ListSharedEndpointsRequestPrivate(
    const ListSharedEndpointsRequestPrivate &other, ListSharedEndpointsRequest * const q)
    : S3OutpostsRequestPrivate(other, q)
{

}

} // namespace S3Outposts
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregionalbucketsrequest.h"
#include "listregionalbucketsrequest_p.h"
#include "listregionalbucketsresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListRegionalBucketsRequest
 * \brief The ListRegionalBucketsRequest class provides an interface for S3Control ListRegionalBuckets requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listRegionalBuckets
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegionalBucketsRequest::ListRegionalBucketsRequest(const ListRegionalBucketsRequest &other)
    : S3ControlRequest(new ListRegionalBucketsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegionalBucketsRequest object.
 */
ListRegionalBucketsRequest::ListRegionalBucketsRequest()
    : S3ControlRequest(new ListRegionalBucketsRequestPrivate(S3ControlRequest::ListRegionalBucketsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegionalBucketsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegionalBucketsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegionalBucketsRequest::response(QNetworkReply * const reply) const
{
    return new ListRegionalBucketsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::ListRegionalBucketsRequestPrivate
 * \brief The ListRegionalBucketsRequestPrivate class provides private implementation for ListRegionalBucketsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListRegionalBucketsRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
ListRegionalBucketsRequestPrivate::ListRegionalBucketsRequestPrivate(
    const S3ControlRequest::Action action, ListRegionalBucketsRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegionalBucketsRequest
 * class' copy constructor.
 */
ListRegionalBucketsRequestPrivate::ListRegionalBucketsRequestPrivate(
    const ListRegionalBucketsRequestPrivate &other, ListRegionalBucketsRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws

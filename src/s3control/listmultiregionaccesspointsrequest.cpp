// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultiregionaccesspointsrequest.h"
#include "listmultiregionaccesspointsrequest_p.h"
#include "listmultiregionaccesspointsresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsRequest
 * \brief The ListMultiRegionAccessPointsRequest class provides an interface for S3Control ListMultiRegionAccessPoints requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listMultiRegionAccessPoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultiRegionAccessPointsRequest::ListMultiRegionAccessPointsRequest(const ListMultiRegionAccessPointsRequest &other)
    : S3ControlRequest(new ListMultiRegionAccessPointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultiRegionAccessPointsRequest object.
 */
ListMultiRegionAccessPointsRequest::ListMultiRegionAccessPointsRequest()
    : S3ControlRequest(new ListMultiRegionAccessPointsRequestPrivate(S3ControlRequest::ListMultiRegionAccessPointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultiRegionAccessPointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultiRegionAccessPointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultiRegionAccessPointsRequest::response(QNetworkReply * const reply) const
{
    return new ListMultiRegionAccessPointsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::ListMultiRegionAccessPointsRequestPrivate
 * \brief The ListMultiRegionAccessPointsRequestPrivate class provides private implementation for ListMultiRegionAccessPointsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListMultiRegionAccessPointsRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
ListMultiRegionAccessPointsRequestPrivate::ListMultiRegionAccessPointsRequestPrivate(
    const S3ControlRequest::Action action, ListMultiRegionAccessPointsRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultiRegionAccessPointsRequest
 * class' copy constructor.
 */
ListMultiRegionAccessPointsRequestPrivate::ListMultiRegionAccessPointsRequestPrivate(
    const ListMultiRegionAccessPointsRequestPrivate &other, ListMultiRegionAccessPointsRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws

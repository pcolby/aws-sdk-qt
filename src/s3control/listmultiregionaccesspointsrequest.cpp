/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

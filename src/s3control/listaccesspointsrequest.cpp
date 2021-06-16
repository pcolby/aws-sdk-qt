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

#include "listaccesspointsrequest.h"
#include "listaccesspointsrequest_p.h"
#include "listaccesspointsresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsRequest
 * \brief The ListAccessPointsRequest class provides an interface for S3Control ListAccessPoints requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccessPointsRequest::ListAccessPointsRequest(const ListAccessPointsRequest &other)
    : S3ControlRequest(new ListAccessPointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccessPointsRequest object.
 */
ListAccessPointsRequest::ListAccessPointsRequest()
    : S3ControlRequest(new ListAccessPointsRequestPrivate(S3ControlRequest::ListAccessPointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccessPointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccessPointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccessPointsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessPointsResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::ListAccessPointsRequestPrivate
 * \brief The ListAccessPointsRequestPrivate class provides private implementation for ListAccessPointsRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
ListAccessPointsRequestPrivate::ListAccessPointsRequestPrivate(
    const S3ControlRequest::Action action, ListAccessPointsRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccessPointsRequest
 * class' copy constructor.
 */
ListAccessPointsRequestPrivate::ListAccessPointsRequestPrivate(
    const ListAccessPointsRequestPrivate &other, ListAccessPointsRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws

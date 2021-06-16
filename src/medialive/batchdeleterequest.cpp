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

#include "batchdeleterequest.h"
#include "batchdeleterequest_p.h"
#include "batchdeleteresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchDeleteRequest
 * \brief The BatchDeleteRequest class provides an interface for MediaLive BatchDelete requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchDelete
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteRequest::BatchDeleteRequest(const BatchDeleteRequest &other)
    : MediaLiveRequest(new BatchDeleteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteRequest object.
 */
BatchDeleteRequest::BatchDeleteRequest()
    : MediaLiveRequest(new BatchDeleteRequestPrivate(MediaLiveRequest::BatchDeleteAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchDeleteRequestPrivate
 * \brief The BatchDeleteRequestPrivate class provides private implementation for BatchDeleteRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchDeleteRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchDeleteRequestPrivate::BatchDeleteRequestPrivate(
    const MediaLiveRequest::Action action, BatchDeleteRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteRequest
 * class' copy constructor.
 */
BatchDeleteRequestPrivate::BatchDeleteRequestPrivate(
    const BatchDeleteRequestPrivate &other, BatchDeleteRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

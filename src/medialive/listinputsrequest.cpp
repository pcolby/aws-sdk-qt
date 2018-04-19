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

#include "listinputsrequest.h"
#include "listinputsrequest_p.h"
#include "listinputsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputsRequest
 * \brief The ListInputsRequest class provides an interface for MediaLive ListInputs requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputs
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputsRequest::ListInputsRequest(const ListInputsRequest &other)
    : MediaLiveRequest(new ListInputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputsRequest object.
 */
ListInputsRequest::ListInputsRequest()
    : MediaLiveRequest(new ListInputsRequestPrivate(MediaLiveRequest::ListInputsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListInputsRequestPrivate
 * \brief The ListInputsRequestPrivate class provides private implementation for ListInputsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 *
 * Constructs a ListInputsRequestPrivate object for MediaLive \a action with,
 * public implementation \a q.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const MediaLiveRequest::Action action, ListInputsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputsRequest
 * class' copy constructor.
 */
ListInputsRequestPrivate::ListInputsRequestPrivate(
    const ListInputsRequestPrivate &other, ListInputsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

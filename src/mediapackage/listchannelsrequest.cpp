/*
    Copyright 2013-2020 Paul Colby

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

#include "listchannelsrequest.h"
#include "listchannelsrequest_p.h"
#include "listchannelsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListChannelsRequest
 * \brief The ListChannelsRequest class provides an interface for MediaPackage ListChannels requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsRequest::ListChannelsRequest(const ListChannelsRequest &other)
    : MediaPackageRequest(new ListChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsRequest object.
 */
ListChannelsRequest::ListChannelsRequest()
    : MediaPackageRequest(new ListChannelsRequestPrivate(MediaPackageRequest::ListChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::ListChannelsRequestPrivate
 * \brief The ListChannelsRequestPrivate class provides private implementation for ListChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListChannelsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const MediaPackageRequest::Action action, ListChannelsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsRequest
 * class' copy constructor.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const ListChannelsRequestPrivate &other, ListChannelsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws

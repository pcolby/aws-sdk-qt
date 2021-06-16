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

#include "createmultiplexrequest.h"
#include "createmultiplexrequest_p.h"
#include "createmultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexRequest
 * \brief The CreateMultiplexRequest class provides an interface for MediaLive CreateMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMultiplexRequest::CreateMultiplexRequest(const CreateMultiplexRequest &other)
    : MediaLiveRequest(new CreateMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMultiplexRequest object.
 */
CreateMultiplexRequest::CreateMultiplexRequest()
    : MediaLiveRequest(new CreateMultiplexRequestPrivate(MediaLiveRequest::CreateMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new CreateMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexRequestPrivate
 * \brief The CreateMultiplexRequestPrivate class provides private implementation for CreateMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateMultiplexRequestPrivate::CreateMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, CreateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMultiplexRequest
 * class' copy constructor.
 */
CreateMultiplexRequestPrivate::CreateMultiplexRequestPrivate(
    const CreateMultiplexRequestPrivate &other, CreateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

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

#include "createmultiplexprogramrequest.h"
#include "createmultiplexprogramrequest_p.h"
#include "createmultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramRequest
 * \brief The CreateMultiplexProgramRequest class provides an interface for MediaLive CreateMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMultiplexProgramRequest::CreateMultiplexProgramRequest(const CreateMultiplexProgramRequest &other)
    : MediaLiveRequest(new CreateMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMultiplexProgramRequest object.
 */
CreateMultiplexProgramRequest::CreateMultiplexProgramRequest()
    : MediaLiveRequest(new CreateMultiplexProgramRequestPrivate(MediaLiveRequest::CreateMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new CreateMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexProgramRequestPrivate
 * \brief The CreateMultiplexProgramRequestPrivate class provides private implementation for CreateMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateMultiplexProgramRequestPrivate::CreateMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, CreateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMultiplexProgramRequest
 * class' copy constructor.
 */
CreateMultiplexProgramRequestPrivate::CreateMultiplexProgramRequestPrivate(
    const CreateMultiplexProgramRequestPrivate &other, CreateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

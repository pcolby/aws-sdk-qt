/*
    Copyright 2013-2019 Paul Colby

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

#include "createinputrequest.h"
#include "createinputrequest_p.h"
#include "createinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputRequest
 * \brief The CreateInputRequest class provides an interface for MediaLive CreateInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInput
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInputRequest::CreateInputRequest(const CreateInputRequest &other)
    : MediaLiveRequest(new CreateInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInputRequest object.
 */
CreateInputRequest::CreateInputRequest()
    : MediaLiveRequest(new CreateInputRequestPrivate(MediaLiveRequest::CreateInputAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateInputRequestPrivate
 * \brief The CreateInputRequestPrivate class provides private implementation for CreateInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const MediaLiveRequest::Action action, CreateInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInputRequest
 * class' copy constructor.
 */
CreateInputRequestPrivate::CreateInputRequestPrivate(
    const CreateInputRequestPrivate &other, CreateInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

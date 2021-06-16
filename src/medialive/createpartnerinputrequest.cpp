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

#include "createpartnerinputrequest.h"
#include "createpartnerinputrequest_p.h"
#include "createpartnerinputresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreatePartnerInputRequest
 * \brief The CreatePartnerInputRequest class provides an interface for MediaLive CreatePartnerInput requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createPartnerInput
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePartnerInputRequest::CreatePartnerInputRequest(const CreatePartnerInputRequest &other)
    : MediaLiveRequest(new CreatePartnerInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePartnerInputRequest object.
 */
CreatePartnerInputRequest::CreatePartnerInputRequest()
    : MediaLiveRequest(new CreatePartnerInputRequestPrivate(MediaLiveRequest::CreatePartnerInputAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePartnerInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePartnerInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePartnerInputRequest::response(QNetworkReply * const reply) const
{
    return new CreatePartnerInputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreatePartnerInputRequestPrivate
 * \brief The CreatePartnerInputRequestPrivate class provides private implementation for CreatePartnerInputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreatePartnerInputRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreatePartnerInputRequestPrivate::CreatePartnerInputRequestPrivate(
    const MediaLiveRequest::Action action, CreatePartnerInputRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePartnerInputRequest
 * class' copy constructor.
 */
CreatePartnerInputRequestPrivate::CreatePartnerInputRequestPrivate(
    const CreatePartnerInputRequestPrivate &other, CreatePartnerInputRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws

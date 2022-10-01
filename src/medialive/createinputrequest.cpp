// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

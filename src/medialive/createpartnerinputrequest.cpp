// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

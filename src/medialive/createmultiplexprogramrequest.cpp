// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

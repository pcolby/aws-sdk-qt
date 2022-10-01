// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

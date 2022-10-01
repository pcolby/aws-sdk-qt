// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudiorequest.h"
#include "updatestudiorequest_p.h"
#include "updatestudioresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStudioRequest
 * \brief The UpdateStudioRequest class provides an interface for Nimble UpdateStudio requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::updateStudio
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioRequest::UpdateStudioRequest(const UpdateStudioRequest &other)
    : NimbleRequest(new UpdateStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioRequest object.
 */
UpdateStudioRequest::UpdateStudioRequest()
    : NimbleRequest(new UpdateStudioRequestPrivate(NimbleRequest::UpdateStudioAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UpdateStudioRequestPrivate
 * \brief The UpdateStudioRequestPrivate class provides private implementation for UpdateStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStudioRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const NimbleRequest::Action action, UpdateStudioRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioRequest
 * class' copy constructor.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const UpdateStudioRequestPrivate &other, UpdateStudioRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

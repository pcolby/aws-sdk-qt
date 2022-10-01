// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudiocomponentrequest.h"
#include "updatestudiocomponentrequest_p.h"
#include "updatestudiocomponentresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStudioComponentRequest
 * \brief The UpdateStudioComponentRequest class provides an interface for Nimble UpdateStudioComponent requests.
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
 * \sa NimbleClient::updateStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioComponentRequest::UpdateStudioComponentRequest(const UpdateStudioComponentRequest &other)
    : NimbleRequest(new UpdateStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioComponentRequest object.
 */
UpdateStudioComponentRequest::UpdateStudioComponentRequest()
    : NimbleRequest(new UpdateStudioComponentRequestPrivate(NimbleRequest::UpdateStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UpdateStudioComponentRequestPrivate
 * \brief The UpdateStudioComponentRequestPrivate class provides private implementation for UpdateStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStudioComponentRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UpdateStudioComponentRequestPrivate::UpdateStudioComponentRequestPrivate(
    const NimbleRequest::Action action, UpdateStudioComponentRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioComponentRequest
 * class' copy constructor.
 */
UpdateStudioComponentRequestPrivate::UpdateStudioComponentRequestPrivate(
    const UpdateStudioComponentRequestPrivate &other, UpdateStudioComponentRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

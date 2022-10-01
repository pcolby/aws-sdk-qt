// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofileinitializationrequest.h"
#include "getlaunchprofileinitializationrequest_p.h"
#include "getlaunchprofileinitializationresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileInitializationRequest
 * \brief The GetLaunchProfileInitializationRequest class provides an interface for Nimble GetLaunchProfileInitialization requests.
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
 * \sa NimbleClient::getLaunchProfileInitialization
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileInitializationRequest::GetLaunchProfileInitializationRequest(const GetLaunchProfileInitializationRequest &other)
    : NimbleRequest(new GetLaunchProfileInitializationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileInitializationRequest object.
 */
GetLaunchProfileInitializationRequest::GetLaunchProfileInitializationRequest()
    : NimbleRequest(new GetLaunchProfileInitializationRequestPrivate(NimbleRequest::GetLaunchProfileInitializationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileInitializationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileInitializationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileInitializationRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileInitializationResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileInitializationRequestPrivate
 * \brief The GetLaunchProfileInitializationRequestPrivate class provides private implementation for GetLaunchProfileInitializationRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileInitializationRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetLaunchProfileInitializationRequestPrivate::GetLaunchProfileInitializationRequestPrivate(
    const NimbleRequest::Action action, GetLaunchProfileInitializationRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileInitializationRequest
 * class' copy constructor.
 */
GetLaunchProfileInitializationRequestPrivate::GetLaunchProfileInitializationRequestPrivate(
    const GetLaunchProfileInitializationRequestPrivate &other, GetLaunchProfileInitializationRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

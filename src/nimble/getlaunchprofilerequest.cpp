// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofilerequest.h"
#include "getlaunchprofilerequest_p.h"
#include "getlaunchprofileresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileRequest
 * \brief The GetLaunchProfileRequest class provides an interface for Nimble GetLaunchProfile requests.
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
 * \sa NimbleClient::getLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileRequest::GetLaunchProfileRequest(const GetLaunchProfileRequest &other)
    : NimbleRequest(new GetLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileRequest object.
 */
GetLaunchProfileRequest::GetLaunchProfileRequest()
    : NimbleRequest(new GetLaunchProfileRequestPrivate(NimbleRequest::GetLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileRequestPrivate
 * \brief The GetLaunchProfileRequestPrivate class provides private implementation for GetLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetLaunchProfileRequestPrivate::GetLaunchProfileRequestPrivate(
    const NimbleRequest::Action action, GetLaunchProfileRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileRequest
 * class' copy constructor.
 */
GetLaunchProfileRequestPrivate::GetLaunchProfileRequestPrivate(
    const GetLaunchProfileRequestPrivate &other, GetLaunchProfileRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

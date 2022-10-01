// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofiledetailsrequest.h"
#include "getlaunchprofiledetailsrequest_p.h"
#include "getlaunchprofiledetailsresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileDetailsRequest
 * \brief The GetLaunchProfileDetailsRequest class provides an interface for Nimble GetLaunchProfileDetails requests.
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
 * \sa NimbleClient::getLaunchProfileDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileDetailsRequest::GetLaunchProfileDetailsRequest(const GetLaunchProfileDetailsRequest &other)
    : NimbleRequest(new GetLaunchProfileDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileDetailsRequest object.
 */
GetLaunchProfileDetailsRequest::GetLaunchProfileDetailsRequest()
    : NimbleRequest(new GetLaunchProfileDetailsRequestPrivate(NimbleRequest::GetLaunchProfileDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileDetailsRequestPrivate
 * \brief The GetLaunchProfileDetailsRequestPrivate class provides private implementation for GetLaunchProfileDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileDetailsRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetLaunchProfileDetailsRequestPrivate::GetLaunchProfileDetailsRequestPrivate(
    const NimbleRequest::Action action, GetLaunchProfileDetailsRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileDetailsRequest
 * class' copy constructor.
 */
GetLaunchProfileDetailsRequestPrivate::GetLaunchProfileDetailsRequestPrivate(
    const GetLaunchProfileDetailsRequestPrivate &other, GetLaunchProfileDetailsRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

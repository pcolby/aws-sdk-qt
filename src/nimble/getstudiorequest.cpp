// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiorequest.h"
#include "getstudiorequest_p.h"
#include "getstudioresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioRequest
 * \brief The GetStudioRequest class provides an interface for Nimble GetStudio requests.
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
 * \sa NimbleClient::getStudio
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioRequest::GetStudioRequest(const GetStudioRequest &other)
    : NimbleRequest(new GetStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioRequest object.
 */
GetStudioRequest::GetStudioRequest()
    : NimbleRequest(new GetStudioRequestPrivate(NimbleRequest::GetStudioAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStudioRequestPrivate
 * \brief The GetStudioRequestPrivate class provides private implementation for GetStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStudioRequestPrivate::GetStudioRequestPrivate(
    const NimbleRequest::Action action, GetStudioRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioRequest
 * class' copy constructor.
 */
GetStudioRequestPrivate::GetStudioRequestPrivate(
    const GetStudioRequestPrivate &other, GetStudioRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

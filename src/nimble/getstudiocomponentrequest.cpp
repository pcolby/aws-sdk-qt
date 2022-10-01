// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiocomponentrequest.h"
#include "getstudiocomponentrequest_p.h"
#include "getstudiocomponentresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioComponentRequest
 * \brief The GetStudioComponentRequest class provides an interface for Nimble GetStudioComponent requests.
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
 * \sa NimbleClient::getStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioComponentRequest::GetStudioComponentRequest(const GetStudioComponentRequest &other)
    : NimbleRequest(new GetStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioComponentRequest object.
 */
GetStudioComponentRequest::GetStudioComponentRequest()
    : NimbleRequest(new GetStudioComponentRequestPrivate(NimbleRequest::GetStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStudioComponentRequestPrivate
 * \brief The GetStudioComponentRequestPrivate class provides private implementation for GetStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioComponentRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStudioComponentRequestPrivate::GetStudioComponentRequestPrivate(
    const NimbleRequest::Action action, GetStudioComponentRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioComponentRequest
 * class' copy constructor.
 */
GetStudioComponentRequestPrivate::GetStudioComponentRequestPrivate(
    const GetStudioComponentRequestPrivate &other, GetStudioComponentRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

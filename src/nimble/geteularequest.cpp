// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteularequest.h"
#include "geteularequest_p.h"
#include "geteularesponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetEulaRequest
 * \brief The GetEulaRequest class provides an interface for Nimble GetEula requests.
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
 * \sa NimbleClient::getEula
 */

/*!
 * Constructs a copy of \a other.
 */
GetEulaRequest::GetEulaRequest(const GetEulaRequest &other)
    : NimbleRequest(new GetEulaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEulaRequest object.
 */
GetEulaRequest::GetEulaRequest()
    : NimbleRequest(new GetEulaRequestPrivate(NimbleRequest::GetEulaAction, this))
{

}

/*!
 * \reimp
 */
bool GetEulaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEulaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEulaRequest::response(QNetworkReply * const reply) const
{
    return new GetEulaResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetEulaRequestPrivate
 * \brief The GetEulaRequestPrivate class provides private implementation for GetEulaRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetEulaRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetEulaRequestPrivate::GetEulaRequestPrivate(
    const NimbleRequest::Action action, GetEulaRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEulaRequest
 * class' copy constructor.
 */
GetEulaRequestPrivate::GetEulaRequestPrivate(
    const GetEulaRequestPrivate &other, GetEulaRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getterminologyrequest.h"
#include "getterminologyrequest_p.h"
#include "getterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetTerminologyRequest
 * \brief The GetTerminologyRequest class provides an interface for Translate GetTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
GetTerminologyRequest::GetTerminologyRequest(const GetTerminologyRequest &other)
    : TranslateRequest(new GetTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTerminologyRequest object.
 */
GetTerminologyRequest::GetTerminologyRequest()
    : TranslateRequest(new GetTerminologyRequestPrivate(TranslateRequest::GetTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool GetTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new GetTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::GetTerminologyRequestPrivate
 * \brief The GetTerminologyRequestPrivate class provides private implementation for GetTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
GetTerminologyRequestPrivate::GetTerminologyRequestPrivate(
    const TranslateRequest::Action action, GetTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTerminologyRequest
 * class' copy constructor.
 */
GetTerminologyRequestPrivate::GetTerminologyRequestPrivate(
    const GetTerminologyRequestPrivate &other, GetTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

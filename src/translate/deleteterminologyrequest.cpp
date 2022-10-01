// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteterminologyrequest.h"
#include "deleteterminologyrequest_p.h"
#include "deleteterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteTerminologyRequest
 * \brief The DeleteTerminologyRequest class provides an interface for Translate DeleteTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTerminologyRequest::DeleteTerminologyRequest(const DeleteTerminologyRequest &other)
    : TranslateRequest(new DeleteTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTerminologyRequest object.
 */
DeleteTerminologyRequest::DeleteTerminologyRequest()
    : TranslateRequest(new DeleteTerminologyRequestPrivate(TranslateRequest::DeleteTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::DeleteTerminologyRequestPrivate
 * \brief The DeleteTerminologyRequestPrivate class provides private implementation for DeleteTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
DeleteTerminologyRequestPrivate::DeleteTerminologyRequestPrivate(
    const TranslateRequest::Action action, DeleteTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTerminologyRequest
 * class' copy constructor.
 */
DeleteTerminologyRequestPrivate::DeleteTerminologyRequestPrivate(
    const DeleteTerminologyRequestPrivate &other, DeleteTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

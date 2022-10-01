// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importterminologyrequest.h"
#include "importterminologyrequest_p.h"
#include "importterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ImportTerminologyRequest
 * \brief The ImportTerminologyRequest class provides an interface for Translate ImportTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::importTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
ImportTerminologyRequest::ImportTerminologyRequest(const ImportTerminologyRequest &other)
    : TranslateRequest(new ImportTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportTerminologyRequest object.
 */
ImportTerminologyRequest::ImportTerminologyRequest()
    : TranslateRequest(new ImportTerminologyRequestPrivate(TranslateRequest::ImportTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool ImportTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new ImportTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ImportTerminologyRequestPrivate
 * \brief The ImportTerminologyRequestPrivate class provides private implementation for ImportTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ImportTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ImportTerminologyRequestPrivate::ImportTerminologyRequestPrivate(
    const TranslateRequest::Action action, ImportTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportTerminologyRequest
 * class' copy constructor.
 */
ImportTerminologyRequestPrivate::ImportTerminologyRequestPrivate(
    const ImportTerminologyRequestPrivate &other, ImportTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptexttranslationjobrequest.h"
#include "stoptexttranslationjobrequest_p.h"
#include "stoptexttranslationjobresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::StopTextTranslationJobRequest
 * \brief The StopTextTranslationJobRequest class provides an interface for Translate StopTextTranslationJob requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::stopTextTranslationJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTextTranslationJobRequest::StopTextTranslationJobRequest(const StopTextTranslationJobRequest &other)
    : TranslateRequest(new StopTextTranslationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTextTranslationJobRequest object.
 */
StopTextTranslationJobRequest::StopTextTranslationJobRequest()
    : TranslateRequest(new StopTextTranslationJobRequestPrivate(TranslateRequest::StopTextTranslationJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTextTranslationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTextTranslationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTextTranslationJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTextTranslationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::StopTextTranslationJobRequestPrivate
 * \brief The StopTextTranslationJobRequestPrivate class provides private implementation for StopTextTranslationJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a StopTextTranslationJobRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
StopTextTranslationJobRequestPrivate::StopTextTranslationJobRequestPrivate(
    const TranslateRequest::Action action, StopTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTextTranslationJobRequest
 * class' copy constructor.
 */
StopTextTranslationJobRequestPrivate::StopTextTranslationJobRequestPrivate(
    const StopTextTranslationJobRequestPrivate &other, StopTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

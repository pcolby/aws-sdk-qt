// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttexttranslationjobrequest.h"
#include "starttexttranslationjobrequest_p.h"
#include "starttexttranslationjobresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::StartTextTranslationJobRequest
 * \brief The StartTextTranslationJobRequest class provides an interface for Translate StartTextTranslationJob requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::startTextTranslationJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTextTranslationJobRequest::StartTextTranslationJobRequest(const StartTextTranslationJobRequest &other)
    : TranslateRequest(new StartTextTranslationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTextTranslationJobRequest object.
 */
StartTextTranslationJobRequest::StartTextTranslationJobRequest()
    : TranslateRequest(new StartTextTranslationJobRequestPrivate(TranslateRequest::StartTextTranslationJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTextTranslationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTextTranslationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTextTranslationJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTextTranslationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::StartTextTranslationJobRequestPrivate
 * \brief The StartTextTranslationJobRequestPrivate class provides private implementation for StartTextTranslationJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a StartTextTranslationJobRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
StartTextTranslationJobRequestPrivate::StartTextTranslationJobRequestPrivate(
    const TranslateRequest::Action action, StartTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTextTranslationJobRequest
 * class' copy constructor.
 */
StartTextTranslationJobRequestPrivate::StartTextTranslationJobRequestPrivate(
    const StartTextTranslationJobRequestPrivate &other, StartTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

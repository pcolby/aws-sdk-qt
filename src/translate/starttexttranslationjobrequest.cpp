/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

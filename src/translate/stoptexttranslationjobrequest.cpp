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

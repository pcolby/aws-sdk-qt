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

#include "describetexttranslationjobrequest.h"
#include "describetexttranslationjobrequest_p.h"
#include "describetexttranslationjobresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DescribeTextTranslationJobRequest
 * \brief The DescribeTextTranslationJobRequest class provides an interface for Translate DescribeTextTranslationJob requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::describeTextTranslationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTextTranslationJobRequest::DescribeTextTranslationJobRequest(const DescribeTextTranslationJobRequest &other)
    : TranslateRequest(new DescribeTextTranslationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTextTranslationJobRequest object.
 */
DescribeTextTranslationJobRequest::DescribeTextTranslationJobRequest()
    : TranslateRequest(new DescribeTextTranslationJobRequestPrivate(TranslateRequest::DescribeTextTranslationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTextTranslationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTextTranslationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTextTranslationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTextTranslationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::DescribeTextTranslationJobRequestPrivate
 * \brief The DescribeTextTranslationJobRequestPrivate class provides private implementation for DescribeTextTranslationJobRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DescribeTextTranslationJobRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
DescribeTextTranslationJobRequestPrivate::DescribeTextTranslationJobRequestPrivate(
    const TranslateRequest::Action action, DescribeTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTextTranslationJobRequest
 * class' copy constructor.
 */
DescribeTextTranslationJobRequestPrivate::DescribeTextTranslationJobRequestPrivate(
    const DescribeTextTranslationJobRequestPrivate &other, DescribeTextTranslationJobRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

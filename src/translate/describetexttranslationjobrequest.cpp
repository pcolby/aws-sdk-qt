// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

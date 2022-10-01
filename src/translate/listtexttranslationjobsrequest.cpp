// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtexttranslationjobsrequest.h"
#include "listtexttranslationjobsrequest_p.h"
#include "listtexttranslationjobsresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTextTranslationJobsRequest
 * \brief The ListTextTranslationJobsRequest class provides an interface for Translate ListTextTranslationJobs requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTextTranslationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTextTranslationJobsRequest::ListTextTranslationJobsRequest(const ListTextTranslationJobsRequest &other)
    : TranslateRequest(new ListTextTranslationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTextTranslationJobsRequest object.
 */
ListTextTranslationJobsRequest::ListTextTranslationJobsRequest()
    : TranslateRequest(new ListTextTranslationJobsRequestPrivate(TranslateRequest::ListTextTranslationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTextTranslationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTextTranslationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTextTranslationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTextTranslationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListTextTranslationJobsRequestPrivate
 * \brief The ListTextTranslationJobsRequestPrivate class provides private implementation for ListTextTranslationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTextTranslationJobsRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListTextTranslationJobsRequestPrivate::ListTextTranslationJobsRequestPrivate(
    const TranslateRequest::Action action, ListTextTranslationJobsRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTextTranslationJobsRequest
 * class' copy constructor.
 */
ListTextTranslationJobsRequestPrivate::ListTextTranslationJobsRequestPrivate(
    const ListTextTranslationJobsRequestPrivate &other, ListTextTranslationJobsRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws

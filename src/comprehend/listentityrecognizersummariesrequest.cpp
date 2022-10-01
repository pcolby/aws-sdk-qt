// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentityrecognizersummariesrequest.h"
#include "listentityrecognizersummariesrequest_p.h"
#include "listentityrecognizersummariesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesRequest
 * \brief The ListEntityRecognizerSummariesRequest class provides an interface for Comprehend ListEntityRecognizerSummaries requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntityRecognizerSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntityRecognizerSummariesRequest::ListEntityRecognizerSummariesRequest(const ListEntityRecognizerSummariesRequest &other)
    : ComprehendRequest(new ListEntityRecognizerSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntityRecognizerSummariesRequest object.
 */
ListEntityRecognizerSummariesRequest::ListEntityRecognizerSummariesRequest()
    : ComprehendRequest(new ListEntityRecognizerSummariesRequestPrivate(ComprehendRequest::ListEntityRecognizerSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntityRecognizerSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntityRecognizerSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntityRecognizerSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListEntityRecognizerSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesRequestPrivate
 * \brief The ListEntityRecognizerSummariesRequestPrivate class provides private implementation for ListEntityRecognizerSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntityRecognizerSummariesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEntityRecognizerSummariesRequestPrivate::ListEntityRecognizerSummariesRequestPrivate(
    const ComprehendRequest::Action action, ListEntityRecognizerSummariesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntityRecognizerSummariesRequest
 * class' copy constructor.
 */
ListEntityRecognizerSummariesRequestPrivate::ListEntityRecognizerSummariesRequestPrivate(
    const ListEntityRecognizerSummariesRequestPrivate &other, ListEntityRecognizerSummariesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentityrecognizersrequest.h"
#include "listentityrecognizersrequest_p.h"
#include "listentityrecognizersresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntityRecognizersRequest
 * \brief The ListEntityRecognizersRequest class provides an interface for Comprehend ListEntityRecognizers requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntityRecognizers
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntityRecognizersRequest::ListEntityRecognizersRequest(const ListEntityRecognizersRequest &other)
    : ComprehendRequest(new ListEntityRecognizersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntityRecognizersRequest object.
 */
ListEntityRecognizersRequest::ListEntityRecognizersRequest()
    : ComprehendRequest(new ListEntityRecognizersRequestPrivate(ComprehendRequest::ListEntityRecognizersAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntityRecognizersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntityRecognizersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntityRecognizersRequest::response(QNetworkReply * const reply) const
{
    return new ListEntityRecognizersResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEntityRecognizersRequestPrivate
 * \brief The ListEntityRecognizersRequestPrivate class provides private implementation for ListEntityRecognizersRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntityRecognizersRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEntityRecognizersRequestPrivate::ListEntityRecognizersRequestPrivate(
    const ComprehendRequest::Action action, ListEntityRecognizersRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntityRecognizersRequest
 * class' copy constructor.
 */
ListEntityRecognizersRequestPrivate::ListEntityRecognizersRequestPrivate(
    const ListEntityRecognizersRequestPrivate &other, ListEntityRecognizersRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

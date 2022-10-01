// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteentityrecognizerrequest.h"
#include "deleteentityrecognizerrequest_p.h"
#include "deleteentityrecognizerresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteEntityRecognizerRequest
 * \brief The DeleteEntityRecognizerRequest class provides an interface for Comprehend DeleteEntityRecognizer requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteEntityRecognizer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEntityRecognizerRequest::DeleteEntityRecognizerRequest(const DeleteEntityRecognizerRequest &other)
    : ComprehendRequest(new DeleteEntityRecognizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEntityRecognizerRequest object.
 */
DeleteEntityRecognizerRequest::DeleteEntityRecognizerRequest()
    : ComprehendRequest(new DeleteEntityRecognizerRequestPrivate(ComprehendRequest::DeleteEntityRecognizerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEntityRecognizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEntityRecognizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEntityRecognizerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEntityRecognizerResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DeleteEntityRecognizerRequestPrivate
 * \brief The DeleteEntityRecognizerRequestPrivate class provides private implementation for DeleteEntityRecognizerRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteEntityRecognizerRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DeleteEntityRecognizerRequestPrivate::DeleteEntityRecognizerRequestPrivate(
    const ComprehendRequest::Action action, DeleteEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEntityRecognizerRequest
 * class' copy constructor.
 */
DeleteEntityRecognizerRequestPrivate::DeleteEntityRecognizerRequestPrivate(
    const DeleteEntityRecognizerRequestPrivate &other, DeleteEntityRecognizerRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

/*
    Copyright 2013-2020 Paul Colby

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

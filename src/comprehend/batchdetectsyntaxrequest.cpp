/*
    Copyright 2013-2019 Paul Colby

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

#include "batchdetectsyntaxrequest.h"
#include "batchdetectsyntaxrequest_p.h"
#include "batchdetectsyntaxresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxRequest
 * \brief The BatchDetectSyntaxRequest class provides an interface for Comprehend BatchDetectSyntax requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectSyntax
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectSyntaxRequest::BatchDetectSyntaxRequest(const BatchDetectSyntaxRequest &other)
    : ComprehendRequest(new BatchDetectSyntaxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectSyntaxRequest object.
 */
BatchDetectSyntaxRequest::BatchDetectSyntaxRequest()
    : ComprehendRequest(new BatchDetectSyntaxRequestPrivate(ComprehendRequest::BatchDetectSyntaxAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectSyntaxRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectSyntaxResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectSyntaxRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectSyntaxResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectSyntaxRequestPrivate
 * \brief The BatchDetectSyntaxRequestPrivate class provides private implementation for BatchDetectSyntaxRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectSyntaxRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectSyntaxRequestPrivate::BatchDetectSyntaxRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectSyntaxRequest
 * class' copy constructor.
 */
BatchDetectSyntaxRequestPrivate::BatchDetectSyntaxRequestPrivate(
    const BatchDetectSyntaxRequestPrivate &other, BatchDetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

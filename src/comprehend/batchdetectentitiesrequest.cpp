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

#include "batchdetectentitiesrequest.h"
#include "batchdetectentitiesrequest_p.h"
#include "batchdetectentitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectEntitiesRequest
 * \brief The BatchDetectEntitiesRequest class provides an interface for Comprehend BatchDetectEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectEntities
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDetectEntitiesRequest::BatchDetectEntitiesRequest(const BatchDetectEntitiesRequest &other)
    : ComprehendRequest(new BatchDetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDetectEntitiesRequest object.
 */
BatchDetectEntitiesRequest::BatchDetectEntitiesRequest()
    : ComprehendRequest(new BatchDetectEntitiesRequestPrivate(ComprehendRequest::BatchDetectEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDetectEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDetectEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::BatchDetectEntitiesRequestPrivate
 * \brief The BatchDetectEntitiesRequestPrivate class provides private implementation for BatchDetectEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
BatchDetectEntitiesRequestPrivate::BatchDetectEntitiesRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectEntitiesRequest
 * class' copy constructor.
 */
BatchDetectEntitiesRequestPrivate::BatchDetectEntitiesRequestPrivate(
    const BatchDetectEntitiesRequestPrivate &other, BatchDetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

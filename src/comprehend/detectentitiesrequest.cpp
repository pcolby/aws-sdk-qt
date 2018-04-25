/*
    Copyright 2013-2018 Paul Colby

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

#include "detectentitiesrequest.h"
#include "detectentitiesrequest_p.h"
#include "detectentitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectEntitiesRequest
 * \brief The DetectEntitiesRequest class provides an interface for Comprehend DetectEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DetectEntitiesRequest::DetectEntitiesRequest(const DetectEntitiesRequest &other)
    : ComprehendRequest(new DetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectEntitiesRequest object.
 */
DetectEntitiesRequest::DetectEntitiesRequest()
    : ComprehendRequest(new DetectEntitiesRequestPrivate(ComprehendRequest::DetectEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectEntitiesRequestPrivate
 * \brief The DetectEntitiesRequestPrivate class provides private implementation for DetectEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const ComprehendRequest::Action action, DetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectEntitiesRequest
 * class' copy constructor.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const DetectEntitiesRequestPrivate &other, DetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

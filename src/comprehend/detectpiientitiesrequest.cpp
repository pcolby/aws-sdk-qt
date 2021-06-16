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

#include "detectpiientitiesrequest.h"
#include "detectpiientitiesrequest_p.h"
#include "detectpiientitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesRequest
 * \brief The DetectPiiEntitiesRequest class provides an interface for Comprehend DetectPiiEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectPiiEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DetectPiiEntitiesRequest::DetectPiiEntitiesRequest(const DetectPiiEntitiesRequest &other)
    : ComprehendRequest(new DetectPiiEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectPiiEntitiesRequest object.
 */
DetectPiiEntitiesRequest::DetectPiiEntitiesRequest()
    : ComprehendRequest(new DetectPiiEntitiesRequestPrivate(ComprehendRequest::DetectPiiEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectPiiEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectPiiEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectPiiEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectPiiEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesRequestPrivate
 * \brief The DetectPiiEntitiesRequestPrivate class provides private implementation for DetectPiiEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectPiiEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectPiiEntitiesRequestPrivate::DetectPiiEntitiesRequestPrivate(
    const ComprehendRequest::Action action, DetectPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectPiiEntitiesRequest
 * class' copy constructor.
 */
DetectPiiEntitiesRequestPrivate::DetectPiiEntitiesRequestPrivate(
    const DetectPiiEntitiesRequestPrivate &other, DetectPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

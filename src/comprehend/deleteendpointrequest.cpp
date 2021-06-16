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

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DeleteEndpointRequest
 * \brief The DeleteEndpointRequest class provides an interface for Comprehend DeleteEndpoint requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::deleteEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : ComprehendRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : ComprehendRequest(new DeleteEndpointRequestPrivate(ComprehendRequest::DeleteEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DeleteEndpointRequestPrivate
 * \brief The DeleteEndpointRequestPrivate class provides private implementation for DeleteEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DeleteEndpointRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const ComprehendRequest::Action action, DeleteEndpointRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

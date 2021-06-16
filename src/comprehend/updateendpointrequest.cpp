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

#include "updateendpointrequest.h"
#include "updateendpointrequest_p.h"
#include "updateendpointresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::UpdateEndpointRequest
 * \brief The UpdateEndpointRequest class provides an interface for Comprehend UpdateEndpoint requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::updateEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointRequest::UpdateEndpointRequest(const UpdateEndpointRequest &other)
    : ComprehendRequest(new UpdateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointRequest object.
 */
UpdateEndpointRequest::UpdateEndpointRequest()
    : ComprehendRequest(new UpdateEndpointRequestPrivate(ComprehendRequest::UpdateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::UpdateEndpointRequestPrivate
 * \brief The UpdateEndpointRequestPrivate class provides private implementation for UpdateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a UpdateEndpointRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const ComprehendRequest::Action action, UpdateEndpointRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointRequest
 * class' copy constructor.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const UpdateEndpointRequestPrivate &other, UpdateEndpointRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

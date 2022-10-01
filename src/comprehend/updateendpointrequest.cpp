// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointsbatchrequest.h"
#include "updateendpointsbatchrequest_p.h"
#include "updateendpointsbatchresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchRequest
 * \brief The UpdateEndpointsBatchRequest class provides an interface for Pinpoint UpdateEndpointsBatch requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEndpointsBatch
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest(const UpdateEndpointsBatchRequest &other)
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointsBatchRequest object.
 */
UpdateEndpointsBatchRequest::UpdateEndpointsBatchRequest()
    : PinpointRequest(new UpdateEndpointsBatchRequestPrivate(PinpointRequest::UpdateEndpointsBatchAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointsBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointsBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointsBatchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointsBatchResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchRequestPrivate
 * \brief The UpdateEndpointsBatchRequestPrivate class provides private implementation for UpdateEndpointsBatchRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointsBatchRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const PinpointRequest::Action action, UpdateEndpointsBatchRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointsBatchRequest
 * class' copy constructor.
 */
UpdateEndpointsBatchRequestPrivate::UpdateEndpointsBatchRequestPrivate(
    const UpdateEndpointsBatchRequestPrivate &other, UpdateEndpointsBatchRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws

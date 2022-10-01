// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterealtimeendpointrequest.h"
#include "deleterealtimeendpointrequest_p.h"
#include "deleterealtimeendpointresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointRequest
 * \brief The DeleteRealtimeEndpointRequest class provides an interface for MachineLearning DeleteRealtimeEndpoint requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteRealtimeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRealtimeEndpointRequest::DeleteRealtimeEndpointRequest(const DeleteRealtimeEndpointRequest &other)
    : MachineLearningRequest(new DeleteRealtimeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRealtimeEndpointRequest object.
 */
DeleteRealtimeEndpointRequest::DeleteRealtimeEndpointRequest()
    : MachineLearningRequest(new DeleteRealtimeEndpointRequestPrivate(MachineLearningRequest::DeleteRealtimeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRealtimeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRealtimeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRealtimeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRealtimeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteRealtimeEndpointRequestPrivate
 * \brief The DeleteRealtimeEndpointRequestPrivate class provides private implementation for DeleteRealtimeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteRealtimeEndpointRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteRealtimeEndpointRequestPrivate::DeleteRealtimeEndpointRequestPrivate(
    const MachineLearningRequest::Action action, DeleteRealtimeEndpointRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRealtimeEndpointRequest
 * class' copy constructor.
 */
DeleteRealtimeEndpointRequestPrivate::DeleteRealtimeEndpointRequestPrivate(
    const DeleteRealtimeEndpointRequestPrivate &other, DeleteRealtimeEndpointRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws

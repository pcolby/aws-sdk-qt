// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrealtimeendpointrequest.h"
#include "createrealtimeendpointrequest_p.h"
#include "createrealtimeendpointresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointRequest
 * \brief The CreateRealtimeEndpointRequest class provides an interface for MachineLearning CreateRealtimeEndpoint requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createRealtimeEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRealtimeEndpointRequest::CreateRealtimeEndpointRequest(const CreateRealtimeEndpointRequest &other)
    : MachineLearningRequest(new CreateRealtimeEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRealtimeEndpointRequest object.
 */
CreateRealtimeEndpointRequest::CreateRealtimeEndpointRequest()
    : MachineLearningRequest(new CreateRealtimeEndpointRequestPrivate(MachineLearningRequest::CreateRealtimeEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRealtimeEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRealtimeEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRealtimeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateRealtimeEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateRealtimeEndpointRequestPrivate
 * \brief The CreateRealtimeEndpointRequestPrivate class provides private implementation for CreateRealtimeEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateRealtimeEndpointRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
CreateRealtimeEndpointRequestPrivate::CreateRealtimeEndpointRequestPrivate(
    const MachineLearningRequest::Action action, CreateRealtimeEndpointRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRealtimeEndpointRequest
 * class' copy constructor.
 */
CreateRealtimeEndpointRequestPrivate::CreateRealtimeEndpointRequestPrivate(
    const CreateRealtimeEndpointRequestPrivate &other, CreateRealtimeEndpointRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws

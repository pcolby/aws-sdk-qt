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

/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteendpointconfigrequest.h"
#include "deleteendpointconfigrequest_p.h"
#include "deleteendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigRequest
 * \brief The DeleteEndpointConfigRequest class provides an interface for SageMaker DeleteEndpointConfig requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest(const DeleteEndpointConfigRequest &other)
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointConfigRequest object.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest()
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(SageMakerRequest::DeleteEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointConfigRequestPrivate
 * \brief The DeleteEndpointConfigRequestPrivate class provides private implementation for DeleteEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointConfigRequest
 * class' copy constructor.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const DeleteEndpointConfigRequestPrivate &other, DeleteEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

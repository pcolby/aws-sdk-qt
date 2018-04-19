/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityrequest_p.h"
#include "batchchecklayeravailabilityresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::BatchCheckLayerAvailabilityRequest
 * \brief The BatchCheckLayerAvailabilityRequest class provides an interface for ECR BatchCheckLayerAvailability requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::batchCheckLayerAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest(const BatchCheckLayerAvailabilityRequest &other)
    : ECRRequest(new BatchCheckLayerAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCheckLayerAvailabilityRequest object.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest()
    : ECRRequest(new BatchCheckLayerAvailabilityRequestPrivate(ECRRequest::BatchCheckLayerAvailabilityAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCheckLayerAvailabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCheckLayerAvailabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCheckLayerAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new BatchCheckLayerAvailabilityResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::BatchCheckLayerAvailabilityRequestPrivate
 * \brief The BatchCheckLayerAvailabilityRequestPrivate class provides private implementation for BatchCheckLayerAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityRequestPrivate object for ECR \a action,
 * with public implementation \a q.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const ECRRequest::Action action, BatchCheckLayerAvailabilityRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCheckLayerAvailabilityRequest
 * class' copy constructor.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const BatchCheckLayerAvailabilityRequestPrivate &other, BatchCheckLayerAvailabilityRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws

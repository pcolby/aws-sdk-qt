// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityrequest_p.h"
#include "batchchecklayeravailabilityresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchCheckLayerAvailabilityRequest
 * \brief The BatchCheckLayerAvailabilityRequest class provides an interface for Ecr BatchCheckLayerAvailability requests.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::batchCheckLayerAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest(const BatchCheckLayerAvailabilityRequest &other)
    : EcrRequest(new BatchCheckLayerAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCheckLayerAvailabilityRequest object.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest()
    : EcrRequest(new BatchCheckLayerAvailabilityRequestPrivate(EcrRequest::BatchCheckLayerAvailabilityAction, this))
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
 * \class QtAws::Ecr::BatchCheckLayerAvailabilityRequestPrivate
 * \brief The BatchCheckLayerAvailabilityRequestPrivate class provides private implementation for BatchCheckLayerAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const EcrRequest::Action action, BatchCheckLayerAvailabilityRequest * const q)
    : EcrRequestPrivate(action, q)
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
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

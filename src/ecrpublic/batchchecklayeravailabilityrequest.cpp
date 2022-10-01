// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityrequest_p.h"
#include "batchchecklayeravailabilityresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::BatchCheckLayerAvailabilityRequest
 * \brief The BatchCheckLayerAvailabilityRequest class provides an interface for EcrPublic BatchCheckLayerAvailability requests.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::batchCheckLayerAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest(const BatchCheckLayerAvailabilityRequest &other)
    : EcrPublicRequest(new BatchCheckLayerAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCheckLayerAvailabilityRequest object.
 */
BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest()
    : EcrPublicRequest(new BatchCheckLayerAvailabilityRequestPrivate(EcrPublicRequest::BatchCheckLayerAvailabilityAction, this))
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
 * \class QtAws::EcrPublic::BatchCheckLayerAvailabilityRequestPrivate
 * \brief The BatchCheckLayerAvailabilityRequestPrivate class provides private implementation for BatchCheckLayerAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
BatchCheckLayerAvailabilityRequestPrivate::BatchCheckLayerAvailabilityRequestPrivate(
    const EcrPublicRequest::Action action, BatchCheckLayerAvailabilityRequest * const q)
    : EcrPublicRequestPrivate(action, q)
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
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws

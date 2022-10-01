// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemanagedendpointrequest.h"
#include "deletemanagedendpointrequest_p.h"
#include "deletemanagedendpointresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::DeleteManagedEndpointRequest
 * \brief The DeleteManagedEndpointRequest class provides an interface for Emrcontainers DeleteManagedEndpoint requests.
 *
 * \inmodule QtAwsEmrcontainers
 *
 *  Amazon EMR on EKS provides a deployment option for Amazon EMR that allows you to run open-source big data frameworks on
 *  Amazon Elastic Kubernetes Service (Amazon EKS). With this deployment option, you can focus on running analytics
 *  workloads while Amazon EMR on EKS builds, configures, and manages containers for open-source applications. For more
 *  information about Amazon EMR on EKS concepts and tasks, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/emr-eks.html">What is Amazon EMR on
 * 
 *  EKS</a>>
 * 
 *  <i>Amazon EMR containers</i> is the API name for Amazon EMR on EKS. The <code>emr-containers</code> prefix is used in
 *  the following scenarios:
 * 
 *  </p <ul> <li>
 * 
 *  It is the prefix in the CLI commands for Amazon EMR on EKS. For example, <code>aws emr-containers
 * 
 *  start-job-run</code>> </li> <li>
 * 
 *  It is the prefix before IAM policy actions for Amazon EMR on EKS. For example, <code>"Action": [
 *  "emr-containers:StartJobRun"]</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-actions">Policy
 *  actions for Amazon EMR on
 * 
 *  EKS</a>> </li> <li>
 * 
 *  It is the prefix used in Amazon EMR on EKS service endpoints. For example,
 *  <code>emr-containers.us-east-2.amazonaws.com</code>. For more information, see <a
 *  href="https://docs.aws.amazon.com/emr/latest/EMR-on-EKS-DevelopmentGuide/service-quotas.html#service-endpoints">Amazon
 *  EMR on EKS Service
 *
 * \sa EmrcontainersClient::deleteManagedEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteManagedEndpointRequest::DeleteManagedEndpointRequest(const DeleteManagedEndpointRequest &other)
    : EmrcontainersRequest(new DeleteManagedEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteManagedEndpointRequest object.
 */
DeleteManagedEndpointRequest::DeleteManagedEndpointRequest()
    : EmrcontainersRequest(new DeleteManagedEndpointRequestPrivate(EmrcontainersRequest::DeleteManagedEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteManagedEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteManagedEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteManagedEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteManagedEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Emrcontainers::DeleteManagedEndpointRequestPrivate
 * \brief The DeleteManagedEndpointRequestPrivate class provides private implementation for DeleteManagedEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a DeleteManagedEndpointRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
DeleteManagedEndpointRequestPrivate::DeleteManagedEndpointRequestPrivate(
    const EmrcontainersRequest::Action action, DeleteManagedEndpointRequest * const q)
    : EmrcontainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteManagedEndpointRequest
 * class' copy constructor.
 */
DeleteManagedEndpointRequestPrivate::DeleteManagedEndpointRequestPrivate(
    const DeleteManagedEndpointRequestPrivate &other, DeleteManagedEndpointRequest * const q)
    : EmrcontainersRequestPrivate(other, q)
{

}

} // namespace Emrcontainers
} // namespace QtAws

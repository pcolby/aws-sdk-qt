// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualclusterrequest.h"
#include "createvirtualclusterrequest_p.h"
#include "createvirtualclusterresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::CreateVirtualClusterRequest
 * \brief The CreateVirtualClusterRequest class provides an interface for Emrcontainers CreateVirtualCluster requests.
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
 * \sa EmrcontainersClient::createVirtualCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVirtualClusterRequest::CreateVirtualClusterRequest(const CreateVirtualClusterRequest &other)
    : EmrcontainersRequest(new CreateVirtualClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVirtualClusterRequest object.
 */
CreateVirtualClusterRequest::CreateVirtualClusterRequest()
    : EmrcontainersRequest(new CreateVirtualClusterRequestPrivate(EmrcontainersRequest::CreateVirtualClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVirtualClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVirtualClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVirtualClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateVirtualClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Emrcontainers::CreateVirtualClusterRequestPrivate
 * \brief The CreateVirtualClusterRequestPrivate class provides private implementation for CreateVirtualClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a CreateVirtualClusterRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
CreateVirtualClusterRequestPrivate::CreateVirtualClusterRequestPrivate(
    const EmrcontainersRequest::Action action, CreateVirtualClusterRequest * const q)
    : EmrcontainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVirtualClusterRequest
 * class' copy constructor.
 */
CreateVirtualClusterRequestPrivate::CreateVirtualClusterRequestPrivate(
    const CreateVirtualClusterRequestPrivate &other, CreateVirtualClusterRequest * const q)
    : EmrcontainersRequestPrivate(other, q)
{

}

} // namespace Emrcontainers
} // namespace QtAws

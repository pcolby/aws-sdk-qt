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

#include "deletevirtualclusterrequest.h"
#include "deletevirtualclusterrequest_p.h"
#include "deletevirtualclusterresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::DeleteVirtualClusterRequest
 * \brief The DeleteVirtualClusterRequest class provides an interface for Emrcontainers DeleteVirtualCluster requests.
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
 * \sa EmrcontainersClient::deleteVirtualCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVirtualClusterRequest::DeleteVirtualClusterRequest(const DeleteVirtualClusterRequest &other)
    : EmrcontainersRequest(new DeleteVirtualClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVirtualClusterRequest object.
 */
DeleteVirtualClusterRequest::DeleteVirtualClusterRequest()
    : EmrcontainersRequest(new DeleteVirtualClusterRequestPrivate(EmrcontainersRequest::DeleteVirtualClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVirtualClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVirtualClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVirtualClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVirtualClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Emrcontainers::DeleteVirtualClusterRequestPrivate
 * \brief The DeleteVirtualClusterRequestPrivate class provides private implementation for DeleteVirtualClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a DeleteVirtualClusterRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
DeleteVirtualClusterRequestPrivate::DeleteVirtualClusterRequestPrivate(
    const EmrcontainersRequest::Action action, DeleteVirtualClusterRequest * const q)
    : EmrcontainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVirtualClusterRequest
 * class' copy constructor.
 */
DeleteVirtualClusterRequestPrivate::DeleteVirtualClusterRequestPrivate(
    const DeleteVirtualClusterRequestPrivate &other, DeleteVirtualClusterRequest * const q)
    : EmrcontainersRequestPrivate(other, q)
{

}

} // namespace Emrcontainers
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvirtualclustersrequest.h"
#include "listvirtualclustersrequest_p.h"
#include "listvirtualclustersresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::ListVirtualClustersRequest
 * \brief The ListVirtualClustersRequest class provides an interface for Emrcontainers ListVirtualClusters requests.
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
 * \sa EmrcontainersClient::listVirtualClusters
 */

/*!
 * Constructs a copy of \a other.
 */
ListVirtualClustersRequest::ListVirtualClustersRequest(const ListVirtualClustersRequest &other)
    : EmrcontainersRequest(new ListVirtualClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVirtualClustersRequest object.
 */
ListVirtualClustersRequest::ListVirtualClustersRequest()
    : EmrcontainersRequest(new ListVirtualClustersRequestPrivate(EmrcontainersRequest::ListVirtualClustersAction, this))
{

}

/*!
 * \reimp
 */
bool ListVirtualClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVirtualClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVirtualClustersRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualClustersResponse(*this, reply);
}

/*!
 * \class QtAws::Emrcontainers::ListVirtualClustersRequestPrivate
 * \brief The ListVirtualClustersRequestPrivate class provides private implementation for ListVirtualClustersRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a ListVirtualClustersRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
ListVirtualClustersRequestPrivate::ListVirtualClustersRequestPrivate(
    const EmrcontainersRequest::Action action, ListVirtualClustersRequest * const q)
    : EmrcontainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualClustersRequest
 * class' copy constructor.
 */
ListVirtualClustersRequestPrivate::ListVirtualClustersRequestPrivate(
    const ListVirtualClustersRequestPrivate &other, ListVirtualClustersRequest * const q)
    : EmrcontainersRequestPrivate(other, q)
{

}

} // namespace Emrcontainers
} // namespace QtAws

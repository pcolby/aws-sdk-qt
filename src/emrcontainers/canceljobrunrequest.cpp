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

#include "canceljobrunrequest.h"
#include "canceljobrunrequest_p.h"
#include "canceljobrunresponse.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::CancelJobRunRequest
 * \brief The CancelJobRunRequest class provides an interface for Emrcontainers CancelJobRun requests.
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
 * \sa EmrcontainersClient::cancelJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRunRequest::CancelJobRunRequest(const CancelJobRunRequest &other)
    : EmrcontainersRequest(new CancelJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRunRequest object.
 */
CancelJobRunRequest::CancelJobRunRequest()
    : EmrcontainersRequest(new CancelJobRunRequestPrivate(EmrcontainersRequest::CancelJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRunRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::Emrcontainers::CancelJobRunRequestPrivate
 * \brief The CancelJobRunRequestPrivate class provides private implementation for CancelJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a CancelJobRunRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
CancelJobRunRequestPrivate::CancelJobRunRequestPrivate(
    const EmrcontainersRequest::Action action, CancelJobRunRequest * const q)
    : EmrcontainersRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRunRequest
 * class' copy constructor.
 */
CancelJobRunRequestPrivate::CancelJobRunRequestPrivate(
    const CancelJobRunRequestPrivate &other, CancelJobRunRequest * const q)
    : EmrcontainersRequestPrivate(other, q)
{

}

} // namespace Emrcontainers
} // namespace QtAws

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

#include "batchgetrepositoryscanningconfigurationrequest.h"
#include "batchgetrepositoryscanningconfigurationrequest_p.h"
#include "batchgetrepositoryscanningconfigurationresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchGetRepositoryScanningConfigurationRequest
 * \brief The BatchGetRepositoryScanningConfigurationRequest class provides an interface for Ecr BatchGetRepositoryScanningConfiguration requests.
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
 * \sa EcrClient::batchGetRepositoryScanningConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetRepositoryScanningConfigurationRequest::BatchGetRepositoryScanningConfigurationRequest(const BatchGetRepositoryScanningConfigurationRequest &other)
    : EcrRequest(new BatchGetRepositoryScanningConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetRepositoryScanningConfigurationRequest object.
 */
BatchGetRepositoryScanningConfigurationRequest::BatchGetRepositoryScanningConfigurationRequest()
    : EcrRequest(new BatchGetRepositoryScanningConfigurationRequestPrivate(EcrRequest::BatchGetRepositoryScanningConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetRepositoryScanningConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetRepositoryScanningConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetRepositoryScanningConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetRepositoryScanningConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::BatchGetRepositoryScanningConfigurationRequestPrivate
 * \brief The BatchGetRepositoryScanningConfigurationRequestPrivate class provides private implementation for BatchGetRepositoryScanningConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchGetRepositoryScanningConfigurationRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
BatchGetRepositoryScanningConfigurationRequestPrivate::BatchGetRepositoryScanningConfigurationRequestPrivate(
    const EcrRequest::Action action, BatchGetRepositoryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetRepositoryScanningConfigurationRequest
 * class' copy constructor.
 */
BatchGetRepositoryScanningConfigurationRequestPrivate::BatchGetRepositoryScanningConfigurationRequestPrivate(
    const BatchGetRepositoryScanningConfigurationRequestPrivate &other, BatchGetRepositoryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

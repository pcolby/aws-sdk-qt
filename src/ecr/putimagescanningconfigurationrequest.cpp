// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagescanningconfigurationrequest.h"
#include "putimagescanningconfigurationrequest_p.h"
#include "putimagescanningconfigurationresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageScanningConfigurationRequest
 * \brief The PutImageScanningConfigurationRequest class provides an interface for Ecr PutImageScanningConfiguration requests.
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
 * \sa EcrClient::putImageScanningConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageScanningConfigurationRequest::PutImageScanningConfigurationRequest(const PutImageScanningConfigurationRequest &other)
    : EcrRequest(new PutImageScanningConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageScanningConfigurationRequest object.
 */
PutImageScanningConfigurationRequest::PutImageScanningConfigurationRequest()
    : EcrRequest(new PutImageScanningConfigurationRequestPrivate(EcrRequest::PutImageScanningConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageScanningConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageScanningConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageScanningConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutImageScanningConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutImageScanningConfigurationRequestPrivate
 * \brief The PutImageScanningConfigurationRequestPrivate class provides private implementation for PutImageScanningConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageScanningConfigurationRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutImageScanningConfigurationRequestPrivate::PutImageScanningConfigurationRequestPrivate(
    const EcrRequest::Action action, PutImageScanningConfigurationRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageScanningConfigurationRequest
 * class' copy constructor.
 */
PutImageScanningConfigurationRequestPrivate::PutImageScanningConfigurationRequestPrivate(
    const PutImageScanningConfigurationRequestPrivate &other, PutImageScanningConfigurationRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

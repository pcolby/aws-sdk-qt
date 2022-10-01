// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putregistryscanningconfigurationrequest.h"
#include "putregistryscanningconfigurationrequest_p.h"
#include "putregistryscanningconfigurationresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutRegistryScanningConfigurationRequest
 * \brief The PutRegistryScanningConfigurationRequest class provides an interface for Ecr PutRegistryScanningConfiguration requests.
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
 * \sa EcrClient::putRegistryScanningConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutRegistryScanningConfigurationRequest::PutRegistryScanningConfigurationRequest(const PutRegistryScanningConfigurationRequest &other)
    : EcrRequest(new PutRegistryScanningConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRegistryScanningConfigurationRequest object.
 */
PutRegistryScanningConfigurationRequest::PutRegistryScanningConfigurationRequest()
    : EcrRequest(new PutRegistryScanningConfigurationRequestPrivate(EcrRequest::PutRegistryScanningConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutRegistryScanningConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRegistryScanningConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRegistryScanningConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutRegistryScanningConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutRegistryScanningConfigurationRequestPrivate
 * \brief The PutRegistryScanningConfigurationRequestPrivate class provides private implementation for PutRegistryScanningConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutRegistryScanningConfigurationRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutRegistryScanningConfigurationRequestPrivate::PutRegistryScanningConfigurationRequestPrivate(
    const EcrRequest::Action action, PutRegistryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRegistryScanningConfigurationRequest
 * class' copy constructor.
 */
PutRegistryScanningConfigurationRequestPrivate::PutRegistryScanningConfigurationRequestPrivate(
    const PutRegistryScanningConfigurationRequestPrivate &other, PutRegistryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

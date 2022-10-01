// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistryscanningconfigurationrequest.h"
#include "getregistryscanningconfigurationrequest_p.h"
#include "getregistryscanningconfigurationresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRegistryScanningConfigurationRequest
 * \brief The GetRegistryScanningConfigurationRequest class provides an interface for Ecr GetRegistryScanningConfiguration requests.
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
 * \sa EcrClient::getRegistryScanningConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryScanningConfigurationRequest::GetRegistryScanningConfigurationRequest(const GetRegistryScanningConfigurationRequest &other)
    : EcrRequest(new GetRegistryScanningConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryScanningConfigurationRequest object.
 */
GetRegistryScanningConfigurationRequest::GetRegistryScanningConfigurationRequest()
    : EcrRequest(new GetRegistryScanningConfigurationRequestPrivate(EcrRequest::GetRegistryScanningConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryScanningConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryScanningConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryScanningConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryScanningConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::GetRegistryScanningConfigurationRequestPrivate
 * \brief The GetRegistryScanningConfigurationRequestPrivate class provides private implementation for GetRegistryScanningConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRegistryScanningConfigurationRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetRegistryScanningConfigurationRequestPrivate::GetRegistryScanningConfigurationRequestPrivate(
    const EcrRequest::Action action, GetRegistryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryScanningConfigurationRequest
 * class' copy constructor.
 */
GetRegistryScanningConfigurationRequestPrivate::GetRegistryScanningConfigurationRequestPrivate(
    const GetRegistryScanningConfigurationRequestPrivate &other, GetRegistryScanningConfigurationRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putreplicationconfigurationrequest.h"
#include "putreplicationconfigurationrequest_p.h"
#include "putreplicationconfigurationresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutReplicationConfigurationRequest
 * \brief The PutReplicationConfigurationRequest class provides an interface for Ecr PutReplicationConfiguration requests.
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
 * \sa EcrClient::putReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutReplicationConfigurationRequest::PutReplicationConfigurationRequest(const PutReplicationConfigurationRequest &other)
    : EcrRequest(new PutReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutReplicationConfigurationRequest object.
 */
PutReplicationConfigurationRequest::PutReplicationConfigurationRequest()
    : EcrRequest(new PutReplicationConfigurationRequestPrivate(EcrRequest::PutReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutReplicationConfigurationRequestPrivate
 * \brief The PutReplicationConfigurationRequestPrivate class provides private implementation for PutReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutReplicationConfigurationRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutReplicationConfigurationRequestPrivate::PutReplicationConfigurationRequestPrivate(
    const EcrRequest::Action action, PutReplicationConfigurationRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutReplicationConfigurationRequest
 * class' copy constructor.
 */
PutReplicationConfigurationRequestPrivate::PutReplicationConfigurationRequestPrivate(
    const PutReplicationConfigurationRequestPrivate &other, PutReplicationConfigurationRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

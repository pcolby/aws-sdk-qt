// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositoryrequest.h"
#include "deleterepositoryrequest_p.h"
#include "deleterepositoryresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRepositoryRequest
 * \brief The DeleteRepositoryRequest class provides an interface for Ecr DeleteRepository requests.
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
 * \sa EcrClient::deleteRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest(const DeleteRepositoryRequest &other)
    : EcrRequest(new DeleteRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRepositoryRequest object.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest()
    : EcrRequest(new DeleteRepositoryRequestPrivate(EcrRequest::DeleteRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DeleteRepositoryRequestPrivate
 * \brief The DeleteRepositoryRequestPrivate class provides private implementation for DeleteRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRepositoryRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const EcrRequest::Action action, DeleteRepositoryRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryRequest
 * class' copy constructor.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const DeleteRepositoryRequestPrivate &other, DeleteRepositoryRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

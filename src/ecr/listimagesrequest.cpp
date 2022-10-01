// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagesrequest.h"
#include "listimagesrequest_p.h"
#include "listimagesresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::ListImagesRequest
 * \brief The ListImagesRequest class provides an interface for Ecr ListImages requests.
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
 * \sa EcrClient::listImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagesRequest::ListImagesRequest(const ListImagesRequest &other)
    : EcrRequest(new ListImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagesRequest object.
 */
ListImagesRequest::ListImagesRequest()
    : EcrRequest(new ListImagesRequestPrivate(EcrRequest::ListImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagesResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::ListImagesRequestPrivate
 * \brief The ListImagesRequestPrivate class provides private implementation for ListImagesRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a ListImagesRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const EcrRequest::Action action, ListImagesRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagesRequest
 * class' copy constructor.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ListImagesRequestPrivate &other, ListImagesRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

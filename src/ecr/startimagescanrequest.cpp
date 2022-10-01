// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimagescanrequest.h"
#include "startimagescanrequest_p.h"
#include "startimagescanresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::StartImageScanRequest
 * \brief The StartImageScanRequest class provides an interface for Ecr StartImageScan requests.
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
 * \sa EcrClient::startImageScan
 */

/*!
 * Constructs a copy of \a other.
 */
StartImageScanRequest::StartImageScanRequest(const StartImageScanRequest &other)
    : EcrRequest(new StartImageScanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImageScanRequest object.
 */
StartImageScanRequest::StartImageScanRequest()
    : EcrRequest(new StartImageScanRequestPrivate(EcrRequest::StartImageScanAction, this))
{

}

/*!
 * \reimp
 */
bool StartImageScanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImageScanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImageScanRequest::response(QNetworkReply * const reply) const
{
    return new StartImageScanResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::StartImageScanRequestPrivate
 * \brief The StartImageScanRequestPrivate class provides private implementation for StartImageScanRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a StartImageScanRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
StartImageScanRequestPrivate::StartImageScanRequestPrivate(
    const EcrRequest::Action action, StartImageScanRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImageScanRequest
 * class' copy constructor.
 */
StartImageScanRequestPrivate::StartImageScanRequestPrivate(
    const StartImageScanRequestPrivate &other, StartImageScanRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

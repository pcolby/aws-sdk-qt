// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagereplicationstatusrequest.h"
#include "describeimagereplicationstatusrequest_p.h"
#include "describeimagereplicationstatusresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeImageReplicationStatusRequest
 * \brief The DescribeImageReplicationStatusRequest class provides an interface for Ecr DescribeImageReplicationStatus requests.
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
 * \sa EcrClient::describeImageReplicationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeImageReplicationStatusRequest::DescribeImageReplicationStatusRequest(const DescribeImageReplicationStatusRequest &other)
    : EcrRequest(new DescribeImageReplicationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeImageReplicationStatusRequest object.
 */
DescribeImageReplicationStatusRequest::DescribeImageReplicationStatusRequest()
    : EcrRequest(new DescribeImageReplicationStatusRequestPrivate(EcrRequest::DescribeImageReplicationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeImageReplicationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeImageReplicationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeImageReplicationStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeImageReplicationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DescribeImageReplicationStatusRequestPrivate
 * \brief The DescribeImageReplicationStatusRequestPrivate class provides private implementation for DescribeImageReplicationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeImageReplicationStatusRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DescribeImageReplicationStatusRequestPrivate::DescribeImageReplicationStatusRequestPrivate(
    const EcrRequest::Action action, DescribeImageReplicationStatusRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeImageReplicationStatusRequest
 * class' copy constructor.
 */
DescribeImageReplicationStatusRequestPrivate::DescribeImageReplicationStatusRequestPrivate(
    const DescribeImageReplicationStatusRequestPrivate &other, DescribeImageReplicationStatusRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws

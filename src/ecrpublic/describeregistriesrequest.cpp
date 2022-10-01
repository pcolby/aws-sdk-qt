// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeregistriesrequest.h"
#include "describeregistriesrequest_p.h"
#include "describeregistriesresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeRegistriesRequest
 * \brief The DescribeRegistriesRequest class provides an interface for EcrPublic DescribeRegistries requests.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::describeRegistries
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRegistriesRequest::DescribeRegistriesRequest(const DescribeRegistriesRequest &other)
    : EcrPublicRequest(new DescribeRegistriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRegistriesRequest object.
 */
DescribeRegistriesRequest::DescribeRegistriesRequest()
    : EcrPublicRequest(new DescribeRegistriesRequestPrivate(EcrPublicRequest::DescribeRegistriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRegistriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRegistriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRegistriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRegistriesResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::DescribeRegistriesRequestPrivate
 * \brief The DescribeRegistriesRequestPrivate class provides private implementation for DescribeRegistriesRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeRegistriesRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
DescribeRegistriesRequestPrivate::DescribeRegistriesRequestPrivate(
    const EcrPublicRequest::Action action, DescribeRegistriesRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRegistriesRequest
 * class' copy constructor.
 */
DescribeRegistriesRequestPrivate::DescribeRegistriesRequestPrivate(
    const DescribeRegistriesRequestPrivate &other, DescribeRegistriesRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws

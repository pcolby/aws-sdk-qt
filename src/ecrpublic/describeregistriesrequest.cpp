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

#include "describeregistriesrequest.h"
#include "describeregistriesrequest_p.h"
#include "describeregistriesresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::DescribeRegistriesRequest
 * \brief The DescribeRegistriesRequest class provides an interface for ECRPublic DescribeRegistries requests.
 *
 * \inmodule QtAwsECRPublic
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
 * \sa ECRPublicClient::describeRegistries
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRegistriesRequest::DescribeRegistriesRequest(const DescribeRegistriesRequest &other)
    : ECRPublicRequest(new DescribeRegistriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRegistriesRequest object.
 */
DescribeRegistriesRequest::DescribeRegistriesRequest()
    : ECRPublicRequest(new DescribeRegistriesRequestPrivate(ECRPublicRequest::DescribeRegistriesAction, this))
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
 * \class QtAws::ECRPublic::DescribeRegistriesRequestPrivate
 * \brief The DescribeRegistriesRequestPrivate class provides private implementation for DescribeRegistriesRequest.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a DescribeRegistriesRequestPrivate object for ECRPublic \a action,
 * with public implementation \a q.
 */
DescribeRegistriesRequestPrivate::DescribeRegistriesRequestPrivate(
    const ECRPublicRequest::Action action, DescribeRegistriesRequest * const q)
    : ECRPublicRequestPrivate(action, q)
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
    : ECRPublicRequestPrivate(other, q)
{

}

} // namespace ECRPublic
} // namespace QtAws

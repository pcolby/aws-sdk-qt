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

#include "describedomainrequest.h"
#include "describedomainrequest_p.h"
#include "describedomainresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDomainRequest
 * \brief The DescribeDomainRequest class provides an interface for SageMaker DescribeDomain requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainRequest::DescribeDomainRequest(const DescribeDomainRequest &other)
    : SageMakerRequest(new DescribeDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainRequest object.
 */
DescribeDomainRequest::DescribeDomainRequest()
    : SageMakerRequest(new DescribeDomainRequestPrivate(SageMakerRequest::DescribeDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeDomainRequestPrivate
 * \brief The DescribeDomainRequestPrivate class provides private implementation for DescribeDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDomainRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const SageMakerRequest::Action action, DescribeDomainRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainRequest
 * class' copy constructor.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const DescribeDomainRequestPrivate &other, DescribeDomainRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

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

#include "describeworkteamrequest.h"
#include "describeworkteamrequest_p.h"
#include "describeworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkteamRequest
 * \brief The DescribeWorkteamRequest class provides an interface for SageMaker DescribeWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkteamRequest::DescribeWorkteamRequest(const DescribeWorkteamRequest &other)
    : SageMakerRequest(new DescribeWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkteamRequest object.
 */
DescribeWorkteamRequest::DescribeWorkteamRequest()
    : SageMakerRequest(new DescribeWorkteamRequestPrivate(SageMakerRequest::DescribeWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeWorkteamRequestPrivate
 * \brief The DescribeWorkteamRequestPrivate class provides private implementation for DescribeWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeWorkteamRequestPrivate::DescribeWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DescribeWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkteamRequest
 * class' copy constructor.
 */
DescribeWorkteamRequestPrivate::DescribeWorkteamRequestPrivate(
    const DescribeWorkteamRequestPrivate &other, DescribeWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

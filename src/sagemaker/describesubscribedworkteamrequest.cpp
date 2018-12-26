/*
    Copyright 2013-2018 Paul Colby

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

#include "describesubscribedworkteamrequest.h"
#include "describesubscribedworkteamrequest_p.h"
#include "describesubscribedworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamRequest
 * \brief The DescribeSubscribedWorkteamRequest class provides an interface for SageMaker DescribeSubscribedWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeSubscribedWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubscribedWorkteamRequest::DescribeSubscribedWorkteamRequest(const DescribeSubscribedWorkteamRequest &other)
    : SageMakerRequest(new DescribeSubscribedWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubscribedWorkteamRequest object.
 */
DescribeSubscribedWorkteamRequest::DescribeSubscribedWorkteamRequest()
    : SageMakerRequest(new DescribeSubscribedWorkteamRequestPrivate(SageMakerRequest::DescribeSubscribedWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubscribedWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubscribedWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubscribedWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubscribedWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeSubscribedWorkteamRequestPrivate
 * \brief The DescribeSubscribedWorkteamRequestPrivate class provides private implementation for DescribeSubscribedWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeSubscribedWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeSubscribedWorkteamRequestPrivate::DescribeSubscribedWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DescribeSubscribedWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubscribedWorkteamRequest
 * class' copy constructor.
 */
DescribeSubscribedWorkteamRequestPrivate::DescribeSubscribedWorkteamRequestPrivate(
    const DescribeSubscribedWorkteamRequestPrivate &other, DescribeSubscribedWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

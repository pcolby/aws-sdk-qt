// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldrequest.h"
#include "describeworldrequest_p.h"
#include "describeworldresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldRequest
 * \brief The DescribeWorldRequest class provides an interface for RoboMaker DescribeWorld requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorld
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldRequest::DescribeWorldRequest(const DescribeWorldRequest &other)
    : RoboMakerRequest(new DescribeWorldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldRequest object.
 */
DescribeWorldRequest::DescribeWorldRequest()
    : RoboMakerRequest(new DescribeWorldRequestPrivate(RoboMakerRequest::DescribeWorldAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldRequestPrivate
 * \brief The DescribeWorldRequestPrivate class provides private implementation for DescribeWorldRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldRequestPrivate::DescribeWorldRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldRequest
 * class' copy constructor.
 */
DescribeWorldRequestPrivate::DescribeWorldRequestPrivate(
    const DescribeWorldRequestPrivate &other, DescribeWorldRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws

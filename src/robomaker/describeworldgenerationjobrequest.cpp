// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworldgenerationjobrequest.h"
#include "describeworldgenerationjobrequest_p.h"
#include "describeworldgenerationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobRequest
 * \brief The DescribeWorldGenerationJobRequest class provides an interface for RoboMaker DescribeWorldGenerationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeWorldGenerationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorldGenerationJobRequest::DescribeWorldGenerationJobRequest(const DescribeWorldGenerationJobRequest &other)
    : RoboMakerRequest(new DescribeWorldGenerationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorldGenerationJobRequest object.
 */
DescribeWorldGenerationJobRequest::DescribeWorldGenerationJobRequest()
    : RoboMakerRequest(new DescribeWorldGenerationJobRequestPrivate(RoboMakerRequest::DescribeWorldGenerationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorldGenerationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorldGenerationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorldGenerationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorldGenerationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeWorldGenerationJobRequestPrivate
 * \brief The DescribeWorldGenerationJobRequestPrivate class provides private implementation for DescribeWorldGenerationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeWorldGenerationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeWorldGenerationJobRequestPrivate::DescribeWorldGenerationJobRequestPrivate(
    const RoboMakerRequest::Action action, DescribeWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorldGenerationJobRequest
 * class' copy constructor.
 */
DescribeWorldGenerationJobRequestPrivate::DescribeWorldGenerationJobRequestPrivate(
    const DescribeWorldGenerationJobRequestPrivate &other, DescribeWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws

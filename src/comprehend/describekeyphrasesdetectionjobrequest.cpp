// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describekeyphrasesdetectionjobrequest.h"
#include "describekeyphrasesdetectionjobrequest_p.h"
#include "describekeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobRequest
 * \brief The DescribeKeyPhrasesDetectionJobRequest class provides an interface for Comprehend DescribeKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeKeyPhrasesDetectionJobRequest::DescribeKeyPhrasesDetectionJobRequest(const DescribeKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new DescribeKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobRequest object.
 */
DescribeKeyPhrasesDetectionJobRequest::DescribeKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new DescribeKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::DescribeKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeKeyPhrasesDetectionJobRequestPrivate
 * \brief The DescribeKeyPhrasesDetectionJobRequestPrivate class provides private implementation for DescribeKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeKeyPhrasesDetectionJobRequestPrivate::DescribeKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
DescribeKeyPhrasesDetectionJobRequestPrivate::DescribeKeyPhrasesDetectionJobRequestPrivate(
    const DescribeKeyPhrasesDetectionJobRequestPrivate &other, DescribeKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

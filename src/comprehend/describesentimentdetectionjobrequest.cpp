// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesentimentdetectionjobrequest.h"
#include "describesentimentdetectionjobrequest_p.h"
#include "describesentimentdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobRequest
 * \brief The DescribeSentimentDetectionJobRequest class provides an interface for Comprehend DescribeSentimentDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeSentimentDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSentimentDetectionJobRequest::DescribeSentimentDetectionJobRequest(const DescribeSentimentDetectionJobRequest &other)
    : ComprehendRequest(new DescribeSentimentDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSentimentDetectionJobRequest object.
 */
DescribeSentimentDetectionJobRequest::DescribeSentimentDetectionJobRequest()
    : ComprehendRequest(new DescribeSentimentDetectionJobRequestPrivate(ComprehendRequest::DescribeSentimentDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSentimentDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSentimentDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSentimentDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSentimentDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeSentimentDetectionJobRequestPrivate
 * \brief The DescribeSentimentDetectionJobRequestPrivate class provides private implementation for DescribeSentimentDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeSentimentDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeSentimentDetectionJobRequestPrivate::DescribeSentimentDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSentimentDetectionJobRequest
 * class' copy constructor.
 */
DescribeSentimentDetectionJobRequestPrivate::DescribeSentimentDetectionJobRequestPrivate(
    const DescribeSentimentDetectionJobRequestPrivate &other, DescribeSentimentDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

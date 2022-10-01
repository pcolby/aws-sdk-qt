// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedominantlanguagedetectionjobrequest.h"
#include "describedominantlanguagedetectionjobrequest_p.h"
#include "describedominantlanguagedetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDominantLanguageDetectionJobRequest
 * \brief The DescribeDominantLanguageDetectionJobRequest class provides an interface for Comprehend DescribeDominantLanguageDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDominantLanguageDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDominantLanguageDetectionJobRequest::DescribeDominantLanguageDetectionJobRequest(const DescribeDominantLanguageDetectionJobRequest &other)
    : ComprehendRequest(new DescribeDominantLanguageDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDominantLanguageDetectionJobRequest object.
 */
DescribeDominantLanguageDetectionJobRequest::DescribeDominantLanguageDetectionJobRequest()
    : ComprehendRequest(new DescribeDominantLanguageDetectionJobRequestPrivate(ComprehendRequest::DescribeDominantLanguageDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDominantLanguageDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDominantLanguageDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDominantLanguageDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDominantLanguageDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DescribeDominantLanguageDetectionJobRequestPrivate
 * \brief The DescribeDominantLanguageDetectionJobRequestPrivate class provides private implementation for DescribeDominantLanguageDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDominantLanguageDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DescribeDominantLanguageDetectionJobRequestPrivate::DescribeDominantLanguageDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, DescribeDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDominantLanguageDetectionJobRequest
 * class' copy constructor.
 */
DescribeDominantLanguageDetectionJobRequestPrivate::DescribeDominantLanguageDetectionJobRequestPrivate(
    const DescribeDominantLanguageDetectionJobRequestPrivate &other, DescribeDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws

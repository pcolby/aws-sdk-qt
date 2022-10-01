// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebatchsegmentjobrequest.h"
#include "describebatchsegmentjobrequest_p.h"
#include "describebatchsegmentjobresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobRequest
 * \brief The DescribeBatchSegmentJobRequest class provides an interface for Personalize DescribeBatchSegmentJob requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeBatchSegmentJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBatchSegmentJobRequest::DescribeBatchSegmentJobRequest(const DescribeBatchSegmentJobRequest &other)
    : PersonalizeRequest(new DescribeBatchSegmentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBatchSegmentJobRequest object.
 */
DescribeBatchSegmentJobRequest::DescribeBatchSegmentJobRequest()
    : PersonalizeRequest(new DescribeBatchSegmentJobRequestPrivate(PersonalizeRequest::DescribeBatchSegmentJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBatchSegmentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBatchSegmentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBatchSegmentJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBatchSegmentJobResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobRequestPrivate
 * \brief The DescribeBatchSegmentJobRequestPrivate class provides private implementation for DescribeBatchSegmentJobRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeBatchSegmentJobRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeBatchSegmentJobRequestPrivate::DescribeBatchSegmentJobRequestPrivate(
    const PersonalizeRequest::Action action, DescribeBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBatchSegmentJobRequest
 * class' copy constructor.
 */
DescribeBatchSegmentJobRequestPrivate::DescribeBatchSegmentJobRequestPrivate(
    const DescribeBatchSegmentJobRequestPrivate &other, DescribeBatchSegmentJobRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws

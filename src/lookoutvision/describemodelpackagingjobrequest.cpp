// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelpackagingjobrequest.h"
#include "describemodelpackagingjobrequest_p.h"
#include "describemodelpackagingjobresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DescribeModelPackagingJobRequest
 * \brief The DescribeModelPackagingJobRequest class provides an interface for LookoutVision DescribeModelPackagingJob requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::describeModelPackagingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelPackagingJobRequest::DescribeModelPackagingJobRequest(const DescribeModelPackagingJobRequest &other)
    : LookoutVisionRequest(new DescribeModelPackagingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelPackagingJobRequest object.
 */
DescribeModelPackagingJobRequest::DescribeModelPackagingJobRequest()
    : LookoutVisionRequest(new DescribeModelPackagingJobRequestPrivate(LookoutVisionRequest::DescribeModelPackagingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelPackagingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelPackagingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelPackagingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelPackagingJobResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::DescribeModelPackagingJobRequestPrivate
 * \brief The DescribeModelPackagingJobRequestPrivate class provides private implementation for DescribeModelPackagingJobRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DescribeModelPackagingJobRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
DescribeModelPackagingJobRequestPrivate::DescribeModelPackagingJobRequestPrivate(
    const LookoutVisionRequest::Action action, DescribeModelPackagingJobRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelPackagingJobRequest
 * class' copy constructor.
 */
DescribeModelPackagingJobRequestPrivate::DescribeModelPackagingJobRequestPrivate(
    const DescribeModelPackagingJobRequestPrivate &other, DescribeModelPackagingJobRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmodelpackagingjobrequest.h"
#include "startmodelpackagingjobrequest_p.h"
#include "startmodelpackagingjobresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StartModelPackagingJobRequest
 * \brief The StartModelPackagingJobRequest class provides an interface for LookoutVision StartModelPackagingJob requests.
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
 * \sa LookoutVisionClient::startModelPackagingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartModelPackagingJobRequest::StartModelPackagingJobRequest(const StartModelPackagingJobRequest &other)
    : LookoutVisionRequest(new StartModelPackagingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartModelPackagingJobRequest object.
 */
StartModelPackagingJobRequest::StartModelPackagingJobRequest()
    : LookoutVisionRequest(new StartModelPackagingJobRequestPrivate(LookoutVisionRequest::StartModelPackagingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartModelPackagingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartModelPackagingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartModelPackagingJobRequest::response(QNetworkReply * const reply) const
{
    return new StartModelPackagingJobResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::StartModelPackagingJobRequestPrivate
 * \brief The StartModelPackagingJobRequestPrivate class provides private implementation for StartModelPackagingJobRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StartModelPackagingJobRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
StartModelPackagingJobRequestPrivate::StartModelPackagingJobRequestPrivate(
    const LookoutVisionRequest::Action action, StartModelPackagingJobRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartModelPackagingJobRequest
 * class' copy constructor.
 */
StartModelPackagingJobRequestPrivate::StartModelPackagingJobRequestPrivate(
    const StartModelPackagingJobRequestPrivate &other, StartModelPackagingJobRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws

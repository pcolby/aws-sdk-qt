// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopentitiesdetectionv2jobrequest.h"
#include "stopentitiesdetectionv2jobrequest_p.h"
#include "stopentitiesdetectionv2jobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobRequest
 * \brief The StopEntitiesDetectionV2JobRequest class provides an interface for ComprehendMedical StopEntitiesDetectionV2Job requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopEntitiesDetectionV2Job
 */

/*!
 * Constructs a copy of \a other.
 */
StopEntitiesDetectionV2JobRequest::StopEntitiesDetectionV2JobRequest(const StopEntitiesDetectionV2JobRequest &other)
    : ComprehendMedicalRequest(new StopEntitiesDetectionV2JobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEntitiesDetectionV2JobRequest object.
 */
StopEntitiesDetectionV2JobRequest::StopEntitiesDetectionV2JobRequest()
    : ComprehendMedicalRequest(new StopEntitiesDetectionV2JobRequestPrivate(ComprehendMedicalRequest::StopEntitiesDetectionV2JobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEntitiesDetectionV2JobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEntitiesDetectionV2JobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEntitiesDetectionV2JobRequest::response(QNetworkReply * const reply) const
{
    return new StopEntitiesDetectionV2JobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopEntitiesDetectionV2JobRequestPrivate
 * \brief The StopEntitiesDetectionV2JobRequestPrivate class provides private implementation for StopEntitiesDetectionV2JobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopEntitiesDetectionV2JobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopEntitiesDetectionV2JobRequestPrivate::StopEntitiesDetectionV2JobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEntitiesDetectionV2JobRequest
 * class' copy constructor.
 */
StopEntitiesDetectionV2JobRequestPrivate::StopEntitiesDetectionV2JobRequestPrivate(
    const StopEntitiesDetectionV2JobRequestPrivate &other, StopEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startentitiesdetectionv2jobrequest.h"
#include "startentitiesdetectionv2jobrequest_p.h"
#include "startentitiesdetectionv2jobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobRequest
 * \brief The StartEntitiesDetectionV2JobRequest class provides an interface for ComprehendMedical StartEntitiesDetectionV2Job requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startEntitiesDetectionV2Job
 */

/*!
 * Constructs a copy of \a other.
 */
StartEntitiesDetectionV2JobRequest::StartEntitiesDetectionV2JobRequest(const StartEntitiesDetectionV2JobRequest &other)
    : ComprehendMedicalRequest(new StartEntitiesDetectionV2JobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEntitiesDetectionV2JobRequest object.
 */
StartEntitiesDetectionV2JobRequest::StartEntitiesDetectionV2JobRequest()
    : ComprehendMedicalRequest(new StartEntitiesDetectionV2JobRequestPrivate(ComprehendMedicalRequest::StartEntitiesDetectionV2JobAction, this))
{

}

/*!
 * \reimp
 */
bool StartEntitiesDetectionV2JobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEntitiesDetectionV2JobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEntitiesDetectionV2JobRequest::response(QNetworkReply * const reply) const
{
    return new StartEntitiesDetectionV2JobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartEntitiesDetectionV2JobRequestPrivate
 * \brief The StartEntitiesDetectionV2JobRequestPrivate class provides private implementation for StartEntitiesDetectionV2JobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartEntitiesDetectionV2JobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartEntitiesDetectionV2JobRequestPrivate::StartEntitiesDetectionV2JobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEntitiesDetectionV2JobRequest
 * class' copy constructor.
 */
StartEntitiesDetectionV2JobRequestPrivate::StartEntitiesDetectionV2JobRequestPrivate(
    const StartEntitiesDetectionV2JobRequestPrivate &other, StartEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws

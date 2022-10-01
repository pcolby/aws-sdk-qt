// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfhirexportjobrequest.h"
#include "startfhirexportjobrequest_p.h"
#include "startfhirexportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobRequest
 * \brief The StartFHIRExportJobRequest class provides an interface for HealthLake StartFHIRExportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartFHIRExportJobRequest::StartFHIRExportJobRequest(const StartFHIRExportJobRequest &other)
    : HealthLakeRequest(new StartFHIRExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFHIRExportJobRequest object.
 */
StartFHIRExportJobRequest::StartFHIRExportJobRequest()
    : HealthLakeRequest(new StartFHIRExportJobRequestPrivate(HealthLakeRequest::StartFHIRExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartFHIRExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFHIRExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFHIRExportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartFHIRExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::StartFHIRExportJobRequestPrivate
 * \brief The StartFHIRExportJobRequestPrivate class provides private implementation for StartFHIRExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRExportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
StartFHIRExportJobRequestPrivate::StartFHIRExportJobRequestPrivate(
    const HealthLakeRequest::Action action, StartFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFHIRExportJobRequest
 * class' copy constructor.
 */
StartFHIRExportJobRequestPrivate::StartFHIRExportJobRequestPrivate(
    const StartFHIRExportJobRequestPrivate &other, StartFHIRExportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws

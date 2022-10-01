// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfhirimportjobrequest.h"
#include "startfhirimportjobrequest_p.h"
#include "startfhirimportjobresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobRequest
 * \brief The StartFHIRImportJobRequest class provides an interface for HealthLake StartFHIRImportJob requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::startFHIRImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartFHIRImportJobRequest::StartFHIRImportJobRequest(const StartFHIRImportJobRequest &other)
    : HealthLakeRequest(new StartFHIRImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFHIRImportJobRequest object.
 */
StartFHIRImportJobRequest::StartFHIRImportJobRequest()
    : HealthLakeRequest(new StartFHIRImportJobRequestPrivate(HealthLakeRequest::StartFHIRImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartFHIRImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFHIRImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFHIRImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartFHIRImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::StartFHIRImportJobRequestPrivate
 * \brief The StartFHIRImportJobRequestPrivate class provides private implementation for StartFHIRImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a StartFHIRImportJobRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
StartFHIRImportJobRequestPrivate::StartFHIRImportJobRequestPrivate(
    const HealthLakeRequest::Action action, StartFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFHIRImportJobRequest
 * class' copy constructor.
 */
StartFHIRImportJobRequestPrivate::StartFHIRImportJobRequestPrivate(
    const StartFHIRImportJobRequestPrivate &other, StartFHIRImportJobRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws

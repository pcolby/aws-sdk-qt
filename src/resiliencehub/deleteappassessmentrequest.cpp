// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappassessmentrequest.h"
#include "deleteappassessmentrequest_p.h"
#include "deleteappassessmentresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteAppAssessmentRequest
 * \brief The DeleteAppAssessmentRequest class provides an interface for ResilienceHub DeleteAppAssessment requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteAppAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppAssessmentRequest::DeleteAppAssessmentRequest(const DeleteAppAssessmentRequest &other)
    : ResilienceHubRequest(new DeleteAppAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppAssessmentRequest object.
 */
DeleteAppAssessmentRequest::DeleteAppAssessmentRequest()
    : ResilienceHubRequest(new DeleteAppAssessmentRequestPrivate(ResilienceHubRequest::DeleteAppAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DeleteAppAssessmentRequestPrivate
 * \brief The DeleteAppAssessmentRequestPrivate class provides private implementation for DeleteAppAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteAppAssessmentRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DeleteAppAssessmentRequestPrivate::DeleteAppAssessmentRequestPrivate(
    const ResilienceHubRequest::Action action, DeleteAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppAssessmentRequest
 * class' copy constructor.
 */
DeleteAppAssessmentRequestPrivate::DeleteAppAssessmentRequestPrivate(
    const DeleteAppAssessmentRequestPrivate &other, DeleteAppAssessmentRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws

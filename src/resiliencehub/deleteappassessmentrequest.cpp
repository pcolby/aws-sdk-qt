/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

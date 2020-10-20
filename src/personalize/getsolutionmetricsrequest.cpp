/*
    Copyright 2013-2020 Paul Colby

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

#include "getsolutionmetricsrequest.h"
#include "getsolutionmetricsrequest_p.h"
#include "getsolutionmetricsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::GetSolutionMetricsRequest
 * \brief The GetSolutionMetricsRequest class provides an interface for Personalize GetSolutionMetrics requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::getSolutionMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetSolutionMetricsRequest::GetSolutionMetricsRequest(const GetSolutionMetricsRequest &other)
    : PersonalizeRequest(new GetSolutionMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSolutionMetricsRequest object.
 */
GetSolutionMetricsRequest::GetSolutionMetricsRequest()
    : PersonalizeRequest(new GetSolutionMetricsRequestPrivate(PersonalizeRequest::GetSolutionMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSolutionMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSolutionMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSolutionMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetSolutionMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::GetSolutionMetricsRequestPrivate
 * \brief The GetSolutionMetricsRequestPrivate class provides private implementation for GetSolutionMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a GetSolutionMetricsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
GetSolutionMetricsRequestPrivate::GetSolutionMetricsRequestPrivate(
    const PersonalizeRequest::Action action, GetSolutionMetricsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSolutionMetricsRequest
 * class' copy constructor.
 */
GetSolutionMetricsRequestPrivate::GetSolutionMetricsRequestPrivate(
    const GetSolutionMetricsRequestPrivate &other, GetSolutionMetricsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws

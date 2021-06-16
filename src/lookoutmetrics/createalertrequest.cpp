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

#include "createalertrequest.h"
#include "createalertrequest_p.h"
#include "createalertresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateAlertRequest
 * \brief The CreateAlertRequest class provides an interface for LookoutMetrics CreateAlert requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createAlert
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAlertRequest::CreateAlertRequest(const CreateAlertRequest &other)
    : LookoutMetricsRequest(new CreateAlertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAlertRequest object.
 */
CreateAlertRequest::CreateAlertRequest()
    : LookoutMetricsRequest(new CreateAlertRequestPrivate(LookoutMetricsRequest::CreateAlertAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAlertRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAlertResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAlertRequest::response(QNetworkReply * const reply) const
{
    return new CreateAlertResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::CreateAlertRequestPrivate
 * \brief The CreateAlertRequestPrivate class provides private implementation for CreateAlertRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateAlertRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
CreateAlertRequestPrivate::CreateAlertRequestPrivate(
    const LookoutMetricsRequest::Action action, CreateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAlertRequest
 * class' copy constructor.
 */
CreateAlertRequestPrivate::CreateAlertRequestPrivate(
    const CreateAlertRequestPrivate &other, CreateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws

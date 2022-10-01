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

#include "listmonitoringschedulesrequest.h"
#include "listmonitoringschedulesrequest_p.h"
#include "listmonitoringschedulesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListMonitoringSchedulesRequest
 * \brief The ListMonitoringSchedulesRequest class provides an interface for SageMaker ListMonitoringSchedules requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listMonitoringSchedules
 */

/*!
 * Constructs a copy of \a other.
 */
ListMonitoringSchedulesRequest::ListMonitoringSchedulesRequest(const ListMonitoringSchedulesRequest &other)
    : SageMakerRequest(new ListMonitoringSchedulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMonitoringSchedulesRequest object.
 */
ListMonitoringSchedulesRequest::ListMonitoringSchedulesRequest()
    : SageMakerRequest(new ListMonitoringSchedulesRequestPrivate(SageMakerRequest::ListMonitoringSchedulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMonitoringSchedulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMonitoringSchedulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMonitoringSchedulesRequest::response(QNetworkReply * const reply) const
{
    return new ListMonitoringSchedulesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListMonitoringSchedulesRequestPrivate
 * \brief The ListMonitoringSchedulesRequestPrivate class provides private implementation for ListMonitoringSchedulesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListMonitoringSchedulesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListMonitoringSchedulesRequestPrivate::ListMonitoringSchedulesRequestPrivate(
    const SageMakerRequest::Action action, ListMonitoringSchedulesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMonitoringSchedulesRequest
 * class' copy constructor.
 */
ListMonitoringSchedulesRequestPrivate::ListMonitoringSchedulesRequestPrivate(
    const ListMonitoringSchedulesRequestPrivate &other, ListMonitoringSchedulesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

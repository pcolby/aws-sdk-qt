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

#include "createmonitoringschedulerequest.h"
#include "createmonitoringschedulerequest_p.h"
#include "createmonitoringscheduleresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateMonitoringScheduleRequest
 * \brief The CreateMonitoringScheduleRequest class provides an interface for SageMaker CreateMonitoringSchedule requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::createMonitoringSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMonitoringScheduleRequest::CreateMonitoringScheduleRequest(const CreateMonitoringScheduleRequest &other)
    : SageMakerRequest(new CreateMonitoringScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMonitoringScheduleRequest object.
 */
CreateMonitoringScheduleRequest::CreateMonitoringScheduleRequest()
    : SageMakerRequest(new CreateMonitoringScheduleRequestPrivate(SageMakerRequest::CreateMonitoringScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMonitoringScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMonitoringScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMonitoringScheduleRequest::response(QNetworkReply * const reply) const
{
    return new CreateMonitoringScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateMonitoringScheduleRequestPrivate
 * \brief The CreateMonitoringScheduleRequestPrivate class provides private implementation for CreateMonitoringScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateMonitoringScheduleRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateMonitoringScheduleRequestPrivate::CreateMonitoringScheduleRequestPrivate(
    const SageMakerRequest::Action action, CreateMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMonitoringScheduleRequest
 * class' copy constructor.
 */
CreateMonitoringScheduleRequestPrivate::CreateMonitoringScheduleRequestPrivate(
    const CreateMonitoringScheduleRequestPrivate &other, CreateMonitoringScheduleRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

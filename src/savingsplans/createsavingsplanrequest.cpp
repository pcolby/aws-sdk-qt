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

#include "createsavingsplanrequest.h"
#include "createsavingsplanrequest_p.h"
#include "createsavingsplanresponse.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::CreateSavingsPlanRequest
 * \brief The CreateSavingsPlanRequest class provides an interface for SavingsPlans CreateSavingsPlan requests.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::createSavingsPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSavingsPlanRequest::CreateSavingsPlanRequest(const CreateSavingsPlanRequest &other)
    : SavingsPlansRequest(new CreateSavingsPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSavingsPlanRequest object.
 */
CreateSavingsPlanRequest::CreateSavingsPlanRequest()
    : SavingsPlansRequest(new CreateSavingsPlanRequestPrivate(SavingsPlansRequest::CreateSavingsPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSavingsPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSavingsPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSavingsPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateSavingsPlanResponse(*this, reply);
}

/*!
 * \class QtAws::SavingsPlans::CreateSavingsPlanRequestPrivate
 * \brief The CreateSavingsPlanRequestPrivate class provides private implementation for CreateSavingsPlanRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a CreateSavingsPlanRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
CreateSavingsPlanRequestPrivate::CreateSavingsPlanRequestPrivate(
    const SavingsPlansRequest::Action action, CreateSavingsPlanRequest * const q)
    : SavingsPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSavingsPlanRequest
 * class' copy constructor.
 */
CreateSavingsPlanRequestPrivate::CreateSavingsPlanRequestPrivate(
    const CreateSavingsPlanRequestPrivate &other, CreateSavingsPlanRequest * const q)
    : SavingsPlansRequestPrivate(other, q)
{

}

} // namespace SavingsPlans
} // namespace QtAws

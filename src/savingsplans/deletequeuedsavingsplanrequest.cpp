// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequeuedsavingsplanrequest.h"
#include "deletequeuedsavingsplanrequest_p.h"
#include "deletequeuedsavingsplanresponse.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::DeleteQueuedSavingsPlanRequest
 * \brief The DeleteQueuedSavingsPlanRequest class provides an interface for SavingsPlans DeleteQueuedSavingsPlan requests.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::deleteQueuedSavingsPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQueuedSavingsPlanRequest::DeleteQueuedSavingsPlanRequest(const DeleteQueuedSavingsPlanRequest &other)
    : SavingsPlansRequest(new DeleteQueuedSavingsPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQueuedSavingsPlanRequest object.
 */
DeleteQueuedSavingsPlanRequest::DeleteQueuedSavingsPlanRequest()
    : SavingsPlansRequest(new DeleteQueuedSavingsPlanRequestPrivate(SavingsPlansRequest::DeleteQueuedSavingsPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueuedSavingsPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQueuedSavingsPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueuedSavingsPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueuedSavingsPlanResponse(*this, reply);
}

/*!
 * \class QtAws::SavingsPlans::DeleteQueuedSavingsPlanRequestPrivate
 * \brief The DeleteQueuedSavingsPlanRequestPrivate class provides private implementation for DeleteQueuedSavingsPlanRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a DeleteQueuedSavingsPlanRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
DeleteQueuedSavingsPlanRequestPrivate::DeleteQueuedSavingsPlanRequestPrivate(
    const SavingsPlansRequest::Action action, DeleteQueuedSavingsPlanRequest * const q)
    : SavingsPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueuedSavingsPlanRequest
 * class' copy constructor.
 */
DeleteQueuedSavingsPlanRequestPrivate::DeleteQueuedSavingsPlanRequestPrivate(
    const DeleteQueuedSavingsPlanRequestPrivate &other, DeleteQueuedSavingsPlanRequest * const q)
    : SavingsPlansRequestPrivate(other, q)
{

}

} // namespace SavingsPlans
} // namespace QtAws

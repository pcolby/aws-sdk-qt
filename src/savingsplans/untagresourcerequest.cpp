// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for SavingsPlans UntagResource requests.
 *
 * \inmodule QtAwsSavingsPlans
 *
 *  Savings Plans are a pricing model that offer significant savings on AWS usage (for example, on Amazon EC2 instances).
 *  You commit to a consistent amount of usage, in USD per hour, for a term of 1 or 3 years, and receive a lower price for
 *  that usage. For more information, see the <a href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">AWS
 *  Savings Plans User
 *
 * \sa SavingsPlansClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : SavingsPlansRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : SavingsPlansRequest(new UntagResourceRequestPrivate(SavingsPlansRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::SavingsPlans::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const SavingsPlansRequest::Action action, UntagResourceRequest * const q)
    : SavingsPlansRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : SavingsPlansRequestPrivate(other, q)
{

}

} // namespace SavingsPlans
} // namespace QtAws

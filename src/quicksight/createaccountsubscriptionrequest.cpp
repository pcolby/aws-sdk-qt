// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccountsubscriptionrequest.h"
#include "createaccountsubscriptionrequest_p.h"
#include "createaccountsubscriptionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAccountSubscriptionRequest
 * \brief The CreateAccountSubscriptionRequest class provides an interface for QuickSight CreateAccountSubscription requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAccountSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccountSubscriptionRequest::CreateAccountSubscriptionRequest(const CreateAccountSubscriptionRequest &other)
    : QuickSightRequest(new CreateAccountSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccountSubscriptionRequest object.
 */
CreateAccountSubscriptionRequest::CreateAccountSubscriptionRequest()
    : QuickSightRequest(new CreateAccountSubscriptionRequestPrivate(QuickSightRequest::CreateAccountSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccountSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccountSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccountSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccountSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateAccountSubscriptionRequestPrivate
 * \brief The CreateAccountSubscriptionRequestPrivate class provides private implementation for CreateAccountSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAccountSubscriptionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateAccountSubscriptionRequestPrivate::CreateAccountSubscriptionRequestPrivate(
    const QuickSightRequest::Action action, CreateAccountSubscriptionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccountSubscriptionRequest
 * class' copy constructor.
 */
CreateAccountSubscriptionRequestPrivate::CreateAccountSubscriptionRequestPrivate(
    const CreateAccountSubscriptionRequestPrivate &other, CreateAccountSubscriptionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws

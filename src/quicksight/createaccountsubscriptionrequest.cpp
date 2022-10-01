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

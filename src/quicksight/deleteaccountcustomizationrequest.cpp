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

#include "deleteaccountcustomizationrequest.h"
#include "deleteaccountcustomizationrequest_p.h"
#include "deleteaccountcustomizationresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationRequest
 * \brief The DeleteAccountCustomizationRequest class provides an interface for QuickSight DeleteAccountCustomization requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAccountCustomization
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccountCustomizationRequest::DeleteAccountCustomizationRequest(const DeleteAccountCustomizationRequest &other)
    : QuickSightRequest(new DeleteAccountCustomizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccountCustomizationRequest object.
 */
DeleteAccountCustomizationRequest::DeleteAccountCustomizationRequest()
    : QuickSightRequest(new DeleteAccountCustomizationRequestPrivate(QuickSightRequest::DeleteAccountCustomizationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccountCustomizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccountCustomizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccountCustomizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccountCustomizationResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationRequestPrivate
 * \brief The DeleteAccountCustomizationRequestPrivate class provides private implementation for DeleteAccountCustomizationRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAccountCustomizationRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteAccountCustomizationRequestPrivate::DeleteAccountCustomizationRequestPrivate(
    const QuickSightRequest::Action action, DeleteAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccountCustomizationRequest
 * class' copy constructor.
 */
DeleteAccountCustomizationRequestPrivate::DeleteAccountCustomizationRequestPrivate(
    const DeleteAccountCustomizationRequestPrivate &other, DeleteAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws

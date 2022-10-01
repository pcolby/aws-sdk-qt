// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

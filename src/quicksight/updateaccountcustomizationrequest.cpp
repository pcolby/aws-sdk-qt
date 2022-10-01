// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountcustomizationrequest.h"
#include "updateaccountcustomizationrequest_p.h"
#include "updateaccountcustomizationresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAccountCustomizationRequest
 * \brief The UpdateAccountCustomizationRequest class provides an interface for QuickSight UpdateAccountCustomization requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAccountCustomization
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccountCustomizationRequest::UpdateAccountCustomizationRequest(const UpdateAccountCustomizationRequest &other)
    : QuickSightRequest(new UpdateAccountCustomizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccountCustomizationRequest object.
 */
UpdateAccountCustomizationRequest::UpdateAccountCustomizationRequest()
    : QuickSightRequest(new UpdateAccountCustomizationRequestPrivate(QuickSightRequest::UpdateAccountCustomizationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccountCustomizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccountCustomizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccountCustomizationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountCustomizationResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateAccountCustomizationRequestPrivate
 * \brief The UpdateAccountCustomizationRequestPrivate class provides private implementation for UpdateAccountCustomizationRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAccountCustomizationRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateAccountCustomizationRequestPrivate::UpdateAccountCustomizationRequestPrivate(
    const QuickSightRequest::Action action, UpdateAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountCustomizationRequest
 * class' copy constructor.
 */
UpdateAccountCustomizationRequestPrivate::UpdateAccountCustomizationRequestPrivate(
    const UpdateAccountCustomizationRequestPrivate &other, UpdateAccountCustomizationRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateiprestrictionrequest.h"
#include "updateiprestrictionrequest_p.h"
#include "updateiprestrictionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionRequest
 * \brief The UpdateIpRestrictionRequest class provides an interface for QuickSight UpdateIpRestriction requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIpRestriction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIpRestrictionRequest::UpdateIpRestrictionRequest(const UpdateIpRestrictionRequest &other)
    : QuickSightRequest(new UpdateIpRestrictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIpRestrictionRequest object.
 */
UpdateIpRestrictionRequest::UpdateIpRestrictionRequest()
    : QuickSightRequest(new UpdateIpRestrictionRequestPrivate(QuickSightRequest::UpdateIpRestrictionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIpRestrictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIpRestrictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIpRestrictionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIpRestrictionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionRequestPrivate
 * \brief The UpdateIpRestrictionRequestPrivate class provides private implementation for UpdateIpRestrictionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIpRestrictionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateIpRestrictionRequestPrivate::UpdateIpRestrictionRequestPrivate(
    const QuickSightRequest::Action action, UpdateIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIpRestrictionRequest
 * class' copy constructor.
 */
UpdateIpRestrictionRequestPrivate::UpdateIpRestrictionRequestPrivate(
    const UpdateIpRestrictionRequestPrivate &other, UpdateIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectdatadeliveryrequest.h"
#include "updateprojectdatadeliveryrequest_p.h"
#include "updateprojectdatadeliveryresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateProjectDataDeliveryRequest
 * \brief The UpdateProjectDataDeliveryRequest class provides an interface for Evidently UpdateProjectDataDelivery requests.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::updateProjectDataDelivery
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProjectDataDeliveryRequest::UpdateProjectDataDeliveryRequest(const UpdateProjectDataDeliveryRequest &other)
    : EvidentlyRequest(new UpdateProjectDataDeliveryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProjectDataDeliveryRequest object.
 */
UpdateProjectDataDeliveryRequest::UpdateProjectDataDeliveryRequest()
    : EvidentlyRequest(new UpdateProjectDataDeliveryRequestPrivate(EvidentlyRequest::UpdateProjectDataDeliveryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProjectDataDeliveryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProjectDataDeliveryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProjectDataDeliveryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectDataDeliveryResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::UpdateProjectDataDeliveryRequestPrivate
 * \brief The UpdateProjectDataDeliveryRequestPrivate class provides private implementation for UpdateProjectDataDeliveryRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateProjectDataDeliveryRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
UpdateProjectDataDeliveryRequestPrivate::UpdateProjectDataDeliveryRequestPrivate(
    const EvidentlyRequest::Action action, UpdateProjectDataDeliveryRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectDataDeliveryRequest
 * class' copy constructor.
 */
UpdateProjectDataDeliveryRequestPrivate::UpdateProjectDataDeliveryRequestPrivate(
    const UpdateProjectDataDeliveryRequestPrivate &other, UpdateProjectDataDeliveryRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws

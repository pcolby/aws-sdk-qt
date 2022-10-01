// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfeaturerequest.h"
#include "getfeaturerequest_p.h"
#include "getfeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetFeatureRequest
 * \brief The GetFeatureRequest class provides an interface for Evidently GetFeature requests.
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
 * \sa EvidentlyClient::getFeature
 */

/*!
 * Constructs a copy of \a other.
 */
GetFeatureRequest::GetFeatureRequest(const GetFeatureRequest &other)
    : EvidentlyRequest(new GetFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFeatureRequest object.
 */
GetFeatureRequest::GetFeatureRequest()
    : EvidentlyRequest(new GetFeatureRequestPrivate(EvidentlyRequest::GetFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool GetFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFeatureRequest::response(QNetworkReply * const reply) const
{
    return new GetFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetFeatureRequestPrivate
 * \brief The GetFeatureRequestPrivate class provides private implementation for GetFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetFeatureRequestPrivate::GetFeatureRequestPrivate(
    const EvidentlyRequest::Action action, GetFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFeatureRequest
 * class' copy constructor.
 */
GetFeatureRequestPrivate::GetFeatureRequestPrivate(
    const GetFeatureRequestPrivate &other, GetFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws

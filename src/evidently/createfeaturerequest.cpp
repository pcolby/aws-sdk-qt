// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfeaturerequest.h"
#include "createfeaturerequest_p.h"
#include "createfeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateFeatureRequest
 * \brief The CreateFeatureRequest class provides an interface for Evidently CreateFeature requests.
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
 * \sa EvidentlyClient::createFeature
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFeatureRequest::CreateFeatureRequest(const CreateFeatureRequest &other)
    : EvidentlyRequest(new CreateFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFeatureRequest object.
 */
CreateFeatureRequest::CreateFeatureRequest()
    : EvidentlyRequest(new CreateFeatureRequestPrivate(EvidentlyRequest::CreateFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFeatureRequest::response(QNetworkReply * const reply) const
{
    return new CreateFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::CreateFeatureRequestPrivate
 * \brief The CreateFeatureRequestPrivate class provides private implementation for CreateFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
CreateFeatureRequestPrivate::CreateFeatureRequestPrivate(
    const EvidentlyRequest::Action action, CreateFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFeatureRequest
 * class' copy constructor.
 */
CreateFeatureRequestPrivate::CreateFeatureRequestPrivate(
    const CreateFeatureRequestPrivate &other, CreateFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws

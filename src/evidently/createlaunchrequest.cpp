// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchrequest.h"
#include "createlaunchrequest_p.h"
#include "createlaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateLaunchRequest
 * \brief The CreateLaunchRequest class provides an interface for Evidently CreateLaunch requests.
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
 * \sa EvidentlyClient::createLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLaunchRequest::CreateLaunchRequest(const CreateLaunchRequest &other)
    : EvidentlyRequest(new CreateLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLaunchRequest object.
 */
CreateLaunchRequest::CreateLaunchRequest()
    : EvidentlyRequest(new CreateLaunchRequestPrivate(EvidentlyRequest::CreateLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::CreateLaunchRequestPrivate
 * \brief The CreateLaunchRequestPrivate class provides private implementation for CreateLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
CreateLaunchRequestPrivate::CreateLaunchRequestPrivate(
    const EvidentlyRequest::Action action, CreateLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchRequest
 * class' copy constructor.
 */
CreateLaunchRequestPrivate::CreateLaunchRequestPrivate(
    const CreateLaunchRequestPrivate &other, CreateLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws

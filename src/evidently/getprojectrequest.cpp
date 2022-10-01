// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprojectrequest.h"
#include "getprojectrequest_p.h"
#include "getprojectresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetProjectRequest
 * \brief The GetProjectRequest class provides an interface for Evidently GetProject requests.
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
 * \sa EvidentlyClient::getProject
 */

/*!
 * Constructs a copy of \a other.
 */
GetProjectRequest::GetProjectRequest(const GetProjectRequest &other)
    : EvidentlyRequest(new GetProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProjectRequest object.
 */
GetProjectRequest::GetProjectRequest()
    : EvidentlyRequest(new GetProjectRequestPrivate(EvidentlyRequest::GetProjectAction, this))
{

}

/*!
 * \reimp
 */
bool GetProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProjectRequest::response(QNetworkReply * const reply) const
{
    return new GetProjectResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetProjectRequestPrivate
 * \brief The GetProjectRequestPrivate class provides private implementation for GetProjectRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetProjectRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const EvidentlyRequest::Action action, GetProjectRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProjectRequest
 * class' copy constructor.
 */
GetProjectRequestPrivate::GetProjectRequestPrivate(
    const GetProjectRequestPrivate &other, GetProjectRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws

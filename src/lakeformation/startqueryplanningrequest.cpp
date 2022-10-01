// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startqueryplanningrequest.h"
#include "startqueryplanningrequest_p.h"
#include "startqueryplanningresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::StartQueryPlanningRequest
 * \brief The StartQueryPlanningRequest class provides an interface for LakeFormation StartQueryPlanning requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::startQueryPlanning
 */

/*!
 * Constructs a copy of \a other.
 */
StartQueryPlanningRequest::StartQueryPlanningRequest(const StartQueryPlanningRequest &other)
    : LakeFormationRequest(new StartQueryPlanningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartQueryPlanningRequest object.
 */
StartQueryPlanningRequest::StartQueryPlanningRequest()
    : LakeFormationRequest(new StartQueryPlanningRequestPrivate(LakeFormationRequest::StartQueryPlanningAction, this))
{

}

/*!
 * \reimp
 */
bool StartQueryPlanningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartQueryPlanningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartQueryPlanningRequest::response(QNetworkReply * const reply) const
{
    return new StartQueryPlanningResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::StartQueryPlanningRequestPrivate
 * \brief The StartQueryPlanningRequestPrivate class provides private implementation for StartQueryPlanningRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a StartQueryPlanningRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
StartQueryPlanningRequestPrivate::StartQueryPlanningRequestPrivate(
    const LakeFormationRequest::Action action, StartQueryPlanningRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartQueryPlanningRequest
 * class' copy constructor.
 */
StartQueryPlanningRequestPrivate::StartQueryPlanningRequestPrivate(
    const StartQueryPlanningRequestPrivate &other, StartQueryPlanningRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

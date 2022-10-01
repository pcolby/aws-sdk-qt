// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkunitresultsrequest.h"
#include "getworkunitresultsrequest_p.h"
#include "getworkunitresultsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsRequest
 * \brief The GetWorkUnitResultsRequest class provides an interface for LakeFormation GetWorkUnitResults requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnitResults
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkUnitResultsRequest::GetWorkUnitResultsRequest(const GetWorkUnitResultsRequest &other)
    : LakeFormationRequest(new GetWorkUnitResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkUnitResultsRequest object.
 */
GetWorkUnitResultsRequest::GetWorkUnitResultsRequest()
    : LakeFormationRequest(new GetWorkUnitResultsRequestPrivate(LakeFormationRequest::GetWorkUnitResultsAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkUnitResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkUnitResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkUnitResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkUnitResultsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitResultsRequestPrivate
 * \brief The GetWorkUnitResultsRequestPrivate class provides private implementation for GetWorkUnitResultsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitResultsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetWorkUnitResultsRequestPrivate::GetWorkUnitResultsRequestPrivate(
    const LakeFormationRequest::Action action, GetWorkUnitResultsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkUnitResultsRequest
 * class' copy constructor.
 */
GetWorkUnitResultsRequestPrivate::GetWorkUnitResultsRequestPrivate(
    const GetWorkUnitResultsRequestPrivate &other, GetWorkUnitResultsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

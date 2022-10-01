// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquerystaterequest.h"
#include "getquerystaterequest_p.h"
#include "getquerystateresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStateRequest
 * \brief The GetQueryStateRequest class provides an interface for LakeFormation GetQueryState requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryState
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryStateRequest::GetQueryStateRequest(const GetQueryStateRequest &other)
    : LakeFormationRequest(new GetQueryStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryStateRequest object.
 */
GetQueryStateRequest::GetQueryStateRequest()
    : LakeFormationRequest(new GetQueryStateRequestPrivate(LakeFormationRequest::GetQueryStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryStateRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryStateResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetQueryStateRequestPrivate
 * \brief The GetQueryStateRequestPrivate class provides private implementation for GetQueryStateRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStateRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetQueryStateRequestPrivate::GetQueryStateRequestPrivate(
    const LakeFormationRequest::Action action, GetQueryStateRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryStateRequest
 * class' copy constructor.
 */
GetQueryStateRequestPrivate::GetQueryStateRequestPrivate(
    const GetQueryStateRequestPrivate &other, GetQueryStateRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkunitsrequest.h"
#include "getworkunitsrequest_p.h"
#include "getworkunitsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsRequest
 * \brief The GetWorkUnitsRequest class provides an interface for LakeFormation GetWorkUnits requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getWorkUnits
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkUnitsRequest::GetWorkUnitsRequest(const GetWorkUnitsRequest &other)
    : LakeFormationRequest(new GetWorkUnitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkUnitsRequest object.
 */
GetWorkUnitsRequest::GetWorkUnitsRequest()
    : LakeFormationRequest(new GetWorkUnitsRequestPrivate(LakeFormationRequest::GetWorkUnitsAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkUnitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkUnitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkUnitsRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkUnitsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetWorkUnitsRequestPrivate
 * \brief The GetWorkUnitsRequestPrivate class provides private implementation for GetWorkUnitsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetWorkUnitsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetWorkUnitsRequestPrivate::GetWorkUnitsRequestPrivate(
    const LakeFormationRequest::Action action, GetWorkUnitsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkUnitsRequest
 * class' copy constructor.
 */
GetWorkUnitsRequestPrivate::GetWorkUnitsRequestPrivate(
    const GetWorkUnitsRequestPrivate &other, GetWorkUnitsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

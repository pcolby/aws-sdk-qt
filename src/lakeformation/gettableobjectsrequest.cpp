// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableobjectsrequest.h"
#include "gettableobjectsrequest_p.h"
#include "gettableobjectsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTableObjectsRequest
 * \brief The GetTableObjectsRequest class provides an interface for LakeFormation GetTableObjects requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTableObjects
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableObjectsRequest::GetTableObjectsRequest(const GetTableObjectsRequest &other)
    : LakeFormationRequest(new GetTableObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableObjectsRequest object.
 */
GetTableObjectsRequest::GetTableObjectsRequest()
    : LakeFormationRequest(new GetTableObjectsRequestPrivate(LakeFormationRequest::GetTableObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableObjectsRequest::response(QNetworkReply * const reply) const
{
    return new GetTableObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetTableObjectsRequestPrivate
 * \brief The GetTableObjectsRequestPrivate class provides private implementation for GetTableObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTableObjectsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetTableObjectsRequestPrivate::GetTableObjectsRequestPrivate(
    const LakeFormationRequest::Action action, GetTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableObjectsRequest
 * class' copy constructor.
 */
GetTableObjectsRequestPrivate::GetTableObjectsRequestPrivate(
    const GetTableObjectsRequestPrivate &other, GetTableObjectsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

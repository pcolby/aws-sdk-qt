/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getlftagrequest.h"
#include "getlftagrequest_p.h"
#include "getlftagresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetLFTagRequest
 * \brief The GetLFTagRequest class provides an interface for LakeFormation GetLFTag requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::getLFTag
 */

/*!
 * Constructs a copy of \a other.
 */
GetLFTagRequest::GetLFTagRequest(const GetLFTagRequest &other)
    : LakeFormationRequest(new GetLFTagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLFTagRequest object.
 */
GetLFTagRequest::GetLFTagRequest()
    : LakeFormationRequest(new GetLFTagRequestPrivate(LakeFormationRequest::GetLFTagAction, this))
{

}

/*!
 * \reimp
 */
bool GetLFTagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLFTagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLFTagRequest::response(QNetworkReply * const reply) const
{
    return new GetLFTagResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetLFTagRequestPrivate
 * \brief The GetLFTagRequestPrivate class provides private implementation for GetLFTagRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetLFTagRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetLFTagRequestPrivate::GetLFTagRequestPrivate(
    const LakeFormationRequest::Action action, GetLFTagRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLFTagRequest
 * class' copy constructor.
 */
GetLFTagRequestPrivate::GetLFTagRequestPrivate(
    const GetLFTagRequestPrivate &other, GetLFTagRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

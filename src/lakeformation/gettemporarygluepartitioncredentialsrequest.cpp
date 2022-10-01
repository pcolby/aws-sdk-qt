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

#include "gettemporarygluepartitioncredentialsrequest.h"
#include "gettemporarygluepartitioncredentialsrequest_p.h"
#include "gettemporarygluepartitioncredentialsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsRequest
 * \brief The GetTemporaryGluePartitionCredentialsRequest class provides an interface for LakeFormation GetTemporaryGluePartitionCredentials requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGluePartitionCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetTemporaryGluePartitionCredentialsRequest::GetTemporaryGluePartitionCredentialsRequest(const GetTemporaryGluePartitionCredentialsRequest &other)
    : LakeFormationRequest(new GetTemporaryGluePartitionCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsRequest object.
 */
GetTemporaryGluePartitionCredentialsRequest::GetTemporaryGluePartitionCredentialsRequest()
    : LakeFormationRequest(new GetTemporaryGluePartitionCredentialsRequestPrivate(LakeFormationRequest::GetTemporaryGluePartitionCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTemporaryGluePartitionCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTemporaryGluePartitionCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTemporaryGluePartitionCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetTemporaryGluePartitionCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGluePartitionCredentialsRequestPrivate
 * \brief The GetTemporaryGluePartitionCredentialsRequestPrivate class provides private implementation for GetTemporaryGluePartitionCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGluePartitionCredentialsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetTemporaryGluePartitionCredentialsRequestPrivate::GetTemporaryGluePartitionCredentialsRequestPrivate(
    const LakeFormationRequest::Action action, GetTemporaryGluePartitionCredentialsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTemporaryGluePartitionCredentialsRequest
 * class' copy constructor.
 */
GetTemporaryGluePartitionCredentialsRequestPrivate::GetTemporaryGluePartitionCredentialsRequestPrivate(
    const GetTemporaryGluePartitionCredentialsRequestPrivate &other, GetTemporaryGluePartitionCredentialsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

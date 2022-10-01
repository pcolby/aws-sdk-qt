// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettemporarygluetablecredentialsrequest.h"
#include "gettemporarygluetablecredentialsrequest_p.h"
#include "gettemporarygluetablecredentialsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsRequest
 * \brief The GetTemporaryGlueTableCredentialsRequest class provides an interface for LakeFormation GetTemporaryGlueTableCredentials requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTemporaryGlueTableCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetTemporaryGlueTableCredentialsRequest::GetTemporaryGlueTableCredentialsRequest(const GetTemporaryGlueTableCredentialsRequest &other)
    : LakeFormationRequest(new GetTemporaryGlueTableCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTemporaryGlueTableCredentialsRequest object.
 */
GetTemporaryGlueTableCredentialsRequest::GetTemporaryGlueTableCredentialsRequest()
    : LakeFormationRequest(new GetTemporaryGlueTableCredentialsRequestPrivate(LakeFormationRequest::GetTemporaryGlueTableCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTemporaryGlueTableCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTemporaryGlueTableCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTemporaryGlueTableCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetTemporaryGlueTableCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetTemporaryGlueTableCredentialsRequestPrivate
 * \brief The GetTemporaryGlueTableCredentialsRequestPrivate class provides private implementation for GetTemporaryGlueTableCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTemporaryGlueTableCredentialsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetTemporaryGlueTableCredentialsRequestPrivate::GetTemporaryGlueTableCredentialsRequestPrivate(
    const LakeFormationRequest::Action action, GetTemporaryGlueTableCredentialsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTemporaryGlueTableCredentialsRequest
 * class' copy constructor.
 */
GetTemporaryGlueTableCredentialsRequestPrivate::GetTemporaryGlueTableCredentialsRequestPrivate(
    const GetTemporaryGlueTableCredentialsRequestPrivate &other, GetTemporaryGlueTableCredentialsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

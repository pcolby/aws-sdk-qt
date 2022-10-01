// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprogrammaticaccesscredentialsrequest.h"
#include "getprogrammaticaccesscredentialsrequest_p.h"
#include "getprogrammaticaccesscredentialsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetProgrammaticAccessCredentialsRequest
 * \brief The GetProgrammaticAccessCredentialsRequest class provides an interface for FinspaceData GetProgrammaticAccessCredentials requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getProgrammaticAccessCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetProgrammaticAccessCredentialsRequest::GetProgrammaticAccessCredentialsRequest(const GetProgrammaticAccessCredentialsRequest &other)
    : FinspaceDataRequest(new GetProgrammaticAccessCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProgrammaticAccessCredentialsRequest object.
 */
GetProgrammaticAccessCredentialsRequest::GetProgrammaticAccessCredentialsRequest()
    : FinspaceDataRequest(new GetProgrammaticAccessCredentialsRequestPrivate(FinspaceDataRequest::GetProgrammaticAccessCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool GetProgrammaticAccessCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProgrammaticAccessCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProgrammaticAccessCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetProgrammaticAccessCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetProgrammaticAccessCredentialsRequestPrivate
 * \brief The GetProgrammaticAccessCredentialsRequestPrivate class provides private implementation for GetProgrammaticAccessCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetProgrammaticAccessCredentialsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetProgrammaticAccessCredentialsRequestPrivate::GetProgrammaticAccessCredentialsRequestPrivate(
    const FinspaceDataRequest::Action action, GetProgrammaticAccessCredentialsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProgrammaticAccessCredentialsRequest
 * class' copy constructor.
 */
GetProgrammaticAccessCredentialsRequestPrivate::GetProgrammaticAccessCredentialsRequestPrivate(
    const GetProgrammaticAccessCredentialsRequestPrivate &other, GetProgrammaticAccessCredentialsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws

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

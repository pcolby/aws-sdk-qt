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
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::GetProgrammaticAccessCredentialsRequest
 * \brief The GetProgrammaticAccessCredentialsRequest class provides an interface for FinSpaceData GetProgrammaticAccessCredentials requests.
 *
 * \inmodule QtAwsFinSpaceData
 *
 *  The FinSpace APIs let you take actions inside the FinSpace environment.
 *
 * \sa FinSpaceDataClient::getProgrammaticAccessCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetProgrammaticAccessCredentialsRequest::GetProgrammaticAccessCredentialsRequest(const GetProgrammaticAccessCredentialsRequest &other)
    : FinSpaceDataRequest(new GetProgrammaticAccessCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProgrammaticAccessCredentialsRequest object.
 */
GetProgrammaticAccessCredentialsRequest::GetProgrammaticAccessCredentialsRequest()
    : FinSpaceDataRequest(new GetProgrammaticAccessCredentialsRequestPrivate(FinSpaceDataRequest::GetProgrammaticAccessCredentialsAction, this))
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
 * \class QtAws::FinSpaceData::GetProgrammaticAccessCredentialsRequestPrivate
 * \brief The GetProgrammaticAccessCredentialsRequestPrivate class provides private implementation for GetProgrammaticAccessCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a GetProgrammaticAccessCredentialsRequestPrivate object for FinSpaceData \a action,
 * with public implementation \a q.
 */
GetProgrammaticAccessCredentialsRequestPrivate::GetProgrammaticAccessCredentialsRequestPrivate(
    const FinSpaceDataRequest::Action action, GetProgrammaticAccessCredentialsRequest * const q)
    : FinSpaceDataRequestPrivate(action, q)
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
    : FinSpaceDataRequestPrivate(other, q)
{

}

} // namespace FinSpaceData
} // namespace QtAws

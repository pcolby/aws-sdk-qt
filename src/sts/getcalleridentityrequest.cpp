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

#include "getcalleridentityrequest.h"
#include "getcalleridentityrequest_p.h"
#include "getcalleridentityresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetCallerIdentityRequest
 * \brief The GetCallerIdentityRequest class provides an interface for Sts GetCallerIdentity requests.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::getCallerIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest(const GetCallerIdentityRequest &other)
    : StsRequest(new GetCallerIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCallerIdentityRequest object.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest()
    : StsRequest(new GetCallerIdentityRequestPrivate(StsRequest::GetCallerIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool GetCallerIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCallerIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCallerIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCallerIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::GetCallerIdentityRequestPrivate
 * \brief The GetCallerIdentityRequestPrivate class provides private implementation for GetCallerIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetCallerIdentityRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const StsRequest::Action action, GetCallerIdentityRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCallerIdentityRequest
 * class' copy constructor.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const GetCallerIdentityRequestPrivate &other, GetCallerIdentityRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws

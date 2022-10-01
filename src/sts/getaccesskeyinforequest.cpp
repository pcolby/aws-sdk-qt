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

#include "getaccesskeyinforequest.h"
#include "getaccesskeyinforequest_p.h"
#include "getaccesskeyinforesponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetAccessKeyInfoRequest
 * \brief The GetAccessKeyInfoRequest class provides an interface for Sts GetAccessKeyInfo requests.
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
 * \sa StsClient::getAccessKeyInfo
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessKeyInfoRequest::GetAccessKeyInfoRequest(const GetAccessKeyInfoRequest &other)
    : StsRequest(new GetAccessKeyInfoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessKeyInfoRequest object.
 */
GetAccessKeyInfoRequest::GetAccessKeyInfoRequest()
    : StsRequest(new GetAccessKeyInfoRequestPrivate(StsRequest::GetAccessKeyInfoAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessKeyInfoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessKeyInfoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessKeyInfoRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessKeyInfoResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::GetAccessKeyInfoRequestPrivate
 * \brief The GetAccessKeyInfoRequestPrivate class provides private implementation for GetAccessKeyInfoRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetAccessKeyInfoRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetAccessKeyInfoRequestPrivate::GetAccessKeyInfoRequestPrivate(
    const StsRequest::Action action, GetAccessKeyInfoRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessKeyInfoRequest
 * class' copy constructor.
 */
GetAccessKeyInfoRequestPrivate::GetAccessKeyInfoRequestPrivate(
    const GetAccessKeyInfoRequestPrivate &other, GetAccessKeyInfoRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws

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

#include "assumerolewithwebidentityrequest.h"
#include "assumerolewithwebidentityrequest_p.h"
#include "assumerolewithwebidentityresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::AssumeRoleWithWebIdentityRequest
 * \brief The AssumeRoleWithWebIdentityRequest class provides an interface for STS AssumeRoleWithWebIdentity requests.
 *
 * \inmodule QtAwsSTS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  AWS Security Token Service (STS) enables you to request temporary, limited-privilege credentials for AWS Identity and
 *  Access Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of
 *  the STS API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::assumeRoleWithWebIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest(const AssumeRoleWithWebIdentityRequest &other)
    : StsRequest(new AssumeRoleWithWebIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssumeRoleWithWebIdentityRequest object.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest()
    : StsRequest(new AssumeRoleWithWebIdentityRequestPrivate(StsRequest::AssumeRoleWithWebIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeRoleWithWebIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssumeRoleWithWebIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleWithWebIdentityRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithWebIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::STS::AssumeRoleWithWebIdentityRequestPrivate
 * \brief The AssumeRoleWithWebIdentityRequestPrivate class provides private implementation for AssumeRoleWithWebIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a AssumeRoleWithWebIdentityRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const StsRequest::Action action, AssumeRoleWithWebIdentityRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithWebIdentityRequest
 * class' copy constructor.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const AssumeRoleWithWebIdentityRequestPrivate &other, AssumeRoleWithWebIdentityRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws

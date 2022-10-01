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

#include "assumerolerequest.h"
#include "assumerolerequest_p.h"
#include "assumeroleresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleRequest
 * \brief The AssumeRoleRequest class provides an interface for Sts AssumeRole requests.
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
 * \sa StsClient::assumeRole
 */

/*!
 * Constructs a copy of \a other.
 */
AssumeRoleRequest::AssumeRoleRequest(const AssumeRoleRequest &other)
    : StsRequest(new AssumeRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssumeRoleRequest object.
 */
AssumeRoleRequest::AssumeRoleRequest()
    : StsRequest(new AssumeRoleRequestPrivate(StsRequest::AssumeRoleAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssumeRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::AssumeRoleRequestPrivate
 * \brief The AssumeRoleRequestPrivate class provides private implementation for AssumeRoleRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const StsRequest::Action action, AssumeRoleRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleRequest
 * class' copy constructor.
 */
AssumeRoleRequestPrivate::AssumeRoleRequestPrivate(
    const AssumeRoleRequestPrivate &other, AssumeRoleRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws

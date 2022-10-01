// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessiontokenrequest.h"
#include "getsessiontokenrequest_p.h"
#include "getsessiontokenresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetSessionTokenRequest
 * \brief The GetSessionTokenRequest class provides an interface for Sts GetSessionToken requests.
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
 * \sa StsClient::getSessionToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionTokenRequest::GetSessionTokenRequest(const GetSessionTokenRequest &other)
    : StsRequest(new GetSessionTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionTokenRequest object.
 */
GetSessionTokenRequest::GetSessionTokenRequest()
    : StsRequest(new GetSessionTokenRequestPrivate(StsRequest::GetSessionTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetSessionTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSessionTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSessionTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetSessionTokenResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::GetSessionTokenRequestPrivate
 * \brief The GetSessionTokenRequestPrivate class provides private implementation for GetSessionTokenRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetSessionTokenRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetSessionTokenRequestPrivate::GetSessionTokenRequestPrivate(
    const StsRequest::Action action, GetSessionTokenRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSessionTokenRequest
 * class' copy constructor.
 */
GetSessionTokenRequestPrivate::GetSessionTokenRequestPrivate(
    const GetSessionTokenRequestPrivate &other, GetSessionTokenRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws

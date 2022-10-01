// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfederationtokenrequest.h"
#include "getfederationtokenrequest_p.h"
#include "getfederationtokenresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::GetFederationTokenRequest
 * \brief The GetFederationTokenRequest class provides an interface for Sts GetFederationToken requests.
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
 * \sa StsClient::getFederationToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetFederationTokenRequest::GetFederationTokenRequest(const GetFederationTokenRequest &other)
    : StsRequest(new GetFederationTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFederationTokenRequest object.
 */
GetFederationTokenRequest::GetFederationTokenRequest()
    : StsRequest(new GetFederationTokenRequestPrivate(StsRequest::GetFederationTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetFederationTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFederationTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFederationTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetFederationTokenResponse(*this, reply);
}

/*!
 * \class QtAws::Sts::GetFederationTokenRequestPrivate
 * \brief The GetFederationTokenRequestPrivate class provides private implementation for GetFederationTokenRequest.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a GetFederationTokenRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const StsRequest::Action action, GetFederationTokenRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFederationTokenRequest
 * class' copy constructor.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const GetFederationTokenRequestPrivate &other, GetFederationTokenRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace Sts
} // namespace QtAws

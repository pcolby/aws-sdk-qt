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

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::GetPolicyRequest
 * \brief The GetPolicyRequest class provides an interface for ACMPCA GetPolicy requests.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a quota that determines the number of times the action can be called per second. For
 *  more information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API
 *  Rate Quotas in ACM Private CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::getPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : AcmpcaRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : AcmpcaRequest(new GetPolicyRequestPrivate(AcmpcaRequest::GetPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ACMPCA::GetPolicyRequestPrivate
 * \brief The GetPolicyRequestPrivate class provides private implementation for GetPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a GetPolicyRequestPrivate object for Acmpca \a action,
 * with public implementation \a q.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const AcmpcaRequest::Action action, GetPolicyRequest * const q)
    : AcmpcaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : AcmpcaRequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws

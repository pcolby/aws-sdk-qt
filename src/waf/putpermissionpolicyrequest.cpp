/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putpermissionpolicyrequest.h"
#include "putpermissionpolicyrequest_p.h"
#include "putpermissionpolicyresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::PutPermissionPolicyRequest
 * \brief The PutPermissionPolicyRequest class provides an interface for WAF PutPermissionPolicy requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::putPermissionPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutPermissionPolicyRequest::PutPermissionPolicyRequest(const PutPermissionPolicyRequest &other)
    : WAFRequest(new PutPermissionPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPermissionPolicyRequest object.
 */
PutPermissionPolicyRequest::PutPermissionPolicyRequest()
    : WAFRequest(new PutPermissionPolicyRequestPrivate(WAFRequest::PutPermissionPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutPermissionPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPermissionPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPermissionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutPermissionPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::PutPermissionPolicyRequestPrivate
 * \brief The PutPermissionPolicyRequestPrivate class provides private implementation for PutPermissionPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a PutPermissionPolicyRequestPrivate object for WAF \a action,
 * with public implementation \a q.
 */
PutPermissionPolicyRequestPrivate::PutPermissionPolicyRequestPrivate(
    const WAFRequest::Action action, PutPermissionPolicyRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPermissionPolicyRequest
 * class' copy constructor.
 */
PutPermissionPolicyRequestPrivate::PutPermissionPolicyRequestPrivate(
    const PutPermissionPolicyRequestPrivate &other, PutPermissionPolicyRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws

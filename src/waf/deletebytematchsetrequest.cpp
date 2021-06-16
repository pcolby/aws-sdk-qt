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

#include "deletebytematchsetrequest.h"
#include "deletebytematchsetrequest_p.h"
#include "deletebytematchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::DeleteByteMatchSetRequest
 * \brief The DeleteByteMatchSetRequest class provides an interface for WAF DeleteByteMatchSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::deleteByteMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest(const DeleteByteMatchSetRequest &other)
    : WafRequest(new DeleteByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteByteMatchSetRequest object.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest()
    : WafRequest(new DeleteByteMatchSetRequestPrivate(WafRequest::DeleteByteMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteByteMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteByteMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteByteMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::DeleteByteMatchSetRequestPrivate
 * \brief The DeleteByteMatchSetRequestPrivate class provides private implementation for DeleteByteMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a DeleteByteMatchSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const WafRequest::Action action, DeleteByteMatchSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteByteMatchSetRequest
 * class' copy constructor.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const DeleteByteMatchSetRequestPrivate &other, DeleteByteMatchSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws

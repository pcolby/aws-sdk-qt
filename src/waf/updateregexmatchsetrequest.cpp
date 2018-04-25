/*
    Copyright 2013-2018 Paul Colby

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

#include "updateregexmatchsetrequest.h"
#include "updateregexmatchsetrequest_p.h"
#include "updateregexmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRegexMatchSetRequest
 * \brief The UpdateRegexMatchSetRequest class provides an interface for WAF UpdateRegexMatchSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::updateRegexMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRegexMatchSetRequest::UpdateRegexMatchSetRequest(const UpdateRegexMatchSetRequest &other)
    : WafRequest(new UpdateRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRegexMatchSetRequest object.
 */
UpdateRegexMatchSetRequest::UpdateRegexMatchSetRequest()
    : WafRequest(new UpdateRegexMatchSetRequestPrivate(WafRequest::UpdateRegexMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegexMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRegexMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegexMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::UpdateRegexMatchSetRequestPrivate
 * \brief The UpdateRegexMatchSetRequestPrivate class provides private implementation for UpdateRegexMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateRegexMatchSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
UpdateRegexMatchSetRequestPrivate::UpdateRegexMatchSetRequestPrivate(
    const WafRequest::Action action, UpdateRegexMatchSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegexMatchSetRequest
 * class' copy constructor.
 */
UpdateRegexMatchSetRequestPrivate::UpdateRegexMatchSetRequestPrivate(
    const UpdateRegexMatchSetRequestPrivate &other, UpdateRegexMatchSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws

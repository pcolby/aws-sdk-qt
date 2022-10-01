// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateregexmatchsetrequest.h"
#include "updateregexmatchsetrequest_p.h"
#include "updateregexmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::UpdateRegexMatchSetRequest
 * \brief The UpdateRegexMatchSetRequest class provides an interface for Waf UpdateRegexMatchSet requests.
 *
 * \inmodule QtAwsWaf
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
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
 * \class QtAws::Waf::UpdateRegexMatchSetRequestPrivate
 * \brief The UpdateRegexMatchSetRequestPrivate class provides private implementation for UpdateRegexMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
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

} // namespace Waf
} // namespace QtAws

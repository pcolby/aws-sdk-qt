// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getipsetrequest.h"
#include "getipsetrequest_p.h"
#include "getipsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::GetIPSetRequest
 * \brief The GetIPSetRequest class provides an interface for Waf GetIPSet requests.
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
 * \sa WafClient::getIPSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetIPSetRequest::GetIPSetRequest(const GetIPSetRequest &other)
    : WafRequest(new GetIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIPSetRequest object.
 */
GetIPSetRequest::GetIPSetRequest()
    : WafRequest(new GetIPSetRequestPrivate(WafRequest::GetIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetIPSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIPSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIPSetRequest::response(QNetworkReply * const reply) const
{
    return new GetIPSetResponse(*this, reply);
}

/*!
 * \class QtAws::Waf::GetIPSetRequestPrivate
 * \brief The GetIPSetRequestPrivate class provides private implementation for GetIPSetRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a GetIPSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
GetIPSetRequestPrivate::GetIPSetRequestPrivate(
    const WafRequest::Action action, GetIPSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIPSetRequest
 * class' copy constructor.
 */
GetIPSetRequestPrivate::GetIPSetRequestPrivate(
    const GetIPSetRequestPrivate &other, GetIPSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace Waf
} // namespace QtAws

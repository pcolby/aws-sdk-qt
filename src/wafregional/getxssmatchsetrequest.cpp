// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getxssmatchsetrequest.h"
#include "getxssmatchsetrequest_p.h"
#include "getxssmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::GetXssMatchSetRequest
 * \brief The GetXssMatchSetRequest class provides an interface for WafRegional GetXssMatchSet requests.
 *
 * \inmodule QtAwsWafRegional
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic Regional</b> documentation. For more information, see <a
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
 *  This is the <i>AWS WAF Regional Classic API Reference</i> for using AWS WAF Classic with the AWS resources, Elastic Load
 *  Balancing (ELB) Application Load Balancers and API Gateway APIs. The AWS WAF Classic actions and data types listed in
 *  the reference are available for protecting Elastic Load Balancing (ELB) Application Load Balancers and API Gateway APIs.
 *  You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF Classic API actions, data types, and errors. For detailed
 *  information about AWS WAF Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafRegionalClient::getXssMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetXssMatchSetRequest::GetXssMatchSetRequest(const GetXssMatchSetRequest &other)
    : WafRegionalRequest(new GetXssMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetXssMatchSetRequest object.
 */
GetXssMatchSetRequest::GetXssMatchSetRequest()
    : WafRegionalRequest(new GetXssMatchSetRequestPrivate(WafRegionalRequest::GetXssMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetXssMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetXssMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetXssMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetXssMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WafRegional::GetXssMatchSetRequestPrivate
 * \brief The GetXssMatchSetRequestPrivate class provides private implementation for GetXssMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a GetXssMatchSetRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
GetXssMatchSetRequestPrivate::GetXssMatchSetRequestPrivate(
    const WafRegionalRequest::Action action, GetXssMatchSetRequest * const q)
    : WafRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetXssMatchSetRequest
 * class' copy constructor.
 */
GetXssMatchSetRequestPrivate::GetXssMatchSetRequestPrivate(
    const GetXssMatchSetRequestPrivate &other, GetXssMatchSetRequest * const q)
    : WafRegionalRequestPrivate(other, q)
{

}

} // namespace WafRegional
} // namespace QtAws

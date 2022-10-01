// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchangetokenstatusrequest.h"
#include "getchangetokenstatusrequest_p.h"
#include "getchangetokenstatusresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::GetChangeTokenStatusRequest
 * \brief The GetChangeTokenStatusRequest class provides an interface for WafRegional GetChangeTokenStatus requests.
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
 * \sa WafRegionalClient::getChangeTokenStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetChangeTokenStatusRequest::GetChangeTokenStatusRequest(const GetChangeTokenStatusRequest &other)
    : WafRegionalRequest(new GetChangeTokenStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChangeTokenStatusRequest object.
 */
GetChangeTokenStatusRequest::GetChangeTokenStatusRequest()
    : WafRegionalRequest(new GetChangeTokenStatusRequestPrivate(WafRegionalRequest::GetChangeTokenStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetChangeTokenStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChangeTokenStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChangeTokenStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeTokenStatusResponse(*this, reply);
}

/*!
 * \class QtAws::WafRegional::GetChangeTokenStatusRequestPrivate
 * \brief The GetChangeTokenStatusRequestPrivate class provides private implementation for GetChangeTokenStatusRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a GetChangeTokenStatusRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
GetChangeTokenStatusRequestPrivate::GetChangeTokenStatusRequestPrivate(
    const WafRegionalRequest::Action action, GetChangeTokenStatusRequest * const q)
    : WafRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChangeTokenStatusRequest
 * class' copy constructor.
 */
GetChangeTokenStatusRequestPrivate::GetChangeTokenStatusRequestPrivate(
    const GetChangeTokenStatusRequestPrivate &other, GetChangeTokenStatusRequest * const q)
    : WafRegionalRequestPrivate(other, q)
{

}

} // namespace WafRegional
} // namespace QtAws

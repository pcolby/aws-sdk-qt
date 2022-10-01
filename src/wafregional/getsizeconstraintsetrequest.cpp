// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsizeconstraintsetrequest.h"
#include "getsizeconstraintsetrequest_p.h"
#include "getsizeconstraintsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::GetSizeConstraintSetRequest
 * \brief The GetSizeConstraintSetRequest class provides an interface for WafRegional GetSizeConstraintSet requests.
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
 * \sa WafRegionalClient::getSizeConstraintSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest(const GetSizeConstraintSetRequest &other)
    : WafRegionalRequest(new GetSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSizeConstraintSetRequest object.
 */
GetSizeConstraintSetRequest::GetSizeConstraintSetRequest()
    : WafRegionalRequest(new GetSizeConstraintSetRequestPrivate(WafRegionalRequest::GetSizeConstraintSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetSizeConstraintSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSizeConstraintSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new GetSizeConstraintSetResponse(*this, reply);
}

/*!
 * \class QtAws::WafRegional::GetSizeConstraintSetRequestPrivate
 * \brief The GetSizeConstraintSetRequestPrivate class provides private implementation for GetSizeConstraintSetRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a GetSizeConstraintSetRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
GetSizeConstraintSetRequestPrivate::GetSizeConstraintSetRequestPrivate(
    const WafRegionalRequest::Action action, GetSizeConstraintSetRequest * const q)
    : WafRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSizeConstraintSetRequest
 * class' copy constructor.
 */
GetSizeConstraintSetRequestPrivate::GetSizeConstraintSetRequestPrivate(
    const GetSizeConstraintSetRequestPrivate &other, GetSizeConstraintSetRequest * const q)
    : WafRegionalRequestPrivate(other, q)
{

}

} // namespace WafRegional
} // namespace QtAws

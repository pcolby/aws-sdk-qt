// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrulegrouprequest.h"
#include "createrulegrouprequest_p.h"
#include "createrulegroupresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::CreateRuleGroupRequest
 * \brief The CreateRuleGroupRequest class provides an interface for WafRegional CreateRuleGroup requests.
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
 * \sa WafRegionalClient::createRuleGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest(const CreateRuleGroupRequest &other)
    : WafRegionalRequest(new CreateRuleGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRuleGroupRequest object.
 */
CreateRuleGroupRequest::CreateRuleGroupRequest()
    : WafRegionalRequest(new CreateRuleGroupRequestPrivate(WafRegionalRequest::CreateRuleGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRuleGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRuleGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRuleGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateRuleGroupResponse(*this, reply);
}

/*!
 * \class QtAws::WafRegional::CreateRuleGroupRequestPrivate
 * \brief The CreateRuleGroupRequestPrivate class provides private implementation for CreateRuleGroupRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a CreateRuleGroupRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
CreateRuleGroupRequestPrivate::CreateRuleGroupRequestPrivate(
    const WafRegionalRequest::Action action, CreateRuleGroupRequest * const q)
    : WafRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRuleGroupRequest
 * class' copy constructor.
 */
CreateRuleGroupRequestPrivate::CreateRuleGroupRequestPrivate(
    const CreateRuleGroupRequestPrivate &other, CreateRuleGroupRequest * const q)
    : WafRegionalRequestPrivate(other, q)
{

}

} // namespace WafRegional
} // namespace QtAws

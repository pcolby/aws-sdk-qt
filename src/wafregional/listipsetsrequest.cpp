// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listipsetsrequest.h"
#include "listipsetsrequest_p.h"
#include "listipsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::ListIPSetsRequest
 * \brief The ListIPSetsRequest class provides an interface for WafRegional ListIPSets requests.
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
 * \sa WafRegionalClient::listIPSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListIPSetsRequest::ListIPSetsRequest(const ListIPSetsRequest &other)
    : WafRegionalRequest(new ListIPSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIPSetsRequest object.
 */
ListIPSetsRequest::ListIPSetsRequest()
    : WafRegionalRequest(new ListIPSetsRequestPrivate(WafRegionalRequest::ListIPSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIPSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIPSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIPSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListIPSetsResponse(*this, reply);
}

/*!
 * \class QtAws::WafRegional::ListIPSetsRequestPrivate
 * \brief The ListIPSetsRequestPrivate class provides private implementation for ListIPSetsRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a ListIPSetsRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const WafRegionalRequest::Action action, ListIPSetsRequest * const q)
    : WafRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIPSetsRequest
 * class' copy constructor.
 */
ListIPSetsRequestPrivate::ListIPSetsRequestPrivate(
    const ListIPSetsRequestPrivate &other, ListIPSetsRequest * const q)
    : WafRegionalRequestPrivate(other, q)
{

}

} // namespace WafRegional
} // namespace QtAws

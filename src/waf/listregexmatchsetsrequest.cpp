// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregexmatchsetsrequest.h"
#include "listregexmatchsetsrequest_p.h"
#include "listregexmatchsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::ListRegexMatchSetsRequest
 * \brief The ListRegexMatchSetsRequest class provides an interface for Waf ListRegexMatchSets requests.
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
 * \sa WafClient::listRegexMatchSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest(const ListRegexMatchSetsRequest &other)
    : WafRequest(new ListRegexMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegexMatchSetsRequest object.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest()
    : WafRequest(new ListRegexMatchSetsRequestPrivate(WafRequest::ListRegexMatchSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegexMatchSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegexMatchSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegexMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListRegexMatchSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Waf::ListRegexMatchSetsRequestPrivate
 * \brief The ListRegexMatchSetsRequestPrivate class provides private implementation for ListRegexMatchSetsRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a ListRegexMatchSetsRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const WafRequest::Action action, ListRegexMatchSetsRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegexMatchSetsRequest
 * class' copy constructor.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const ListRegexMatchSetsRequestPrivate &other, ListRegexMatchSetsRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace Waf
} // namespace QtAws

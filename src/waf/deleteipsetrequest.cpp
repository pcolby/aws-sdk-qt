// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteipsetrequest.h"
#include "deleteipsetrequest_p.h"
#include "deleteipsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::DeleteIPSetRequest
 * \brief The DeleteIPSetRequest class provides an interface for Waf DeleteIPSet requests.
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
 * \sa WafClient::deleteIPSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIPSetRequest::DeleteIPSetRequest(const DeleteIPSetRequest &other)
    : WafRequest(new DeleteIPSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIPSetRequest object.
 */
DeleteIPSetRequest::DeleteIPSetRequest()
    : WafRequest(new DeleteIPSetRequestPrivate(WafRequest::DeleteIPSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIPSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIPSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIPSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIPSetResponse(*this, reply);
}

/*!
 * \class QtAws::Waf::DeleteIPSetRequestPrivate
 * \brief The DeleteIPSetRequestPrivate class provides private implementation for DeleteIPSetRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a DeleteIPSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const WafRequest::Action action, DeleteIPSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIPSetRequest
 * class' copy constructor.
 */
DeleteIPSetRequestPrivate::DeleteIPSetRequestPrivate(
    const DeleteIPSetRequestPrivate &other, DeleteIPSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace Waf
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsizeconstraintsetrequest.h"
#include "createsizeconstraintsetrequest_p.h"
#include "createsizeconstraintsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::CreateSizeConstraintSetRequest
 * \brief The CreateSizeConstraintSetRequest class provides an interface for Waf CreateSizeConstraintSet requests.
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
 * \sa WafClient::createSizeConstraintSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSizeConstraintSetRequest::CreateSizeConstraintSetRequest(const CreateSizeConstraintSetRequest &other)
    : WafRequest(new CreateSizeConstraintSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSizeConstraintSetRequest object.
 */
CreateSizeConstraintSetRequest::CreateSizeConstraintSetRequest()
    : WafRequest(new CreateSizeConstraintSetRequestPrivate(WafRequest::CreateSizeConstraintSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSizeConstraintSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSizeConstraintSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSizeConstraintSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateSizeConstraintSetResponse(*this, reply);
}

/*!
 * \class QtAws::Waf::CreateSizeConstraintSetRequestPrivate
 * \brief The CreateSizeConstraintSetRequestPrivate class provides private implementation for CreateSizeConstraintSetRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a CreateSizeConstraintSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
CreateSizeConstraintSetRequestPrivate::CreateSizeConstraintSetRequestPrivate(
    const WafRequest::Action action, CreateSizeConstraintSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSizeConstraintSetRequest
 * class' copy constructor.
 */
CreateSizeConstraintSetRequestPrivate::CreateSizeConstraintSetRequestPrivate(
    const CreateSizeConstraintSetRequestPrivate &other, CreateSizeConstraintSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace Waf
} // namespace QtAws

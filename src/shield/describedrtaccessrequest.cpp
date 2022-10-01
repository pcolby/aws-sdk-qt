// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedrtaccessrequest.h"
#include "describedrtaccessrequest_p.h"
#include "describedrtaccessresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeDRTAccessRequest
 * \brief The DescribeDRTAccessRequest class provides an interface for Shield DescribeDRTAccess requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::describeDRTAccess
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDRTAccessRequest::DescribeDRTAccessRequest(const DescribeDRTAccessRequest &other)
    : ShieldRequest(new DescribeDRTAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDRTAccessRequest object.
 */
DescribeDRTAccessRequest::DescribeDRTAccessRequest()
    : ShieldRequest(new DescribeDRTAccessRequestPrivate(ShieldRequest::DescribeDRTAccessAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDRTAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDRTAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDRTAccessRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDRTAccessResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeDRTAccessRequestPrivate
 * \brief The DescribeDRTAccessRequestPrivate class provides private implementation for DescribeDRTAccessRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeDRTAccessRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeDRTAccessRequestPrivate::DescribeDRTAccessRequestPrivate(
    const ShieldRequest::Action action, DescribeDRTAccessRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDRTAccessRequest
 * class' copy constructor.
 */
DescribeDRTAccessRequestPrivate::DescribeDRTAccessRequestPrivate(
    const DescribeDRTAccessRequestPrivate &other, DescribeDRTAccessRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws

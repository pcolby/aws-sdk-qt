/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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

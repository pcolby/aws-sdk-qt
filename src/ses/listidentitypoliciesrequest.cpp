// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentitypoliciesrequest.h"
#include "listidentitypoliciesrequest_p.h"
#include "listidentitypoliciesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListIdentityPoliciesRequest
 * \brief The ListIdentityPoliciesRequest class provides an interface for Ses ListIdentityPolicies requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listIdentityPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest(const ListIdentityPoliciesRequest &other)
    : SesRequest(new ListIdentityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIdentityPoliciesRequest object.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest()
    : SesRequest(new ListIdentityPoliciesRequestPrivate(SesRequest::ListIdentityPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentityPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIdentityPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListIdentityPoliciesRequestPrivate
 * \brief The ListIdentityPoliciesRequestPrivate class provides private implementation for ListIdentityPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListIdentityPoliciesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const SesRequest::Action action, ListIdentityPoliciesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityPoliciesRequest
 * class' copy constructor.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const ListIdentityPoliciesRequestPrivate &other, ListIdentityPoliciesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

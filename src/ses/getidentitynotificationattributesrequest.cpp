// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitynotificationattributesrequest.h"
#include "getidentitynotificationattributesrequest_p.h"
#include "getidentitynotificationattributesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityNotificationAttributesRequest
 * \brief The GetIdentityNotificationAttributesRequest class provides an interface for Ses GetIdentityNotificationAttributes requests.
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
 * \sa SesClient::getIdentityNotificationAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest(const GetIdentityNotificationAttributesRequest &other)
    : SesRequest(new GetIdentityNotificationAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityNotificationAttributesRequest object.
 */
GetIdentityNotificationAttributesRequest::GetIdentityNotificationAttributesRequest()
    : SesRequest(new GetIdentityNotificationAttributesRequestPrivate(SesRequest::GetIdentityNotificationAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityNotificationAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityNotificationAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityNotificationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityNotificationAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetIdentityNotificationAttributesRequestPrivate
 * \brief The GetIdentityNotificationAttributesRequestPrivate class provides private implementation for GetIdentityNotificationAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityNotificationAttributesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const SesRequest::Action action, GetIdentityNotificationAttributesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityNotificationAttributesRequest
 * class' copy constructor.
 */
GetIdentityNotificationAttributesRequestPrivate::GetIdentityNotificationAttributesRequestPrivate(
    const GetIdentityNotificationAttributesRequestPrivate &other, GetIdentityNotificationAttributesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

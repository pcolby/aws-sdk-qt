// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitydkimattributesrequest.h"
#include "getidentitydkimattributesrequest_p.h"
#include "getidentitydkimattributesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityDkimAttributesRequest
 * \brief The GetIdentityDkimAttributesRequest class provides an interface for Ses GetIdentityDkimAttributes requests.
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
 * \sa SesClient::getIdentityDkimAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityDkimAttributesRequest::GetIdentityDkimAttributesRequest(const GetIdentityDkimAttributesRequest &other)
    : SesRequest(new GetIdentityDkimAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityDkimAttributesRequest object.
 */
GetIdentityDkimAttributesRequest::GetIdentityDkimAttributesRequest()
    : SesRequest(new GetIdentityDkimAttributesRequestPrivate(SesRequest::GetIdentityDkimAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityDkimAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityDkimAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityDkimAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityDkimAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetIdentityDkimAttributesRequestPrivate
 * \brief The GetIdentityDkimAttributesRequestPrivate class provides private implementation for GetIdentityDkimAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityDkimAttributesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityDkimAttributesRequestPrivate::GetIdentityDkimAttributesRequestPrivate(
    const SesRequest::Action action, GetIdentityDkimAttributesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityDkimAttributesRequest
 * class' copy constructor.
 */
GetIdentityDkimAttributesRequestPrivate::GetIdentityDkimAttributesRequestPrivate(
    const GetIdentityDkimAttributesRequestPrivate &other, GetIdentityDkimAttributesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

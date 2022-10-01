// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentitiesrequest.h"
#include "listidentitiesrequest_p.h"
#include "listidentitiesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListIdentitiesRequest
 * \brief The ListIdentitiesRequest class provides an interface for Ses ListIdentities requests.
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
 * \sa SesClient::listIdentities
 */

/*!
 * Constructs a copy of \a other.
 */
ListIdentitiesRequest::ListIdentitiesRequest(const ListIdentitiesRequest &other)
    : SesRequest(new ListIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIdentitiesRequest object.
 */
ListIdentitiesRequest::ListIdentitiesRequest()
    : SesRequest(new ListIdentitiesRequestPrivate(SesRequest::ListIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIdentitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListIdentitiesRequestPrivate
 * \brief The ListIdentitiesRequestPrivate class provides private implementation for ListIdentitiesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListIdentitiesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListIdentitiesRequestPrivate::ListIdentitiesRequestPrivate(
    const SesRequest::Action action, ListIdentitiesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIdentitiesRequest
 * class' copy constructor.
 */
ListIdentitiesRequestPrivate::ListIdentitiesRequestPrivate(
    const ListIdentitiesRequestPrivate &other, ListIdentitiesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

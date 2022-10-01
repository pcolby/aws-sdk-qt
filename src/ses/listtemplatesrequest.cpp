// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatesrequest.h"
#include "listtemplatesrequest_p.h"
#include "listtemplatesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListTemplatesRequest
 * \brief The ListTemplatesRequest class provides an interface for Ses ListTemplates requests.
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
 * \sa SesClient::listTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplatesRequest::ListTemplatesRequest(const ListTemplatesRequest &other)
    : SesRequest(new ListTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplatesRequest object.
 */
ListTemplatesRequest::ListTemplatesRequest()
    : SesRequest(new ListTemplatesRequestPrivate(SesRequest::ListTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListTemplatesRequestPrivate
 * \brief The ListTemplatesRequestPrivate class provides private implementation for ListTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListTemplatesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const SesRequest::Action action, ListTemplatesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplatesRequest
 * class' copy constructor.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const ListTemplatesRequestPrivate &other, ListTemplatesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

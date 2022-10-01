// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustomverificationemailtemplatesrequest.h"
#include "listcustomverificationemailtemplatesrequest_p.h"
#include "listcustomverificationemailtemplatesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListCustomVerificationEmailTemplatesRequest
 * \brief The ListCustomVerificationEmailTemplatesRequest class provides an interface for Ses ListCustomVerificationEmailTemplates requests.
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
 * \sa SesClient::listCustomVerificationEmailTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest(const ListCustomVerificationEmailTemplatesRequest &other)
    : SesRequest(new ListCustomVerificationEmailTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCustomVerificationEmailTemplatesRequest object.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest()
    : SesRequest(new ListCustomVerificationEmailTemplatesRequestPrivate(SesRequest::ListCustomVerificationEmailTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomVerificationEmailTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCustomVerificationEmailTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomVerificationEmailTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomVerificationEmailTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListCustomVerificationEmailTemplatesRequestPrivate
 * \brief The ListCustomVerificationEmailTemplatesRequestPrivate class provides private implementation for ListCustomVerificationEmailTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const SesRequest::Action action, ListCustomVerificationEmailTemplatesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCustomVerificationEmailTemplatesRequest
 * class' copy constructor.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const ListCustomVerificationEmailTemplatesRequestPrivate &other, ListCustomVerificationEmailTemplatesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws

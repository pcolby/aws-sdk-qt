// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomaindeliverabilitycampaignsrequest.h"
#include "listdomaindeliverabilitycampaignsrequest_p.h"
#include "listdomaindeliverabilitycampaignsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListDomainDeliverabilityCampaignsRequest
 * \brief The ListDomainDeliverabilityCampaignsRequest class provides an interface for SESv2 ListDomainDeliverabilityCampaigns requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listDomainDeliverabilityCampaigns
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainDeliverabilityCampaignsRequest::ListDomainDeliverabilityCampaignsRequest(const ListDomainDeliverabilityCampaignsRequest &other)
    : SESv2Request(new ListDomainDeliverabilityCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainDeliverabilityCampaignsRequest object.
 */
ListDomainDeliverabilityCampaignsRequest::ListDomainDeliverabilityCampaignsRequest()
    : SESv2Request(new ListDomainDeliverabilityCampaignsRequestPrivate(SESv2Request::ListDomainDeliverabilityCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainDeliverabilityCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainDeliverabilityCampaignsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainDeliverabilityCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainDeliverabilityCampaignsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListDomainDeliverabilityCampaignsRequestPrivate
 * \brief The ListDomainDeliverabilityCampaignsRequestPrivate class provides private implementation for ListDomainDeliverabilityCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListDomainDeliverabilityCampaignsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListDomainDeliverabilityCampaignsRequestPrivate::ListDomainDeliverabilityCampaignsRequestPrivate(
    const SESv2Request::Action action, ListDomainDeliverabilityCampaignsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainDeliverabilityCampaignsRequest
 * class' copy constructor.
 */
ListDomainDeliverabilityCampaignsRequestPrivate::ListDomainDeliverabilityCampaignsRequestPrivate(
    const ListDomainDeliverabilityCampaignsRequestPrivate &other, ListDomainDeliverabilityCampaignsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

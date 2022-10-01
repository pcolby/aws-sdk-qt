// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomaindeliverabilitycampaignrequest.h"
#include "getdomaindeliverabilitycampaignrequest_p.h"
#include "getdomaindeliverabilitycampaignresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDomainDeliverabilityCampaignRequest
 * \brief The GetDomainDeliverabilityCampaignRequest class provides an interface for SESv2 GetDomainDeliverabilityCampaign requests.
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
 * \sa SESv2Client::getDomainDeliverabilityCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainDeliverabilityCampaignRequest::GetDomainDeliverabilityCampaignRequest(const GetDomainDeliverabilityCampaignRequest &other)
    : SESv2Request(new GetDomainDeliverabilityCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainDeliverabilityCampaignRequest object.
 */
GetDomainDeliverabilityCampaignRequest::GetDomainDeliverabilityCampaignRequest()
    : SESv2Request(new GetDomainDeliverabilityCampaignRequestPrivate(SESv2Request::GetDomainDeliverabilityCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainDeliverabilityCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainDeliverabilityCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainDeliverabilityCampaignRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainDeliverabilityCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDomainDeliverabilityCampaignRequestPrivate
 * \brief The GetDomainDeliverabilityCampaignRequestPrivate class provides private implementation for GetDomainDeliverabilityCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDomainDeliverabilityCampaignRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDomainDeliverabilityCampaignRequestPrivate::GetDomainDeliverabilityCampaignRequestPrivate(
    const SESv2Request::Action action, GetDomainDeliverabilityCampaignRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainDeliverabilityCampaignRequest
 * class' copy constructor.
 */
GetDomainDeliverabilityCampaignRequestPrivate::GetDomainDeliverabilityCampaignRequestPrivate(
    const GetDomainDeliverabilityCampaignRequestPrivate &other, GetDomainDeliverabilityCampaignRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

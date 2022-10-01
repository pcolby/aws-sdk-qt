// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeliverabilitydashboardoptionsrequest.h"
#include "getdeliverabilitydashboardoptionsrequest_p.h"
#include "getdeliverabilitydashboardoptionsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDeliverabilityDashboardOptionsRequest
 * \brief The GetDeliverabilityDashboardOptionsRequest class provides an interface for SESv2 GetDeliverabilityDashboardOptions requests.
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
 * \sa SESv2Client::getDeliverabilityDashboardOptions
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeliverabilityDashboardOptionsRequest::GetDeliverabilityDashboardOptionsRequest(const GetDeliverabilityDashboardOptionsRequest &other)
    : SESv2Request(new GetDeliverabilityDashboardOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeliverabilityDashboardOptionsRequest object.
 */
GetDeliverabilityDashboardOptionsRequest::GetDeliverabilityDashboardOptionsRequest()
    : SESv2Request(new GetDeliverabilityDashboardOptionsRequestPrivate(SESv2Request::GetDeliverabilityDashboardOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeliverabilityDashboardOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeliverabilityDashboardOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeliverabilityDashboardOptionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDeliverabilityDashboardOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDeliverabilityDashboardOptionsRequestPrivate
 * \brief The GetDeliverabilityDashboardOptionsRequestPrivate class provides private implementation for GetDeliverabilityDashboardOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDeliverabilityDashboardOptionsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDeliverabilityDashboardOptionsRequestPrivate::GetDeliverabilityDashboardOptionsRequestPrivate(
    const SESv2Request::Action action, GetDeliverabilityDashboardOptionsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeliverabilityDashboardOptionsRequest
 * class' copy constructor.
 */
GetDeliverabilityDashboardOptionsRequestPrivate::GetDeliverabilityDashboardOptionsRequestPrivate(
    const GetDeliverabilityDashboardOptionsRequestPrivate &other, GetDeliverabilityDashboardOptionsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

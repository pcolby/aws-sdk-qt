// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeliverabilitytestreportrequest.h"
#include "getdeliverabilitytestreportrequest_p.h"
#include "getdeliverabilitytestreportresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDeliverabilityTestReportRequest
 * \brief The GetDeliverabilityTestReportRequest class provides an interface for SESv2 GetDeliverabilityTestReport requests.
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
 * \sa SESv2Client::getDeliverabilityTestReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeliverabilityTestReportRequest::GetDeliverabilityTestReportRequest(const GetDeliverabilityTestReportRequest &other)
    : SESv2Request(new GetDeliverabilityTestReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeliverabilityTestReportRequest object.
 */
GetDeliverabilityTestReportRequest::GetDeliverabilityTestReportRequest()
    : SESv2Request(new GetDeliverabilityTestReportRequestPrivate(SESv2Request::GetDeliverabilityTestReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeliverabilityTestReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeliverabilityTestReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeliverabilityTestReportRequest::response(QNetworkReply * const reply) const
{
    return new GetDeliverabilityTestReportResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDeliverabilityTestReportRequestPrivate
 * \brief The GetDeliverabilityTestReportRequestPrivate class provides private implementation for GetDeliverabilityTestReportRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDeliverabilityTestReportRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDeliverabilityTestReportRequestPrivate::GetDeliverabilityTestReportRequestPrivate(
    const SESv2Request::Action action, GetDeliverabilityTestReportRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeliverabilityTestReportRequest
 * class' copy constructor.
 */
GetDeliverabilityTestReportRequestPrivate::GetDeliverabilityTestReportRequestPrivate(
    const GetDeliverabilityTestReportRequestPrivate &other, GetDeliverabilityTestReportRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

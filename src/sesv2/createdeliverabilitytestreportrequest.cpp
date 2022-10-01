// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeliverabilitytestreportrequest.h"
#include "createdeliverabilitytestreportrequest_p.h"
#include "createdeliverabilitytestreportresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateDeliverabilityTestReportRequest
 * \brief The CreateDeliverabilityTestReportRequest class provides an interface for SESv2 CreateDeliverabilityTestReport requests.
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
 * \sa SESv2Client::createDeliverabilityTestReport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeliverabilityTestReportRequest::CreateDeliverabilityTestReportRequest(const CreateDeliverabilityTestReportRequest &other)
    : SESv2Request(new CreateDeliverabilityTestReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeliverabilityTestReportRequest object.
 */
CreateDeliverabilityTestReportRequest::CreateDeliverabilityTestReportRequest()
    : SESv2Request(new CreateDeliverabilityTestReportRequestPrivate(SESv2Request::CreateDeliverabilityTestReportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeliverabilityTestReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeliverabilityTestReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeliverabilityTestReportRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeliverabilityTestReportResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::CreateDeliverabilityTestReportRequestPrivate
 * \brief The CreateDeliverabilityTestReportRequestPrivate class provides private implementation for CreateDeliverabilityTestReportRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateDeliverabilityTestReportRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
CreateDeliverabilityTestReportRequestPrivate::CreateDeliverabilityTestReportRequestPrivate(
    const SESv2Request::Action action, CreateDeliverabilityTestReportRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeliverabilityTestReportRequest
 * class' copy constructor.
 */
CreateDeliverabilityTestReportRequestPrivate::CreateDeliverabilityTestReportRequestPrivate(
    const CreateDeliverabilityTestReportRequestPrivate &other, CreateDeliverabilityTestReportRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

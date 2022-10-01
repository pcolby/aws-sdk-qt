// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainstatisticsreportrequest.h"
#include "getdomainstatisticsreportrequest_p.h"
#include "getdomainstatisticsreportresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDomainStatisticsReportRequest
 * \brief The GetDomainStatisticsReportRequest class provides an interface for SESv2 GetDomainStatisticsReport requests.
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
 * \sa SESv2Client::getDomainStatisticsReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainStatisticsReportRequest::GetDomainStatisticsReportRequest(const GetDomainStatisticsReportRequest &other)
    : SESv2Request(new GetDomainStatisticsReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainStatisticsReportRequest object.
 */
GetDomainStatisticsReportRequest::GetDomainStatisticsReportRequest()
    : SESv2Request(new GetDomainStatisticsReportRequestPrivate(SESv2Request::GetDomainStatisticsReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainStatisticsReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainStatisticsReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainStatisticsReportRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainStatisticsReportResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDomainStatisticsReportRequestPrivate
 * \brief The GetDomainStatisticsReportRequestPrivate class provides private implementation for GetDomainStatisticsReportRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDomainStatisticsReportRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDomainStatisticsReportRequestPrivate::GetDomainStatisticsReportRequestPrivate(
    const SESv2Request::Action action, GetDomainStatisticsReportRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainStatisticsReportRequest
 * class' copy constructor.
 */
GetDomainStatisticsReportRequestPrivate::GetDomainStatisticsReportRequestPrivate(
    const GetDomainStatisticsReportRequestPrivate &other, GetDomainStatisticsReportRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws

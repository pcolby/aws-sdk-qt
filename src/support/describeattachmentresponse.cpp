// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeattachmentresponse.h"
#include "describeattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::DescribeAttachmentResponse
 * \brief The DescribeAttachmentResponse class provides an interace for Support DescribeAttachment responses.
 *
 * \inmodule QtAwsSupport
 *
 *  <fullname>Amazon Web Services Support</fullname>
 * 
 *  The <i>Amazon Web Services Support API Reference</i> is intended for programmers who need detailed information about the
 *  Amazon Web Services Support operations and data types. You can use the API to manage your support cases
 *  programmatically. The Amazon Web Services Support API uses HTTP methods that return results in JSON
 * 
 *  format> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web Services Support API.
 * 
 *  </p </li> <li>
 * 
 *  If you call the Amazon Web Services Support API from an account that does not have a Business, Enterprise On-Ramp, or
 *  Enterprise Support plan, the <code>SubscriptionRequiredException</code> error message appears. For information about
 *  changing your support plan, see <a href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
 * 
 *  Support</a>> </li> </ul> </note>
 * 
 *  The Amazon Web Services Support service also exposes a set of <a
 *  href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted Advisor</a> features. You can retrieve a list of
 *  checks and their descriptions, get check results, specify checks to refresh, and get the refresh status of
 * 
 *  checks>
 * 
 *  The following list describes the Amazon Web Services Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  Service names, issue categories, and available severity levels - The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return Amazon Web Services service names, service codes, service categories,
 *  and problem severity levels. You use these values when you call the <a>CreateCase</a>
 * 
 *  operation> </li> <li>
 * 
 *  Case creation, case details, and case resolution - The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create Amazon Web Services Support cases, retrieve
 *  information about cases, and resolve
 * 
 *  cases> </li> <li>
 * 
 *  Case communication - The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and <a>AddAttachmentsToSet</a>
 *  operations retrieve and add communications and attachments to Amazon Web Services Support
 * 
 *  cases> </li> </ul>
 * 
 *  The following list describes the operations available from the Amazon Web Services Support service for Trusted
 * 
 *  Advisor> <ul> <li>
 * 
 *  <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your Amazon Web Services
 * 
 *  resources> </li> <li>
 * 
 *  Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check that you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified
 * 
 *  check> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more
 * 
 *  checks> </li> </ul>
 * 
 *  For authentication of requests, Amazon Web Services Support uses <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the Amazon Web Services Support
 *  API</a> in the <i>Amazon Web Services Support User Guide</i> for information about how to use this service to create and
 *  manage your support cases, and how to call Trusted Advisor for results of checks on your
 *
 * \sa SupportClient::describeAttachment
 */

/*!
 * Constructs a DescribeAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAttachmentResponse::DescribeAttachmentResponse(
        const DescribeAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeAttachmentResponsePrivate(this), parent)
{
    setRequest(new DescribeAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAttachmentRequest * DescribeAttachmentResponse::request() const
{
    Q_D(const DescribeAttachmentResponse);
    return static_cast<const DescribeAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Support DescribeAttachment \a response.
 */
void DescribeAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Support::DescribeAttachmentResponsePrivate
 * \brief The DescribeAttachmentResponsePrivate class provides private implementation for DescribeAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a DescribeAttachmentResponsePrivate object with public implementation \a q.
 */
DescribeAttachmentResponsePrivate::DescribeAttachmentResponsePrivate(
    DescribeAttachmentResponse * const q) : SupportResponsePrivate(q)
{

}

/*!
 * Parses a Support DescribeAttachment response element from \a xml.
 */
void DescribeAttachmentResponsePrivate::parseDescribeAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Support
} // namespace QtAws

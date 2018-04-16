/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resolvecaseresponse.h"
#include "resolvecaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::ResolveCaseResponse
 *
 * \brief The ResolveCaseResponse class encapsulates Support ResolveCase responses.
 *
 * \ingroup Support
 *
 *  <fullname>AWS Support</fullname>
 * 
 *  The AWS Support API reference is intended for programmers who need detailed information about the AWS Support operations
 *  and data types. This service enables you to manage your AWS Support cases programmatically. It uses HTTP methods that
 *  return results in JSON
 * 
 *  format>
 * 
 *  The AWS Support service also exposes a set of <a href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted
 *  Advisor</a> features. You can retrieve a list of checks and their descriptions, get check results, specify checks to
 *  refresh, and get the refresh status of checks.
 * 
 *  </p
 * 
 *  The following list describes the AWS Support case management
 * 
 *  operations> <ul> <li>
 * 
 *  <b>Service names, issue categories, and available severity levels. </b>The <a>DescribeServices</a> and
 *  <a>DescribeSeverityLevels</a> operations return AWS service names, service codes, service categories, and problem
 *  severity levels. You use these values when you call the <a>CreateCase</a> operation.
 * 
 *  </p </li> <li>
 * 
 *  <b>Case creation, case details, and case resolution.</b> The <a>CreateCase</a>, <a>DescribeCases</a>,
 *  <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create AWS Support cases, retrieve information about cases,
 *  and resolve
 * 
 *  cases> </li> <li>
 * 
 *  <b>Case communication.</b> The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and
 *  <a>AddAttachmentsToSet</a> operations retrieve and add communications and attachments to AWS Support cases.
 * 
 *  </p </li> </ul>
 * 
 *  The following list describes the operations available from the AWS Support service for Trusted
 * 
 *  Advisor> <ul> <li>
 * 
 *  <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run against your AWS
 * 
 *  resources> </li> <li>
 * 
 *  Using the <code>checkId</code> for a specific check returned by <a>DescribeTrustedAdvisorChecks</a>, you can call
 *  <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check you
 * 
 *  specified> </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one or more Trusted Advisor
 * 
 *  checks> </li> <li>
 * 
 *  <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a specified check.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of one or more checks.
 * 
 *  </p </li> </ul>
 * 
 *  For authentication of requests, AWS Support uses <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See <a href="http://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the AWS Support API</a> in the <i>AWS
 *  Support User Guide</i> for information about how to use this service to create and manage your support cases, and how to
 *  call Trusted Advisor for results of checks on your resources.
 *
 * \sa SupportClient::resolveCase
 */

/*!
 * @brief  Constructs a new ResolveCaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveCaseResponse::ResolveCaseResponse(
        const ResolveCaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new ResolveCaseResponsePrivate(this), parent)
{
    setRequest(new ResolveCaseRequest(request));
    setReply(reply);
}

const ResolveCaseRequest * ResolveCaseResponse::request() const
{
    Q_D(const ResolveCaseResponse);
    return static_cast<const ResolveCaseRequest *>(d->request);
}

/*!
 * @brief  Parse a Support ResolveCase response.
 *
 * @param  response  Response to parse.
 */
void ResolveCaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResolveCaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ResolveCaseResponsePrivate
 *
 * \brief Private implementation for ResolveCaseResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ResolveCaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResolveCaseResponse instance.
 */
ResolveCaseResponsePrivate::ResolveCaseResponsePrivate(
    ResolveCaseResponse * const q) : SupportResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Support ResolveCaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResolveCaseResponsePrivate::parseResolveCaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveCaseResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws

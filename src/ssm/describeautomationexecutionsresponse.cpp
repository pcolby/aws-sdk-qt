/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeautomationexecutionsresponse.h"
#include "describeautomationexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeAutomationExecutionsResponse
 * \brief The DescribeAutomationExecutionsResponse class provides an interace for Ssm DescribeAutomationExecutions responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::describeAutomationExecutions
 */

/*!
 * Constructs a DescribeAutomationExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutomationExecutionsResponse::DescribeAutomationExecutionsResponse(
        const DescribeAutomationExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DescribeAutomationExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutomationExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutomationExecutionsRequest * DescribeAutomationExecutionsResponse::request() const
{
    Q_D(const DescribeAutomationExecutionsResponse);
    return static_cast<const DescribeAutomationExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm DescribeAutomationExecutions \a response.
 */
void DescribeAutomationExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutomationExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::DescribeAutomationExecutionsResponsePrivate
 * \brief The DescribeAutomationExecutionsResponsePrivate class provides private implementation for DescribeAutomationExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeAutomationExecutionsResponsePrivate object with public implementation \a q.
 */
DescribeAutomationExecutionsResponsePrivate::DescribeAutomationExecutionsResponsePrivate(
    DescribeAutomationExecutionsResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm DescribeAutomationExecutions response element from \a xml.
 */
void DescribeAutomationExecutionsResponsePrivate::parseDescribeAutomationExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutomationExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws

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

#include "describecustomdomainsresponse.h"
#include "describecustomdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::DescribeCustomDomainsResponse
 * \brief The DescribeCustomDomainsResponse class provides an interace for AppRunner DescribeCustomDomains responses.
 *
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
 *
 * \sa AppRunnerClient::describeCustomDomains
 */

/*!
 * Constructs a DescribeCustomDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCustomDomainsResponse::DescribeCustomDomainsResponse(
        const DescribeCustomDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRunnerResponse(new DescribeCustomDomainsResponsePrivate(this), parent)
{
    setRequest(new DescribeCustomDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCustomDomainsRequest * DescribeCustomDomainsResponse::request() const
{
    Q_D(const DescribeCustomDomainsResponse);
    return static_cast<const DescribeCustomDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRunner DescribeCustomDomains \a response.
 */
void DescribeCustomDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCustomDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRunner::DescribeCustomDomainsResponsePrivate
 * \brief The DescribeCustomDomainsResponsePrivate class provides private implementation for DescribeCustomDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a DescribeCustomDomainsResponsePrivate object with public implementation \a q.
 */
DescribeCustomDomainsResponsePrivate::DescribeCustomDomainsResponsePrivate(
    DescribeCustomDomainsResponse * const q) : AppRunnerResponsePrivate(q)
{

}

/*!
 * Parses a AppRunner DescribeCustomDomains response element from \a xml.
 */
void DescribeCustomDomainsResponsePrivate::parseDescribeCustomDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCustomDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRunner
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetestcasesresponse.h"
#include "describetestcasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DescribeTestCasesResponse
 * \brief The DescribeTestCasesResponse class provides an interace for CodeBuild DescribeTestCases responses.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>CodeBuild</fullname>
 * 
 *  CodeBuild is a fully managed build service in the cloud. CodeBuild compiles your source code, runs unit tests, and
 *  produces artifacts that are ready to deploy. CodeBuild eliminates the need to provision, manage, and scale your own
 *  build servers. It provides prepackaged build environments for the most popular programming languages and build tools,
 *  such as Apache Maven, Gradle, and more. You can also fully customize build environments in CodeBuild to use your own
 *  build tools. CodeBuild scales automatically to meet peak build requests. You pay only for the build time you consume.
 *  For more information about CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::describeTestCases
 */

/*!
 * Constructs a DescribeTestCasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTestCasesResponse::DescribeTestCasesResponse(
        const DescribeTestCasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DescribeTestCasesResponsePrivate(this), parent)
{
    setRequest(new DescribeTestCasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTestCasesRequest * DescribeTestCasesResponse::request() const
{
    Q_D(const DescribeTestCasesResponse);
    return static_cast<const DescribeTestCasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild DescribeTestCases \a response.
 */
void DescribeTestCasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTestCasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::DescribeTestCasesResponsePrivate
 * \brief The DescribeTestCasesResponsePrivate class provides private implementation for DescribeTestCasesResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DescribeTestCasesResponsePrivate object with public implementation \a q.
 */
DescribeTestCasesResponsePrivate::DescribeTestCasesResponsePrivate(
    DescribeTestCasesResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild DescribeTestCases response element from \a xml.
 */
void DescribeTestCasesResponsePrivate::parseDescribeTestCasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTestCasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

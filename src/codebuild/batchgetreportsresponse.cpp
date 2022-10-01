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

#include "batchgetreportsresponse.h"
#include "batchgetreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetReportsResponse
 * \brief The BatchGetReportsResponse class provides an interace for CodeBuild BatchGetReports responses.
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
 * \sa CodeBuildClient::batchGetReports
 */

/*!
 * Constructs a BatchGetReportsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetReportsResponse::BatchGetReportsResponse(
        const BatchGetReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new BatchGetReportsResponsePrivate(this), parent)
{
    setRequest(new BatchGetReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetReportsRequest * BatchGetReportsResponse::request() const
{
    Q_D(const BatchGetReportsResponse);
    return static_cast<const BatchGetReportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild BatchGetReports \a response.
 */
void BatchGetReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::BatchGetReportsResponsePrivate
 * \brief The BatchGetReportsResponsePrivate class provides private implementation for BatchGetReportsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetReportsResponsePrivate object with public implementation \a q.
 */
BatchGetReportsResponsePrivate::BatchGetReportsResponsePrivate(
    BatchGetReportsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild BatchGetReports response element from \a xml.
 */
void BatchGetReportsResponsePrivate::parseBatchGetReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

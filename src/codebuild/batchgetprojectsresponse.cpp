// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetprojectsresponse.h"
#include "batchgetprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetProjectsResponse
 * \brief The BatchGetProjectsResponse class provides an interace for CodeBuild BatchGetProjects responses.
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
 * \sa CodeBuildClient::batchGetProjects
 */

/*!
 * Constructs a BatchGetProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetProjectsResponse::BatchGetProjectsResponse(
        const BatchGetProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new BatchGetProjectsResponsePrivate(this), parent)
{
    setRequest(new BatchGetProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetProjectsRequest * BatchGetProjectsResponse::request() const
{
    Q_D(const BatchGetProjectsResponse);
    return static_cast<const BatchGetProjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild BatchGetProjects \a response.
 */
void BatchGetProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::BatchGetProjectsResponsePrivate
 * \brief The BatchGetProjectsResponsePrivate class provides private implementation for BatchGetProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetProjectsResponsePrivate object with public implementation \a q.
 */
BatchGetProjectsResponsePrivate::BatchGetProjectsResponsePrivate(
    BatchGetProjectsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild BatchGetProjects response element from \a xml.
 */
void BatchGetProjectsResponsePrivate::parseBatchGetProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

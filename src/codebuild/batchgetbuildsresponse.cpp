// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetbuildsresponse.h"
#include "batchgetbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsResponse
 * \brief The BatchGetBuildsResponse class provides an interace for CodeBuild BatchGetBuilds responses.
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
 * \sa CodeBuildClient::batchGetBuilds
 */

/*!
 * Constructs a BatchGetBuildsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetBuildsResponse::BatchGetBuildsResponse(
        const BatchGetBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new BatchGetBuildsResponsePrivate(this), parent)
{
    setRequest(new BatchGetBuildsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetBuildsRequest * BatchGetBuildsResponse::request() const
{
    Q_D(const BatchGetBuildsResponse);
    return static_cast<const BatchGetBuildsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild BatchGetBuilds \a response.
 */
void BatchGetBuildsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsResponsePrivate
 * \brief The BatchGetBuildsResponsePrivate class provides private implementation for BatchGetBuildsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildsResponsePrivate object with public implementation \a q.
 */
BatchGetBuildsResponsePrivate::BatchGetBuildsResponsePrivate(
    BatchGetBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild BatchGetBuilds response element from \a xml.
 */
void BatchGetBuildsResponsePrivate::parseBatchGetBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBuildsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

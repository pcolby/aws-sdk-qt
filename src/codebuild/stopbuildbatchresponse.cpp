// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbuildbatchresponse.h"
#include "stopbuildbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StopBuildBatchResponse
 * \brief The StopBuildBatchResponse class provides an interace for CodeBuild StopBuildBatch responses.
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
 * \sa CodeBuildClient::stopBuildBatch
 */

/*!
 * Constructs a StopBuildBatchResponse object for \a reply to \a request, with parent \a parent.
 */
StopBuildBatchResponse::StopBuildBatchResponse(
        const StopBuildBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StopBuildBatchResponsePrivate(this), parent)
{
    setRequest(new StopBuildBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBuildBatchRequest * StopBuildBatchResponse::request() const
{
    Q_D(const StopBuildBatchResponse);
    return static_cast<const StopBuildBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild StopBuildBatch \a response.
 */
void StopBuildBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBuildBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::StopBuildBatchResponsePrivate
 * \brief The StopBuildBatchResponsePrivate class provides private implementation for StopBuildBatchResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StopBuildBatchResponsePrivate object with public implementation \a q.
 */
StopBuildBatchResponsePrivate::StopBuildBatchResponsePrivate(
    StopBuildBatchResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild StopBuildBatch response element from \a xml.
 */
void StopBuildBatchResponsePrivate::parseStopBuildBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBuildBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

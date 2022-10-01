// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbuildbatchresponse.h"
#include "startbuildbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StartBuildBatchResponse
 * \brief The StartBuildBatchResponse class provides an interace for CodeBuild StartBuildBatch responses.
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
 * \sa CodeBuildClient::startBuildBatch
 */

/*!
 * Constructs a StartBuildBatchResponse object for \a reply to \a request, with parent \a parent.
 */
StartBuildBatchResponse::StartBuildBatchResponse(
        const StartBuildBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StartBuildBatchResponsePrivate(this), parent)
{
    setRequest(new StartBuildBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBuildBatchRequest * StartBuildBatchResponse::request() const
{
    Q_D(const StartBuildBatchResponse);
    return static_cast<const StartBuildBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild StartBuildBatch \a response.
 */
void StartBuildBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBuildBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::StartBuildBatchResponsePrivate
 * \brief The StartBuildBatchResponsePrivate class provides private implementation for StartBuildBatchResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StartBuildBatchResponsePrivate object with public implementation \a q.
 */
StartBuildBatchResponsePrivate::StartBuildBatchResponsePrivate(
    StartBuildBatchResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild StartBuildBatch response element from \a xml.
 */
void StartBuildBatchResponsePrivate::parseStartBuildBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBuildBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

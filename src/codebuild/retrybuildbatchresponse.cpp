// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrybuildbatchresponse.h"
#include "retrybuildbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::RetryBuildBatchResponse
 * \brief The RetryBuildBatchResponse class provides an interace for CodeBuild RetryBuildBatch responses.
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
 * \sa CodeBuildClient::retryBuildBatch
 */

/*!
 * Constructs a RetryBuildBatchResponse object for \a reply to \a request, with parent \a parent.
 */
RetryBuildBatchResponse::RetryBuildBatchResponse(
        const RetryBuildBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new RetryBuildBatchResponsePrivate(this), parent)
{
    setRequest(new RetryBuildBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetryBuildBatchRequest * RetryBuildBatchResponse::request() const
{
    Q_D(const RetryBuildBatchResponse);
    return static_cast<const RetryBuildBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild RetryBuildBatch \a response.
 */
void RetryBuildBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetryBuildBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::RetryBuildBatchResponsePrivate
 * \brief The RetryBuildBatchResponsePrivate class provides private implementation for RetryBuildBatchResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a RetryBuildBatchResponsePrivate object with public implementation \a q.
 */
RetryBuildBatchResponsePrivate::RetryBuildBatchResponsePrivate(
    RetryBuildBatchResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild RetryBuildBatch response element from \a xml.
 */
void RetryBuildBatchResponsePrivate::parseRetryBuildBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryBuildBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

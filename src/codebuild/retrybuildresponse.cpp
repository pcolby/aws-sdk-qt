// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrybuildresponse.h"
#include "retrybuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::RetryBuildResponse
 * \brief The RetryBuildResponse class provides an interace for CodeBuild RetryBuild responses.
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
 * \sa CodeBuildClient::retryBuild
 */

/*!
 * Constructs a RetryBuildResponse object for \a reply to \a request, with parent \a parent.
 */
RetryBuildResponse::RetryBuildResponse(
        const RetryBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new RetryBuildResponsePrivate(this), parent)
{
    setRequest(new RetryBuildRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetryBuildRequest * RetryBuildResponse::request() const
{
    Q_D(const RetryBuildResponse);
    return static_cast<const RetryBuildRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild RetryBuild \a response.
 */
void RetryBuildResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetryBuildResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::RetryBuildResponsePrivate
 * \brief The RetryBuildResponsePrivate class provides private implementation for RetryBuildResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a RetryBuildResponsePrivate object with public implementation \a q.
 */
RetryBuildResponsePrivate::RetryBuildResponsePrivate(
    RetryBuildResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild RetryBuild response element from \a xml.
 */
void RetryBuildResponsePrivate::parseRetryBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetryBuildResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

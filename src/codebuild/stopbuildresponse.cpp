// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbuildresponse.h"
#include "stopbuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StopBuildResponse
 * \brief The StopBuildResponse class provides an interace for CodeBuild StopBuild responses.
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
 * \sa CodeBuildClient::stopBuild
 */

/*!
 * Constructs a StopBuildResponse object for \a reply to \a request, with parent \a parent.
 */
StopBuildResponse::StopBuildResponse(
        const StopBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StopBuildResponsePrivate(this), parent)
{
    setRequest(new StopBuildRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBuildRequest * StopBuildResponse::request() const
{
    Q_D(const StopBuildResponse);
    return static_cast<const StopBuildRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild StopBuild \a response.
 */
void StopBuildResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBuildResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::StopBuildResponsePrivate
 * \brief The StopBuildResponsePrivate class provides private implementation for StopBuildResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StopBuildResponsePrivate object with public implementation \a q.
 */
StopBuildResponsePrivate::StopBuildResponsePrivate(
    StopBuildResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild StopBuild response element from \a xml.
 */
void StopBuildResponsePrivate::parseStopBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBuildResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

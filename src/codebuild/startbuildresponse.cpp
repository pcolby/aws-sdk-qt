// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbuildresponse.h"
#include "startbuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StartBuildResponse
 * \brief The StartBuildResponse class provides an interace for CodeBuild StartBuild responses.
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
 * \sa CodeBuildClient::startBuild
 */

/*!
 * Constructs a StartBuildResponse object for \a reply to \a request, with parent \a parent.
 */
StartBuildResponse::StartBuildResponse(
        const StartBuildRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new StartBuildResponsePrivate(this), parent)
{
    setRequest(new StartBuildRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBuildRequest * StartBuildResponse::request() const
{
    Q_D(const StartBuildResponse);
    return static_cast<const StartBuildRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild StartBuild \a response.
 */
void StartBuildResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBuildResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::StartBuildResponsePrivate
 * \brief The StartBuildResponsePrivate class provides private implementation for StartBuildResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StartBuildResponsePrivate object with public implementation \a q.
 */
StartBuildResponsePrivate::StartBuildResponsePrivate(
    StartBuildResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild StartBuild response element from \a xml.
 */
void StartBuildResponsePrivate::parseStartBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBuildResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

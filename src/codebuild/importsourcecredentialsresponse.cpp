// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importsourcecredentialsresponse.h"
#include "importsourcecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ImportSourceCredentialsResponse
 * \brief The ImportSourceCredentialsResponse class provides an interace for CodeBuild ImportSourceCredentials responses.
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
 * \sa CodeBuildClient::importSourceCredentials
 */

/*!
 * Constructs a ImportSourceCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
ImportSourceCredentialsResponse::ImportSourceCredentialsResponse(
        const ImportSourceCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ImportSourceCredentialsResponsePrivate(this), parent)
{
    setRequest(new ImportSourceCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportSourceCredentialsRequest * ImportSourceCredentialsResponse::request() const
{
    Q_D(const ImportSourceCredentialsResponse);
    return static_cast<const ImportSourceCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ImportSourceCredentials \a response.
 */
void ImportSourceCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportSourceCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ImportSourceCredentialsResponsePrivate
 * \brief The ImportSourceCredentialsResponsePrivate class provides private implementation for ImportSourceCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ImportSourceCredentialsResponsePrivate object with public implementation \a q.
 */
ImportSourceCredentialsResponsePrivate::ImportSourceCredentialsResponsePrivate(
    ImportSourceCredentialsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ImportSourceCredentials response element from \a xml.
 */
void ImportSourceCredentialsResponsePrivate::parseImportSourceCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportSourceCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

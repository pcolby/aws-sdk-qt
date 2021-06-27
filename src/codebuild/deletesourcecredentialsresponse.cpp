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

#include "deletesourcecredentialsresponse.h"
#include "deletesourcecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteSourceCredentialsResponse
 * \brief The DeleteSourceCredentialsResponse class provides an interace for CodeBuild DeleteSourceCredentials responses.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::deleteSourceCredentials
 */

/*!
 * Constructs a DeleteSourceCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSourceCredentialsResponse::DeleteSourceCredentialsResponse(
        const DeleteSourceCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DeleteSourceCredentialsResponsePrivate(this), parent)
{
    setRequest(new DeleteSourceCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSourceCredentialsRequest * DeleteSourceCredentialsResponse::request() const
{
    return static_cast<const DeleteSourceCredentialsRequest *>(CodeBuildResponse::request());
}

/*!
 * \reimp
 * Parses a successful CodeBuild DeleteSourceCredentials \a response.
 */
void DeleteSourceCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSourceCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::DeleteSourceCredentialsResponsePrivate
 * \brief The DeleteSourceCredentialsResponsePrivate class provides private implementation for DeleteSourceCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteSourceCredentialsResponsePrivate object with public implementation \a q.
 */
DeleteSourceCredentialsResponsePrivate::DeleteSourceCredentialsResponsePrivate(
    DeleteSourceCredentialsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild DeleteSourceCredentials response element from \a xml.
 */
void DeleteSourceCredentialsResponsePrivate::parseDeleteSourceCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSourceCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

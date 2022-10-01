// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportresponse.h"
#include "deletereportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteReportResponse
 * \brief The DeleteReportResponse class provides an interace for CodeBuild DeleteReport responses.
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
 * \sa CodeBuildClient::deleteReport
 */

/*!
 * Constructs a DeleteReportResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReportResponse::DeleteReportResponse(
        const DeleteReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DeleteReportResponsePrivate(this), parent)
{
    setRequest(new DeleteReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReportRequest * DeleteReportResponse::request() const
{
    Q_D(const DeleteReportResponse);
    return static_cast<const DeleteReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild DeleteReport \a response.
 */
void DeleteReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::DeleteReportResponsePrivate
 * \brief The DeleteReportResponsePrivate class provides private implementation for DeleteReportResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteReportResponsePrivate object with public implementation \a q.
 */
DeleteReportResponsePrivate::DeleteReportResponsePrivate(
    DeleteReportResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild DeleteReport response element from \a xml.
 */
void DeleteReportResponsePrivate::parseDeleteReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

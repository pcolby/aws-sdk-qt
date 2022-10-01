// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreportsresponse.h"
#include "listreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListReportsResponse
 * \brief The ListReportsResponse class provides an interace for CodeBuild ListReports responses.
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
 * \sa CodeBuildClient::listReports
 */

/*!
 * Constructs a ListReportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReportsResponse::ListReportsResponse(
        const ListReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListReportsResponsePrivate(this), parent)
{
    setRequest(new ListReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReportsRequest * ListReportsResponse::request() const
{
    Q_D(const ListReportsResponse);
    return static_cast<const ListReportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListReports \a response.
 */
void ListReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListReportsResponsePrivate
 * \brief The ListReportsResponsePrivate class provides private implementation for ListReportsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListReportsResponsePrivate object with public implementation \a q.
 */
ListReportsResponsePrivate::ListReportsResponsePrivate(
    ListReportsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListReports response element from \a xml.
 */
void ListReportsResponsePrivate::parseListReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

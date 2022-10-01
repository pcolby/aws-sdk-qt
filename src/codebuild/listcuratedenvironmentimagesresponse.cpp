// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcuratedenvironmentimagesresponse.h"
#include "listcuratedenvironmentimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListCuratedEnvironmentImagesResponse
 * \brief The ListCuratedEnvironmentImagesResponse class provides an interace for CodeBuild ListCuratedEnvironmentImages responses.
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
 * \sa CodeBuildClient::listCuratedEnvironmentImages
 */

/*!
 * Constructs a ListCuratedEnvironmentImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCuratedEnvironmentImagesResponse::ListCuratedEnvironmentImagesResponse(
        const ListCuratedEnvironmentImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListCuratedEnvironmentImagesResponsePrivate(this), parent)
{
    setRequest(new ListCuratedEnvironmentImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCuratedEnvironmentImagesRequest * ListCuratedEnvironmentImagesResponse::request() const
{
    Q_D(const ListCuratedEnvironmentImagesResponse);
    return static_cast<const ListCuratedEnvironmentImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListCuratedEnvironmentImages \a response.
 */
void ListCuratedEnvironmentImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCuratedEnvironmentImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListCuratedEnvironmentImagesResponsePrivate
 * \brief The ListCuratedEnvironmentImagesResponsePrivate class provides private implementation for ListCuratedEnvironmentImagesResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListCuratedEnvironmentImagesResponsePrivate object with public implementation \a q.
 */
ListCuratedEnvironmentImagesResponsePrivate::ListCuratedEnvironmentImagesResponsePrivate(
    ListCuratedEnvironmentImagesResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListCuratedEnvironmentImages response element from \a xml.
 */
void ListCuratedEnvironmentImagesResponsePrivate::parseListCuratedEnvironmentImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCuratedEnvironmentImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

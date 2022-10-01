// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invalidateprojectcacheresponse.h"
#include "invalidateprojectcacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::InvalidateProjectCacheResponse
 * \brief The InvalidateProjectCacheResponse class provides an interace for CodeBuild InvalidateProjectCache responses.
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
 * \sa CodeBuildClient::invalidateProjectCache
 */

/*!
 * Constructs a InvalidateProjectCacheResponse object for \a reply to \a request, with parent \a parent.
 */
InvalidateProjectCacheResponse::InvalidateProjectCacheResponse(
        const InvalidateProjectCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new InvalidateProjectCacheResponsePrivate(this), parent)
{
    setRequest(new InvalidateProjectCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvalidateProjectCacheRequest * InvalidateProjectCacheResponse::request() const
{
    Q_D(const InvalidateProjectCacheResponse);
    return static_cast<const InvalidateProjectCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild InvalidateProjectCache \a response.
 */
void InvalidateProjectCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvalidateProjectCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::InvalidateProjectCacheResponsePrivate
 * \brief The InvalidateProjectCacheResponsePrivate class provides private implementation for InvalidateProjectCacheResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a InvalidateProjectCacheResponsePrivate object with public implementation \a q.
 */
InvalidateProjectCacheResponsePrivate::InvalidateProjectCacheResponsePrivate(
    InvalidateProjectCacheResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild InvalidateProjectCache response element from \a xml.
 */
void InvalidateProjectCacheResponsePrivate::parseInvalidateProjectCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvalidateProjectCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

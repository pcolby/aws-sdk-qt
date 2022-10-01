// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbuildbatchesresponse.h"
#include "listbuildbatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListBuildBatchesResponse
 * \brief The ListBuildBatchesResponse class provides an interace for CodeBuild ListBuildBatches responses.
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
 * \sa CodeBuildClient::listBuildBatches
 */

/*!
 * Constructs a ListBuildBatchesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBuildBatchesResponse::ListBuildBatchesResponse(
        const ListBuildBatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListBuildBatchesResponsePrivate(this), parent)
{
    setRequest(new ListBuildBatchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBuildBatchesRequest * ListBuildBatchesResponse::request() const
{
    Q_D(const ListBuildBatchesResponse);
    return static_cast<const ListBuildBatchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListBuildBatches \a response.
 */
void ListBuildBatchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBuildBatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListBuildBatchesResponsePrivate
 * \brief The ListBuildBatchesResponsePrivate class provides private implementation for ListBuildBatchesResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListBuildBatchesResponsePrivate object with public implementation \a q.
 */
ListBuildBatchesResponsePrivate::ListBuildBatchesResponsePrivate(
    ListBuildBatchesResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListBuildBatches response element from \a xml.
 */
void ListBuildBatchesResponsePrivate::parseListBuildBatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBuildBatchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

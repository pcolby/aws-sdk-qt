// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetbuildbatchesresponse.h"
#include "batchgetbuildbatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildBatchesResponse
 * \brief The BatchGetBuildBatchesResponse class provides an interace for CodeBuild BatchGetBuildBatches responses.
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
 * \sa CodeBuildClient::batchGetBuildBatches
 */

/*!
 * Constructs a BatchGetBuildBatchesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetBuildBatchesResponse::BatchGetBuildBatchesResponse(
        const BatchGetBuildBatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new BatchGetBuildBatchesResponsePrivate(this), parent)
{
    setRequest(new BatchGetBuildBatchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetBuildBatchesRequest * BatchGetBuildBatchesResponse::request() const
{
    Q_D(const BatchGetBuildBatchesResponse);
    return static_cast<const BatchGetBuildBatchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild BatchGetBuildBatches \a response.
 */
void BatchGetBuildBatchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetBuildBatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildBatchesResponsePrivate
 * \brief The BatchGetBuildBatchesResponsePrivate class provides private implementation for BatchGetBuildBatchesResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildBatchesResponsePrivate object with public implementation \a q.
 */
BatchGetBuildBatchesResponsePrivate::BatchGetBuildBatchesResponsePrivate(
    BatchGetBuildBatchesResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild BatchGetBuildBatches response element from \a xml.
 */
void BatchGetBuildBatchesResponsePrivate::parseBatchGetBuildBatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBuildBatchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

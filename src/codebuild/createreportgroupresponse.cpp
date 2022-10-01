// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreportgroupresponse.h"
#include "createreportgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::CreateReportGroupResponse
 * \brief The CreateReportGroupResponse class provides an interace for CodeBuild CreateReportGroup responses.
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
 * \sa CodeBuildClient::createReportGroup
 */

/*!
 * Constructs a CreateReportGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReportGroupResponse::CreateReportGroupResponse(
        const CreateReportGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new CreateReportGroupResponsePrivate(this), parent)
{
    setRequest(new CreateReportGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReportGroupRequest * CreateReportGroupResponse::request() const
{
    Q_D(const CreateReportGroupResponse);
    return static_cast<const CreateReportGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild CreateReportGroup \a response.
 */
void CreateReportGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReportGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::CreateReportGroupResponsePrivate
 * \brief The CreateReportGroupResponsePrivate class provides private implementation for CreateReportGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CreateReportGroupResponsePrivate object with public implementation \a q.
 */
CreateReportGroupResponsePrivate::CreateReportGroupResponsePrivate(
    CreateReportGroupResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild CreateReportGroup response element from \a xml.
 */
void CreateReportGroupResponsePrivate::parseCreateReportGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReportGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

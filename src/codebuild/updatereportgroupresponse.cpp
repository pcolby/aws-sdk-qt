// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereportgroupresponse.h"
#include "updatereportgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::UpdateReportGroupResponse
 * \brief The UpdateReportGroupResponse class provides an interace for CodeBuild UpdateReportGroup responses.
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
 * \sa CodeBuildClient::updateReportGroup
 */

/*!
 * Constructs a UpdateReportGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReportGroupResponse::UpdateReportGroupResponse(
        const UpdateReportGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new UpdateReportGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateReportGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReportGroupRequest * UpdateReportGroupResponse::request() const
{
    Q_D(const UpdateReportGroupResponse);
    return static_cast<const UpdateReportGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild UpdateReportGroup \a response.
 */
void UpdateReportGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReportGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::UpdateReportGroupResponsePrivate
 * \brief The UpdateReportGroupResponsePrivate class provides private implementation for UpdateReportGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a UpdateReportGroupResponsePrivate object with public implementation \a q.
 */
UpdateReportGroupResponsePrivate::UpdateReportGroupResponsePrivate(
    UpdateReportGroupResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild UpdateReportGroup response element from \a xml.
 */
void UpdateReportGroupResponsePrivate::parseUpdateReportGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReportGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatewebhookresponse.h"
#include "updatewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::UpdateWebhookResponse
 * \brief The UpdateWebhookResponse class provides an interace for CodeBuild UpdateWebhook responses.
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
 * \sa CodeBuildClient::updateWebhook
 */

/*!
 * Constructs a UpdateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWebhookResponse::UpdateWebhookResponse(
        const UpdateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new UpdateWebhookResponsePrivate(this), parent)
{
    setRequest(new UpdateWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWebhookRequest * UpdateWebhookResponse::request() const
{
    Q_D(const UpdateWebhookResponse);
    return static_cast<const UpdateWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild UpdateWebhook \a response.
 */
void UpdateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::UpdateWebhookResponsePrivate
 * \brief The UpdateWebhookResponsePrivate class provides private implementation for UpdateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a UpdateWebhookResponsePrivate object with public implementation \a q.
 */
UpdateWebhookResponsePrivate::UpdateWebhookResponsePrivate(
    UpdateWebhookResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild UpdateWebhook response element from \a xml.
 */
void UpdateWebhookResponsePrivate::parseUpdateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

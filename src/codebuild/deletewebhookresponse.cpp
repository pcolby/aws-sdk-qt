// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewebhookresponse.h"
#include "deletewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteWebhookResponse
 * \brief The DeleteWebhookResponse class provides an interace for CodeBuild DeleteWebhook responses.
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
 * \sa CodeBuildClient::deleteWebhook
 */

/*!
 * Constructs a DeleteWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWebhookResponse::DeleteWebhookResponse(
        const DeleteWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DeleteWebhookResponsePrivate(this), parent)
{
    setRequest(new DeleteWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWebhookRequest * DeleteWebhookResponse::request() const
{
    Q_D(const DeleteWebhookResponse);
    return static_cast<const DeleteWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild DeleteWebhook \a response.
 */
void DeleteWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::DeleteWebhookResponsePrivate
 * \brief The DeleteWebhookResponsePrivate class provides private implementation for DeleteWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteWebhookResponsePrivate object with public implementation \a q.
 */
DeleteWebhookResponsePrivate::DeleteWebhookResponsePrivate(
    DeleteWebhookResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild DeleteWebhook response element from \a xml.
 */
void DeleteWebhookResponsePrivate::parseDeleteWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

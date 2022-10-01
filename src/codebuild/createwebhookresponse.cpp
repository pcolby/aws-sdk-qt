// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwebhookresponse.h"
#include "createwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::CreateWebhookResponse
 * \brief The CreateWebhookResponse class provides an interace for CodeBuild CreateWebhook responses.
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
 * \sa CodeBuildClient::createWebhook
 */

/*!
 * Constructs a CreateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWebhookResponse::CreateWebhookResponse(
        const CreateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new CreateWebhookResponsePrivate(this), parent)
{
    setRequest(new CreateWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWebhookRequest * CreateWebhookResponse::request() const
{
    Q_D(const CreateWebhookResponse);
    return static_cast<const CreateWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild CreateWebhook \a response.
 */
void CreateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::CreateWebhookResponsePrivate
 * \brief The CreateWebhookResponsePrivate class provides private implementation for CreateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CreateWebhookResponsePrivate object with public implementation \a q.
 */
CreateWebhookResponsePrivate::CreateWebhookResponsePrivate(
    CreateWebhookResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild CreateWebhook response element from \a xml.
 */
void CreateWebhookResponsePrivate::parseCreateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws

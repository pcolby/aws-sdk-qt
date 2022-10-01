// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwebhookresponse.h"
#include "createwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateWebhookResponse
 * \brief The CreateWebhookResponse class provides an interace for Amplify CreateWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createWebhook
 */

/*!
 * Constructs a CreateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWebhookResponse::CreateWebhookResponse(
        const CreateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateWebhookResponsePrivate(this), parent)
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
 * Parses a successful Amplify CreateWebhook \a response.
 */
void CreateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateWebhookResponsePrivate
 * \brief The CreateWebhookResponsePrivate class provides private implementation for CreateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateWebhookResponsePrivate object with public implementation \a q.
 */
CreateWebhookResponsePrivate::CreateWebhookResponsePrivate(
    CreateWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateWebhook response element from \a xml.
 */
void CreateWebhookResponsePrivate::parseCreateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws

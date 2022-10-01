// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatewebhookresponse.h"
#include "updatewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateWebhookResponse
 * \brief The UpdateWebhookResponse class provides an interace for Amplify UpdateWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateWebhook
 */

/*!
 * Constructs a UpdateWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWebhookResponse::UpdateWebhookResponse(
        const UpdateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateWebhookResponsePrivate(this), parent)
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
 * Parses a successful Amplify UpdateWebhook \a response.
 */
void UpdateWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateWebhookResponsePrivate
 * \brief The UpdateWebhookResponsePrivate class provides private implementation for UpdateWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateWebhookResponsePrivate object with public implementation \a q.
 */
UpdateWebhookResponsePrivate::UpdateWebhookResponsePrivate(
    UpdateWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateWebhook response element from \a xml.
 */
void UpdateWebhookResponsePrivate::parseUpdateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws

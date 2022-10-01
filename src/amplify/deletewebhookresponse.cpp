// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewebhookresponse.h"
#include "deletewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteWebhookResponse
 * \brief The DeleteWebhookResponse class provides an interace for Amplify DeleteWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteWebhook
 */

/*!
 * Constructs a DeleteWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWebhookResponse::DeleteWebhookResponse(
        const DeleteWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteWebhookResponsePrivate(this), parent)
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
 * Parses a successful Amplify DeleteWebhook \a response.
 */
void DeleteWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteWebhookResponsePrivate
 * \brief The DeleteWebhookResponsePrivate class provides private implementation for DeleteWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteWebhookResponsePrivate object with public implementation \a q.
 */
DeleteWebhookResponsePrivate::DeleteWebhookResponsePrivate(
    DeleteWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteWebhook response element from \a xml.
 */
void DeleteWebhookResponsePrivate::parseDeleteWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws

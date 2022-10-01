// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwebhookresponse.h"
#include "getwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetWebhookResponse
 * \brief The GetWebhookResponse class provides an interace for Amplify GetWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getWebhook
 */

/*!
 * Constructs a GetWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
GetWebhookResponse::GetWebhookResponse(
        const GetWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetWebhookResponsePrivate(this), parent)
{
    setRequest(new GetWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWebhookRequest * GetWebhookResponse::request() const
{
    Q_D(const GetWebhookResponse);
    return static_cast<const GetWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetWebhook \a response.
 */
void GetWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetWebhookResponsePrivate
 * \brief The GetWebhookResponsePrivate class provides private implementation for GetWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetWebhookResponsePrivate object with public implementation \a q.
 */
GetWebhookResponsePrivate::GetWebhookResponsePrivate(
    GetWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetWebhook response element from \a xml.
 */
void GetWebhookResponsePrivate::parseGetWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws

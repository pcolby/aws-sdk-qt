// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwebhooksresponse.h"
#include "listwebhooksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListWebhooksResponse
 * \brief The ListWebhooksResponse class provides an interace for Amplify ListWebhooks responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listWebhooks
 */

/*!
 * Constructs a ListWebhooksResponse object for \a reply to \a request, with parent \a parent.
 */
ListWebhooksResponse::ListWebhooksResponse(
        const ListWebhooksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListWebhooksResponsePrivate(this), parent)
{
    setRequest(new ListWebhooksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWebhooksRequest * ListWebhooksResponse::request() const
{
    Q_D(const ListWebhooksResponse);
    return static_cast<const ListWebhooksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify ListWebhooks \a response.
 */
void ListWebhooksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWebhooksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListWebhooksResponsePrivate
 * \brief The ListWebhooksResponsePrivate class provides private implementation for ListWebhooksResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListWebhooksResponsePrivate object with public implementation \a q.
 */
ListWebhooksResponsePrivate::ListWebhooksResponsePrivate(
    ListWebhooksResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListWebhooks response element from \a xml.
 */
void ListWebhooksResponsePrivate::parseListWebhooksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWebhooksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws

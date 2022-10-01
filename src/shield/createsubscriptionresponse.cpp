// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsubscriptionresponse.h"
#include "createsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateSubscriptionResponse
 * \brief The CreateSubscriptionResponse class provides an interace for Shield CreateSubscription responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::createSubscription
 */

/*!
 * Constructs a CreateSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubscriptionResponse::CreateSubscriptionResponse(
        const CreateSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new CreateSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubscriptionRequest * CreateSubscriptionResponse::request() const
{
    Q_D(const CreateSubscriptionResponse);
    return static_cast<const CreateSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield CreateSubscription \a response.
 */
void CreateSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::CreateSubscriptionResponsePrivate
 * \brief The CreateSubscriptionResponsePrivate class provides private implementation for CreateSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateSubscriptionResponsePrivate::CreateSubscriptionResponsePrivate(
    CreateSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield CreateSubscription response element from \a xml.
 */
void CreateSubscriptionResponsePrivate::parseCreateSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws

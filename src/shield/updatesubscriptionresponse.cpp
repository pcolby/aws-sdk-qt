// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubscriptionresponse.h"
#include "updatesubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateSubscriptionResponse
 * \brief The UpdateSubscriptionResponse class provides an interace for Shield UpdateSubscription responses.
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
 * \sa ShieldClient::updateSubscription
 */

/*!
 * Constructs a UpdateSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubscriptionResponse::UpdateSubscriptionResponse(
        const UpdateSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new UpdateSubscriptionResponsePrivate(this), parent)
{
    setRequest(new UpdateSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubscriptionRequest * UpdateSubscriptionResponse::request() const
{
    Q_D(const UpdateSubscriptionResponse);
    return static_cast<const UpdateSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield UpdateSubscription \a response.
 */
void UpdateSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::UpdateSubscriptionResponsePrivate
 * \brief The UpdateSubscriptionResponsePrivate class provides private implementation for UpdateSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateSubscriptionResponsePrivate object with public implementation \a q.
 */
UpdateSubscriptionResponsePrivate::UpdateSubscriptionResponsePrivate(
    UpdateSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield UpdateSubscription response element from \a xml.
 */
void UpdateSubscriptionResponsePrivate::parseUpdateSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws

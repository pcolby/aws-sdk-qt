// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesubscriptionresponse.h"
#include "deletesubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteSubscriptionResponse
 * \brief The DeleteSubscriptionResponse class provides an interace for Shield DeleteSubscription responses.
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
 * \sa ShieldClient::deleteSubscription
 */

/*!
 * Constructs a DeleteSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubscriptionResponse::DeleteSubscriptionResponse(
        const DeleteSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DeleteSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSubscriptionRequest * DeleteSubscriptionResponse::request() const
{
    Q_D(const DeleteSubscriptionResponse);
    return static_cast<const DeleteSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DeleteSubscription \a response.
 */
void DeleteSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DeleteSubscriptionResponsePrivate
 * \brief The DeleteSubscriptionResponsePrivate class provides private implementation for DeleteSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteSubscriptionResponsePrivate::DeleteSubscriptionResponsePrivate(
    DeleteSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DeleteSubscription response element from \a xml.
 */
void DeleteSubscriptionResponsePrivate::parseDeleteSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws

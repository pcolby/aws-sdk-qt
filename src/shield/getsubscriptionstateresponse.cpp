// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsubscriptionstateresponse.h"
#include "getsubscriptionstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::GetSubscriptionStateResponse
 * \brief The GetSubscriptionStateResponse class provides an interace for Shield GetSubscriptionState responses.
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
 * \sa ShieldClient::getSubscriptionState
 */

/*!
 * Constructs a GetSubscriptionStateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSubscriptionStateResponse::GetSubscriptionStateResponse(
        const GetSubscriptionStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new GetSubscriptionStateResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSubscriptionStateRequest * GetSubscriptionStateResponse::request() const
{
    Q_D(const GetSubscriptionStateResponse);
    return static_cast<const GetSubscriptionStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield GetSubscriptionState \a response.
 */
void GetSubscriptionStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSubscriptionStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::GetSubscriptionStateResponsePrivate
 * \brief The GetSubscriptionStateResponsePrivate class provides private implementation for GetSubscriptionStateResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a GetSubscriptionStateResponsePrivate object with public implementation \a q.
 */
GetSubscriptionStateResponsePrivate::GetSubscriptionStateResponsePrivate(
    GetSubscriptionStateResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield GetSubscriptionState response element from \a xml.
 */
void GetSubscriptionStateResponsePrivate::parseGetSubscriptionStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws

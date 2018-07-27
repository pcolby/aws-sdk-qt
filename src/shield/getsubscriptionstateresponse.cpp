/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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

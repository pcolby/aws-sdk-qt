/*
    Copyright 2013-2021 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
    return static_cast<const CreateSubscriptionRequest *>(ShieldResponse::request());
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

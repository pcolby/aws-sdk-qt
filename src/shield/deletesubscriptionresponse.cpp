/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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

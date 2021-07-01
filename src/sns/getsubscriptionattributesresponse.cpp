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

#include "getsubscriptionattributesresponse.h"
#include "getsubscriptionattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::GetSubscriptionAttributesResponse
 * \brief The GetSubscriptionAttributesResponse class provides an interace for SNS GetSubscriptionAttributes responses.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see the <a
 *  href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity and access
 *  management in Amazon SNS</a> in the <i>Amazon SNS Developer Guide.</i>
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::getSubscriptionAttributes
 */

/*!
 * Constructs a GetSubscriptionAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSubscriptionAttributesResponse::GetSubscriptionAttributesResponse(
        const GetSubscriptionAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new GetSubscriptionAttributesResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSubscriptionAttributesRequest * GetSubscriptionAttributesResponse::request() const
{
    Q_D(const GetSubscriptionAttributesResponse);
    return static_cast<const GetSubscriptionAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS GetSubscriptionAttributes \a response.
 */
void GetSubscriptionAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSubscriptionAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::GetSubscriptionAttributesResponsePrivate
 * \brief The GetSubscriptionAttributesResponsePrivate class provides private implementation for GetSubscriptionAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a GetSubscriptionAttributesResponsePrivate object with public implementation \a q.
 */
GetSubscriptionAttributesResponsePrivate::GetSubscriptionAttributesResponsePrivate(
    GetSubscriptionAttributesResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS GetSubscriptionAttributes response element from \a xml.
 */
void GetSubscriptionAttributesResponsePrivate::parseGetSubscriptionAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SNS
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setsubscriptionattributesresponse.h"
#include "setsubscriptionattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::SetSubscriptionAttributesResponse
 * \brief The SetSubscriptionAttributesResponse class provides an interace for Sns SetSubscriptionAttributes responses.
 *
 * \inmodule QtAwsSns
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
 * \sa SnsClient::setSubscriptionAttributes
 */

/*!
 * Constructs a SetSubscriptionAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
SetSubscriptionAttributesResponse::SetSubscriptionAttributesResponse(
        const SetSubscriptionAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new SetSubscriptionAttributesResponsePrivate(this), parent)
{
    setRequest(new SetSubscriptionAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetSubscriptionAttributesRequest * SetSubscriptionAttributesResponse::request() const
{
    Q_D(const SetSubscriptionAttributesResponse);
    return static_cast<const SetSubscriptionAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns SetSubscriptionAttributes \a response.
 */
void SetSubscriptionAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetSubscriptionAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::SetSubscriptionAttributesResponsePrivate
 * \brief The SetSubscriptionAttributesResponsePrivate class provides private implementation for SetSubscriptionAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a SetSubscriptionAttributesResponsePrivate object with public implementation \a q.
 */
SetSubscriptionAttributesResponsePrivate::SetSubscriptionAttributesResponsePrivate(
    SetSubscriptionAttributesResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns SetSubscriptionAttributes response element from \a xml.
 */
void SetSubscriptionAttributesResponsePrivate::parseSetSubscriptionAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSubscriptionAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

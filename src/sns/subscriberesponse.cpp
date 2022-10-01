// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "subscriberesponse.h"
#include "subscriberesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::SubscribeResponse
 * \brief The SubscribeResponse class provides an interace for Sns Subscribe responses.
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
 * \sa SnsClient::subscribe
 */

/*!
 * Constructs a SubscribeResponse object for \a reply to \a request, with parent \a parent.
 */
SubscribeResponse::SubscribeResponse(
        const SubscribeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new SubscribeResponsePrivate(this), parent)
{
    setRequest(new SubscribeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubscribeRequest * SubscribeResponse::request() const
{
    Q_D(const SubscribeResponse);
    return static_cast<const SubscribeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns Subscribe \a response.
 */
void SubscribeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubscribeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::SubscribeResponsePrivate
 * \brief The SubscribeResponsePrivate class provides private implementation for SubscribeResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a SubscribeResponsePrivate object with public implementation \a q.
 */
SubscribeResponsePrivate::SubscribeResponsePrivate(
    SubscribeResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns Subscribe response element from \a xml.
 */
void SubscribeResponsePrivate::parseSubscribeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

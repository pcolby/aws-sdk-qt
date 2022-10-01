// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsmssandboxphonenumbersresponse.h"
#include "listsmssandboxphonenumbersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::ListSMSSandboxPhoneNumbersResponse
 * \brief The ListSMSSandboxPhoneNumbersResponse class provides an interace for Sns ListSMSSandboxPhoneNumbers responses.
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
 * \sa SnsClient::listSMSSandboxPhoneNumbers
 */

/*!
 * Constructs a ListSMSSandboxPhoneNumbersResponse object for \a reply to \a request, with parent \a parent.
 */
ListSMSSandboxPhoneNumbersResponse::ListSMSSandboxPhoneNumbersResponse(
        const ListSMSSandboxPhoneNumbersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new ListSMSSandboxPhoneNumbersResponsePrivate(this), parent)
{
    setRequest(new ListSMSSandboxPhoneNumbersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSMSSandboxPhoneNumbersRequest * ListSMSSandboxPhoneNumbersResponse::request() const
{
    Q_D(const ListSMSSandboxPhoneNumbersResponse);
    return static_cast<const ListSMSSandboxPhoneNumbersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns ListSMSSandboxPhoneNumbers \a response.
 */
void ListSMSSandboxPhoneNumbersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSMSSandboxPhoneNumbersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::ListSMSSandboxPhoneNumbersResponsePrivate
 * \brief The ListSMSSandboxPhoneNumbersResponsePrivate class provides private implementation for ListSMSSandboxPhoneNumbersResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a ListSMSSandboxPhoneNumbersResponsePrivate object with public implementation \a q.
 */
ListSMSSandboxPhoneNumbersResponsePrivate::ListSMSSandboxPhoneNumbersResponsePrivate(
    ListSMSSandboxPhoneNumbersResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns ListSMSSandboxPhoneNumbers response element from \a xml.
 */
void ListSMSSandboxPhoneNumbersResponsePrivate::parseListSMSSandboxPhoneNumbersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSMSSandboxPhoneNumbersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

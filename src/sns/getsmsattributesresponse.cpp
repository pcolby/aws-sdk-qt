// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmsattributesresponse.h"
#include "getsmsattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::GetSMSAttributesResponse
 * \brief The GetSMSAttributesResponse class provides an interace for Sns GetSMSAttributes responses.
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
 * \sa SnsClient::getSMSAttributes
 */

/*!
 * Constructs a GetSMSAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSMSAttributesResponse::GetSMSAttributesResponse(
        const GetSMSAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new GetSMSAttributesResponsePrivate(this), parent)
{
    setRequest(new GetSMSAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSMSAttributesRequest * GetSMSAttributesResponse::request() const
{
    Q_D(const GetSMSAttributesResponse);
    return static_cast<const GetSMSAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns GetSMSAttributes \a response.
 */
void GetSMSAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSMSAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::GetSMSAttributesResponsePrivate
 * \brief The GetSMSAttributesResponsePrivate class provides private implementation for GetSMSAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a GetSMSAttributesResponsePrivate object with public implementation \a q.
 */
GetSMSAttributesResponsePrivate::GetSMSAttributesResponsePrivate(
    GetSMSAttributesResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns GetSMSAttributes response element from \a xml.
 */
void GetSMSAttributesResponsePrivate::parseGetSMSAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSMSAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

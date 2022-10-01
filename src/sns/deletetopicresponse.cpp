// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetopicresponse.h"
#include "deletetopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::DeleteTopicResponse
 * \brief The DeleteTopicResponse class provides an interace for Sns DeleteTopic responses.
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
 * \sa SnsClient::deleteTopic
 */

/*!
 * Constructs a DeleteTopicResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTopicResponse::DeleteTopicResponse(
        const DeleteTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new DeleteTopicResponsePrivate(this), parent)
{
    setRequest(new DeleteTopicRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTopicRequest * DeleteTopicResponse::request() const
{
    Q_D(const DeleteTopicResponse);
    return static_cast<const DeleteTopicRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns DeleteTopic \a response.
 */
void DeleteTopicResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTopicResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::DeleteTopicResponsePrivate
 * \brief The DeleteTopicResponsePrivate class provides private implementation for DeleteTopicResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a DeleteTopicResponsePrivate object with public implementation \a q.
 */
DeleteTopicResponsePrivate::DeleteTopicResponsePrivate(
    DeleteTopicResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns DeleteTopic response element from \a xml.
 */
void DeleteTopicResponsePrivate::parseDeleteTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTopicResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

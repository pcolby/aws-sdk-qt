// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplatformapplicationsresponse.h"
#include "listplatformapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::ListPlatformApplicationsResponse
 * \brief The ListPlatformApplicationsResponse class provides an interace for Sns ListPlatformApplications responses.
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
 * \sa SnsClient::listPlatformApplications
 */

/*!
 * Constructs a ListPlatformApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPlatformApplicationsResponse::ListPlatformApplicationsResponse(
        const ListPlatformApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new ListPlatformApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListPlatformApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPlatformApplicationsRequest * ListPlatformApplicationsResponse::request() const
{
    Q_D(const ListPlatformApplicationsResponse);
    return static_cast<const ListPlatformApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns ListPlatformApplications \a response.
 */
void ListPlatformApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPlatformApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::ListPlatformApplicationsResponsePrivate
 * \brief The ListPlatformApplicationsResponsePrivate class provides private implementation for ListPlatformApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a ListPlatformApplicationsResponsePrivate object with public implementation \a q.
 */
ListPlatformApplicationsResponsePrivate::ListPlatformApplicationsResponsePrivate(
    ListPlatformApplicationsResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns ListPlatformApplications response element from \a xml.
 */
void ListPlatformApplicationsResponsePrivate::parseListPlatformApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlatformApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

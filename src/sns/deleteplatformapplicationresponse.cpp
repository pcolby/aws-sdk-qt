// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplatformapplicationresponse.h"
#include "deleteplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::DeletePlatformApplicationResponse
 * \brief The DeletePlatformApplicationResponse class provides an interace for Sns DeletePlatformApplication responses.
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
 * \sa SnsClient::deletePlatformApplication
 */

/*!
 * Constructs a DeletePlatformApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlatformApplicationResponse::DeletePlatformApplicationResponse(
        const DeletePlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new DeletePlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new DeletePlatformApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlatformApplicationRequest * DeletePlatformApplicationResponse::request() const
{
    Q_D(const DeletePlatformApplicationResponse);
    return static_cast<const DeletePlatformApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sns DeletePlatformApplication \a response.
 */
void DeletePlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlatformApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sns::DeletePlatformApplicationResponsePrivate
 * \brief The DeletePlatformApplicationResponsePrivate class provides private implementation for DeletePlatformApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a DeletePlatformApplicationResponsePrivate object with public implementation \a q.
 */
DeletePlatformApplicationResponsePrivate::DeletePlatformApplicationResponsePrivate(
    DeletePlatformApplicationResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a Sns DeletePlatformApplication response element from \a xml.
 */
void DeletePlatformApplicationResponsePrivate::parseDeletePlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlatformApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sns
} // namespace QtAws

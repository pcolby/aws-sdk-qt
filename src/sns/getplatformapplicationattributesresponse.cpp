/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getplatformapplicationattributesresponse.h"
#include "getplatformapplicationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::GetPlatformApplicationAttributesResponse
 * \brief The GetPlatformApplicationAttributesResponse class provides an interace for SNS GetPlatformApplicationAttributes responses.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::getPlatformApplicationAttributes
 */

/*!
 * Constructs a GetPlatformApplicationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetPlatformApplicationAttributesResponse::GetPlatformApplicationAttributesResponse(
        const GetPlatformApplicationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new GetPlatformApplicationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetPlatformApplicationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPlatformApplicationAttributesRequest * GetPlatformApplicationAttributesResponse::request() const
{
    Q_D(const GetPlatformApplicationAttributesResponse);
    return static_cast<const GetPlatformApplicationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS GetPlatformApplicationAttributes \a response.
 */
void GetPlatformApplicationAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPlatformApplicationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::GetPlatformApplicationAttributesResponsePrivate
 * \brief The GetPlatformApplicationAttributesResponsePrivate class provides private implementation for GetPlatformApplicationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a GetPlatformApplicationAttributesResponsePrivate object with public implementation \a q.
 */
GetPlatformApplicationAttributesResponsePrivate::GetPlatformApplicationAttributesResponsePrivate(
    GetPlatformApplicationAttributesResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS GetPlatformApplicationAttributes response element from \a xml.
 */
void GetPlatformApplicationAttributesResponsePrivate::parseGetPlatformApplicationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlatformApplicationAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
